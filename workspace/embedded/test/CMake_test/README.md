����һ������stm32��CMake�������

��CMake���̸���CubeMX�����ɵ�makefile�ļ���д����

���Է���Ϊ��
1. ����Ŀ¼�µ�build�ļ�����
2. �������Windowsϵͳ��������
``` shell
cmake ../ -G 'MinGW Makefiles'

make
```

�������Linuxϵͳ������ֱ������
``` shell
cmake ../

make
```
3. ������λ��build�ļ�����

��CMake���̼ܹ����Բ鿴��Ŀ¼�µ�CMakeLists.txt,���������ļ���cmake�ļ�����

ע�⣺�ļ�·�����ܺ��пո�make�����޷�ʶ���пո��·��

�����̲ο���https://github.com/rxdu/stm32_cmake