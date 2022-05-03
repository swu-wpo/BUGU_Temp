#ifndef __0_0_0_SUBTRANS_0_STM32F401CC_3_USART_H__
#define __0_0_0_SUBTRANS_0_STM32F401CC_3_USART_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_ll_usart.h"


/***************************************************************
这个枚举实际上已经引入过一次了，但是因为引入的类是平等关系，所以我们不管，可以再次引入
当然也可以直接使用前面已经引入的那个枚举，如果在前端某个方法需要使用这个枚举，可以副本创建枚举然后链接到之前那个枚举即可
而此时我们在后端也可以不用重新再生成一遍，直接使用前面的值即可，在后面我会假设这种情况
***************************************************************/
typedef ErrorStatus Object_OptionEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_0_ErrorStatus;
#define Object_OptionEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_0_ErrorStatus_0_SUCCESS  SUCCESS
#define Object_OptionEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_0_ErrorStatus_1_ERROR    ERROR

typedef USART_TypeDef Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef;
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_0_U32_SR   SR
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_1_U32_DR   DR
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_2_U32_BRR  BRR
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_3_U32_CR1  CR1
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_4_U32_CR2  CR2
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_5_U32_CR3  CR3
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_USART_TypeDef_6_U32_GTPR GTPR

typedef LL_USART_InitTypeDef Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef;
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_0_U32_BaudRate  BaudRate
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_1_DataEnum_DataWidth DataWidth
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_2_DataEnum_StopBits  StopBits
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_3_DataEnum_Parity    Parity
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_4_DataEnum_TransferDirection TransferDirection
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_5_DataEnum_HardwareFlowControl   HardwareFlowControl
#define Object_OptionStruct_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_InitTypeDef_6_DataEnum_OverSampling  OverSampling

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_3_LL_USART_DATAWIDTH_0_LL_USART_DATAWIDTH_8B   LL_USART_DATAWIDTH_8B
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_3_LL_USART_DATAWIDTH_1_LL_USART_DATAWIDTH_9B   LL_USART_DATAWIDTH_9B

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_4_LL_USART_STOPBITS_0_LL_USART_STOPBITS_0_5    LL_USART_STOPBITS_0_5
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_4_LL_USART_STOPBITS_1_LL_USART_STOPBITS_1      LL_USART_STOPBITS_1  
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_4_LL_USART_STOPBITS_2_LL_USART_STOPBITS_1_5    LL_USART_STOPBITS_1_5
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_4_LL_USART_STOPBITS_3_LL_USART_STOPBITS_2      LL_USART_STOPBITS_2  

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_5_LL_USART_PARITY_0_LL_USART_PARITY_NONE    LL_USART_PARITY_NONE
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_5_LL_USART_PARITY_1_LL_USART_PARITY_EVEN    LL_USART_PARITY_EVEN
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_5_LL_USART_PARITY_2_LL_USART_PARITY_ODD     LL_USART_PARITY_ODD 

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_6_LL_USART_DIRECTION_0_LL_USART_DIRECTION_NONE  LL_USART_DIRECTION_NONE 
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_6_LL_USART_DIRECTION_1_LL_USART_DIRECTION_RX    LL_USART_DIRECTION_RX   
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_6_LL_USART_DIRECTION_2_LL_USART_DIRECTION_TX    LL_USART_DIRECTION_TX   
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_6_LL_USART_DIRECTION_3_LL_USART_DIRECTION_TX_RX LL_USART_DIRECTION_TX_RX

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_7_LL_USART_HWCONTROL_0_LL_USART_HWCONTROL_NONE      LL_USART_HWCONTROL_NONE   
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_7_LL_USART_HWCONTROL_1_LL_USART_HWCONTROL_RTS       LL_USART_HWCONTROL_RTS    
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_7_LL_USART_HWCONTROL_2_LL_USART_HWCONTROL_CTS       LL_USART_HWCONTROL_CTS    
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_7_LL_USART_HWCONTROL_3_LL_USART_HWCONTROL_RTS_CTS   LL_USART_HWCONTROL_RTS_CTS

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_8_LL_USART_OVERSAMPLING_0_LL_USART_OVERSAMPLING_16  LL_USART_OVERSAMPLING_16
#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_8_LL_USART_OVERSAMPLING_1_LL_USART_OVERSAMPLING_8   LL_USART_OVERSAMPLING_8 

#define Object_DataEnum_0_0_0_SubTrans_0_STM32F401CC_3_USART_9_0_USART1 USART1

#define Func_0_0_0_SubTrans_0_STM32F401CC_3_USART_0_LL_USART_Init_0_Extern(OFormParam_OptionEnum_0_State, OFormParam_OptionStruct_1_USARTx, OFormParam_OptionStruct_2_USART_InitStruct) *OFormParam_OptionEnum_0_State = LL_USART_Init(OFormParam_OptionStruct_1_USARTx, OFormParam_OptionStruct_2_USART_InitStruct)
#define Func_0_0_0_SubTrans_0_STM32F401CC_3_USART_1_LL_USART_ConfigAsyncMode_0_Extern(OFormParam_OptionStruct_0_USARTx) LL_USART_ConfigAsyncMode(OFormParam_OptionStruct_0_USARTx)
#define Func_0_0_0_SubTrans_0_STM32F401CC_3_USART_2_LL_USART_Enable_0_Extern(OFormParam_OptionStruct_0_USARTx) LL_USART_Enable(OFormParam_OptionStruct_0_USARTx)

#ifdef __cplusplus
}
#endif

#endif