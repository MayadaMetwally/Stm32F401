/************************************************************************************************************
 *************************            File Name: RCC_Private.h                       ************************
 *************************            Layer	   : MCAL                                ************************
 *************************            Module   : RCC                                 ************************
 *************************            Version  : V 0.0                               ************************
 *************************            Created  : 2/4/2023                            ************************
 *************************            Author   : Mayada Metwally                     ************************
 *********************Brief: This Header file defines the user Macros for RCC driver*************************.
 ************************************************************************************************************/

#ifndef MCAL_RCC_PRIVATE_H_
#define MCAL_RCC_PRIVATE_H_

/**                RCC BASE ADD              **/
#define RCC_BASE_ADD                 0x40023800

/**                SYSTEM BUS                **/
#define RCC_AHB1                               1
#define RCC_AHB2                               2
#define RCC_APB1                               3
#define RCC_APB2                               4
#define RCC_LPAPB1                             5
#define RCC_LPAPB2                             6
#define RCC_LPAHB1                             7
#define RCC_LPAHB2                             8

/**                SYSTEM CLOCK SOURCE              **/
#define RCC_SYSTEM_CLOCK_HSI                   0
#define RCC_SYSTEM_CLOCK_HSE                   1
#define RCC_SYSTEM_CLOCK_PLL                   2
/**                CLOCK  SOURCE             **/
#define RCC_CLOCK_HSE_CRUSTAL                  3
#define RCC_CLOCK_HSE_RC                       4
#define RCC_CLOCK_HSI                          5
#define RCC_CLOCK_PLL                          6

/**                PLL INPUT                 **/
#define RCC_HSI_DIV_2                          1
#define RCC_HSE_DIV_2                          2
#define RCC_HSE_NO_DIV                         3
/**                PLL SOURCE                 **/
#define RCC_PLL_INPUT_HSI                      0
#define RCC_PLL_INPUT_HSE                      1
#define RCC_PLL_SOURCE                         22

/**              PLL INPUT MULT FACTOR       **/
#define RCC_PLL_MULT_FACTOR_2                  2
#define RCC_PLL_MULT_FACTOR_3                  3
#define RCC_PLL_MULT_FACTOR_4                  4
#define RCC_PLL_MULT_FACTOR_5                  5
#define RCC_PLL_MULT_FACTOR_6                  6
#define RCC_PLL_MULT_FACTOR_7                  7
#define RCC_PLL_MULT_FACTOR_8                  8
#define RCC_PLL_MULT_FACTOR_9                  9
#define RCC_PLL_MULT_FACTOR_10                 10
#define RCC_PLL_MULT_FACTOR_11                 11
#define RCC_PLL_MULT_FACTOR_12                 12
#define RCC_PLL_MULT_FACTOR_13                 13
#define RCC_PLL_MULT_FACTOR_14                 14
#define RCC_PLL_MULT_FACTOR_15                 15
#define RCC_PLL_MULT_FACTOR_16                 16


#define RCC_NUMBER_OF_PINS                     32
/**                CLOCK  STATUS            **/
#define RCC_ENABLE                             1
#define RCC_DISABLE                            2
/**                CLOCK  STATUS            **/
#define RCC_CLK_READY                          1
#define RCC_CLK_NOT_READY                      0
/**                PLL INPUT SOURCE            **/
#define RCC_HSI_PLL_SOURCE                     0
#define RCC_HSE_PLL_SOURCE                     1
/* Masks used for Check status functions */
#define RCC_HSE_ENABLE_MASK                    16
#define RCC_PLL_ENABLE_MASK                    24
#define RCC_PLL_SOURCE_MASK                    22
#define RCC_HSE_RC_ENABLE_MASK                 0X00050000
#define RCC_HSI_ENABLE_MASK                    0X00000081
#define RCC_HSI_SYSTEM_CLOCK_MASK              0X00000000
#define RCC_HSE_SYSTEM_CLOCK_MASK              0X00000001
#define RCC_PLL_SYSTEM_CLOCK_MASK              0X00000002
#define RCC_SYSTEM_CLOCK_MASK                  0XFFFFFFFC

#define RCC_SYSTEM_CLK_MASK                    0X0000000C

#define HSI_RDY 		                       1
#define HSE_RDY 		                       17
#define PLL_RDY 		                       25
#define SWS_HSI 		                       0
#define SWS_HSE 	 	                       1
#define SWS_PLL 	 	                       2
#define RCC_SWS_MASK			               2


/* These macros should used with RCC_ControlClockAHP1Peripheral function */
#define RCC_AHB1_GPIOA		0x00000001
#define RCC_AHB1_GPIOB		0x00000002
#define RCC_AHB1_GPIOC		0x00000004
#define RCC_AHB1_GPIOD		0x00000008
#define RCC_AHB1_GPIOE		0x00000010
#define RCC_AHB1_GPIOH		0x00000080
#define RCC_AHB1_CRC	    0x00001000
#define RCC_AHB1_DMA1		0x00200000
#define RCC_AHB1_DMA2		0x00400000

/* These macros should used with RCC_ControlClockAHP2Peripheral function */
#define RCC_AHB2_OTGFS		0x00000080

/* These macros should used with RCC_ControlClockABP1Peripheral function  */

#define RCC_APB1_TIM2       0x00000001
#define RCC_APB1_TIM3       0x00000002
#define RCC_APB1_TIM4       0x00000004
#define RCC_APB1_TIM5       0x00000008
#define RCC_APB1_WWDG       0x00000800
#define RCC_APB1_SPI2       0x00004000
#define RCC_APB1_SPI3       0x00008000
#define RCC_APB1_USART2     0x00020000
#define RCC_APB1_I2C1       0x00200000
#define RCC_APB1_I2C2       0x00400000
#define RCC_APB1_I2C3       0x00800000
#define RCC_APB1_PWR        0x10000000

/* These macros should used with RCC_ControlClockABP2Peripheral function  */

#define RCC_APB2_TIM1       0x00000001
#define RCC_APB2_USART1     0x00000010
#define RCC_APB2_USART6     0x00000020
#define RCC_APB2_ADC1       0x00000100
#define RCC_APB2_SDIO       0x00000800
#define RCC_APB2_SPI1       0x00001000
#define RCC_APB2_SPI4       0x00002000
#define RCC_APB2_SYSCFG     0x00004000
#define RCC_APB2_TIM9       0x00010000
#define RCC_APB2_TIM10      0x00020000
#define RCC_APB2_TIM11      0x00040000

/* These macros should used with MRCC_SelectPLLPFactor function */
#define RCC_PLLP_2         0x00000000
#define RCC_PLLP_4         0x00010000
#define RCC_PLLP_6         0x00020000
#define RCC_PLLP_8         0x00030000
#define RCC_PLLP_MASK      0XFFFCFFFF
/* These macros should used with MRCC_SelectPLLMFactor function */
#define RCC_PLLM_MIN       0x00000002
#define RCC_PLLM_MAX       0x0000003F
#define RCC_PLLM_MASK      0XFFFFFFC0
/* These macros should used with MRCC_SelectPLLNFactor function */
#define RCC_PLLN_MIN       0x00003000
#define RCC_PLLN_MAX       0x00006C00
#define RCC_PLLN_MASK      0XFFFF803F












#endif /* MCAL_RCC_PRIVATE_H_ */
