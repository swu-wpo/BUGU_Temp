// 路由守卫 检测全局所有的路由变化
import router from '../router'
import store from '../store'
import NProgress from 'nprogress' // 进度条
import { getToken, removeToken } from './token'
import { message } from 'ant-design-vue';

const whiteList = ['/entrance', '/page401'] // no redirect whitelist
NProgress.configure({ showSpinner: true }) // showSpinner进度环显示隐藏

/**
  * 这里函数执行时候
  * 1.可以获取地址变化信息
  * 2.这里没有匹配到to地址的路由对象
  * 3.没有加载路由组件
	* 4.参数说明： 
		to:即将要进入的目标路由对象
		from:当前导航正要离开的路由
		next:在前置导航守卫中，一定要写next(),否则页面不会跳转页面
		to,from返回值是一个对象 就是routes数组里面配置的某个具体的路由对象
* */
    
router.beforeEach(async (to, from, next) => {
	// console.log(this);//没有this
  // console.log('from-----',from)//变化前的信息
  // console.log('to-----',to)//变化后的信息
  NProgress.start()
  // 存在token则已登录
  if (getToken()) {
    // 登录过就不能访问登录界面，需要中断这一次路由守卫，执行下一次路由守卫，并且下一次守卫的to是主页
    if (to.path === '/entrance') {
      next({ path: '/' })
      NProgress.done()
    } else {
      // 这个条件证明为新登录的账号，直接将接口返回的权限赋给这个账号即可
      if (store.getters.auths === 'none') {
        // 1、从接口获取当前账号权限
        try {
          const roles = await store.dispatch('getUserInfo')
          const addRouters = await store.dispatch('generateRouters', roles)
          router.addRoutes(addRouters)
          // 如果 addRoutes 并未完成，路由守卫会一层一层的执行执行，直到 addRoutes 完成，找到对应的路由
          next({ ...to, replace: true })
        } catch (err) {
          removeToken()
          message.error('权限获取失败')
          next('/page401')
          NProgress.done()
        }
      } else {
        next()
      }
    }
  // 未登录
  } else {
    // if (from.path !== '/') {
    //   Message.error('token失效，请重新登录')
    // }
    if (whiteList.indexOf(to.path) !== -1) {
      console.log('未登录但是请求页面在白名单')
      // in the free login whitelist, go directly
      next()
    } else {
      console.log('未登录而且页面不在白名单')
      message.error('请先登录！')
      // other pages that do not have permission to access are redirected to the login page.
      next({ path: '/entrance'})
      NProgress.done()
    }
	}
})

// 全局后置钩子 它和前置守卫不同的地方在于 不会接受next函数 也不会改变导航本身 所以后置钩子不用添加next()
router.afterEach(() => {
  // finish progress bar
  NProgress.done()
})
