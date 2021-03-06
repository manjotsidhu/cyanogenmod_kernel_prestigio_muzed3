/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT6582. Copyright MediaTek Inc. (C) 2013.
 * Sat Dec 26 12:01:06 2015
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_ALS_EINT_PIN         (GPIO1 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_MDEINT  GPIO_MODE_03
#define GPIO_ALS_EINT_PIN_M_PWM  GPIO_MODE_01
#define GPIO_ALS_EINT_PIN_M_EINT  GPIO_ALS_EINT_PIN_M_GPIO

#define GPIO_CTP_EINT_PIN         (GPIO2 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CTP_EINT_PIN_M_MDEINT  GPIO_MODE_03
#define GPIO_CTP_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_CTP_EINT_PIN_M_EINT  GPIO_CTP_EINT_PIN_M_GPIO
#define GPIO_CTP_EINT_PIN_CLK     CLK_OUT0
#define GPIO_CTP_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_ACCDET_EINT_PIN         (GPIO4 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_ACCDET_EINT_PIN_M_EINT  GPIO_ACCDET_EINT_PIN_M_GPIO
#define GPIO_ACCDET_EINT_PIN_CLK     CLK_OUT2
#define GPIO_ACCDET_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_MHALL_EINT_PIN         (GPIO6 | 0x80000000)
#define GPIO_MHALL_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MHALL_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_MHALL_EINT_PIN_M_EINT  GPIO_MHALL_EINT_PIN_M_GPIO

#define GPIO_CAMERA_CMRST_PIN         (GPIO9 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_CMRST_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_CAMERA_CMRST_PIN_CLK     CLK_OUT4
#define GPIO_CAMERA_CMRST_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMPDN_PIN         (GPIO10 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_CMPDN_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_CAMERA_CMPDN_PIN_CLK     CLK_OUT5
#define GPIO_CAMERA_CMPDN_PIN_FREQ    GPIO_CLKSRC_NONE
#define GPIO_CAMERA_CMPDN_PIN_NCE     0

#define GPIO_CAMERA_FLASH_MODE_PIN         (GPIO12 | 0x80000000)
#define GPIO_CAMERA_FLASH_MODE_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_MODE_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_FLASH_MODE_PIN_M_KCOL  GPIO_MODE_03
#define GPIO_CAMERA_FLASH_MODE_PIN_M_PWM  GPIO_MODE_02
#define GPIO_CAMERA_FLASH_MODE_PIN_CLK     CLK_OUT5
#define GPIO_CAMERA_FLASH_MODE_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_FLASH_EN_PIN         (GPIO13 | 0x80000000)
#define GPIO_CAMERA_FLASH_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_EN_PIN_M_MDEINT  GPIO_MODE_04

#define GPIO_CTP_RST_PIN         (GPIO14 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_MDEINT  GPIO_MODE_04

#define GPIO_CAMERA_CMRST1_PIN         (GPIO16 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_DAC_CK   GPIO_MODE_02
#define GPIO_CAMERA_CMRST1_PIN_M_ANT_SEL   GPIO_MODE_03
#define GPIO_CAMERA_CMRST1_PIN_M_NLD   GPIO_MODE_04
#define GPIO_CAMERA_CMRST1_PIN_M_CONN_MCU_TRST_B   GPIO_MODE_05
#define GPIO_CAMERA_CMRST1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO18 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_URTS   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN1_PIN_M_BSI_B_DATA   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN1_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN1_PIN_M_DRV_VBUS   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_URTS1_PIN         (GPIO18 | 0x80000000)
#define GPIO_UART_URTS1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URTS1_PIN_M_URTS   GPIO_MODE_01
#define GPIO_UART_URTS1_PIN_M_BSI_B_DATA   GPIO_MODE_02
#define GPIO_UART_URTS1_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_UART_URTS1_PIN_M_DRV_VBUS   GPIO_MODE_04
#define GPIO_UART_URTS1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_PMIC_EINT_PIN         (GPIO25 | 0x80000000)
#define GPIO_PMIC_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PMIC_EINT_PIN_M_EINT  GPIO_PMIC_EINT_PIN_M_GPIO

#define GPIO_SIM1_SCLK         (GPIO29 | 0x80000000)
#define GPIO_SIM1_SCLK_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SCLK_M_CLK  GPIO_MODE_01
#define GPIO_SIM1_SCLK_M_MD1_SIM2_SCLK   GPIO_MODE_02

#define GPIO_SIM1_SRST         (GPIO30 | 0x80000000)
#define GPIO_SIM1_SRST_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SRST_M_PWM  GPIO_MODE_03
#define GPIO_SIM1_SRST_M_MD1_SIM1_SRST   GPIO_MODE_01
#define GPIO_SIM1_SRST_M_MD1_SIM2_SRST   GPIO_MODE_02

#define GPIO_SIM1_SIO         (GPIO31 | 0x80000000)
#define GPIO_SIM1_SIO_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SIO_M_MD1_SIM1_SDAT   GPIO_MODE_01
#define GPIO_SIM1_SIO_M_MD1_SIM2_SDAT   GPIO_MODE_02

#define GPIO_SIM2_SCLK         (GPIO32 | 0x80000000)
#define GPIO_SIM2_SCLK_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SCLK_M_CLK  GPIO_MODE_01
#define GPIO_SIM2_SCLK_M_MD1_SIM1_SCLK   GPIO_MODE_02

#define GPIO_SIM2_SRST         (GPIO33 | 0x80000000)
#define GPIO_SIM2_SRST_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SRST_M_PWM  GPIO_MODE_03
#define GPIO_SIM2_SRST_M_MD1_SIM2_SRST   GPIO_MODE_01
#define GPIO_SIM2_SRST_M_MD1_SIM1_SRST   GPIO_MODE_02

#define GPIO_SIM2_SIO         (GPIO34 | 0x80000000)
#define GPIO_SIM2_SIO_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SIO_M_MD1_SIM2_SDAT   GPIO_MODE_01
#define GPIO_SIM2_SIO_M_MD1_SIM1_SDAT   GPIO_MODE_02
#define GPIO_SIM2_SIO_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_GPS_LNA_PIN         (GPIO47 | 0x80000000)
#define GPIO_GPS_LNA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_PWM  GPIO_MODE_02
#define GPIO_GPS_LNA_PIN_M_ANT_SEL   GPIO_MODE_01
#define GPIO_GPS_LNA_PIN_M_CONN_MCU_DBGACK_N   GPIO_MODE_03
#define GPIO_GPS_LNA_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_KPD_KCOL0_PIN         (GPIO75 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_I2C0_SDA_PIN         (GPIO84 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C0_SCA_PIN         (GPIO85 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         (GPIO86 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO87 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_MATV_I2S_DAT_PIN         (GPIO105 | 0x80000000)
#define GPIO_MATV_I2S_DAT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MATV_I2S_DAT_PIN_M_PWM  GPIO_MODE_05
#define GPIO_MATV_I2S_DAT_PIN_M_I2SIN1_DATA_IN   GPIO_MODE_01
#define GPIO_MATV_I2S_DAT_PIN_M_I2SOUT_DATA_OUT   GPIO_MODE_03
#define GPIO_MATV_I2S_DAT_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MATV_I2S_WS_PIN         (GPIO106 | 0x80000000)
#define GPIO_MATV_I2S_WS_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MATV_I2S_WS_PIN_M_PWM  GPIO_MODE_05
#define GPIO_MATV_I2S_WS_PIN_M_I2SIN1_LRCK   GPIO_MODE_01
#define GPIO_MATV_I2S_WS_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_MATV_I2S_WS_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MATV_I2S_CK_PIN         (GPIO107 | 0x80000000)
#define GPIO_MATV_I2S_CK_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MATV_I2S_CK_PIN_M_CLK  GPIO_MODE_02
#define GPIO_MATV_I2S_CK_PIN_M_PWM  GPIO_MODE_05
#define GPIO_MATV_I2S_CK_PIN_M_I2SIN1_BCK   GPIO_MODE_01
#define GPIO_MATV_I2S_CK_PIN_M_I2SOUT_BCK   GPIO_MODE_03
#define GPIO_MATV_I2S_CK_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_URXD1_PIN         (GPIO108 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD1_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD1_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_UTXD1_PIN         (GPIO109 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD1_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD1_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD1_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MATV_PWR_ENABLE         (GPIO116 | 0x80000000)
#define GPIO_MATV_PWR_ENABLE_M_GPIO  GPIO_MODE_00

#define GPIO_MATV_N_RST         (GPIO117 | 0x80000000)
#define GPIO_MATV_N_RST_M_GPIO  GPIO_MODE_00
#define GPIO_MATV_N_RST_M_PWM  GPIO_MODE_03

#define GPIO_CAMERA_FLASH_EXT1_PIN         (GPIO118 | 0x80000000)
#define GPIO_CAMERA_FLASH_EXT1_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_CAMERA_FLASH_EXT2_PIN         (GPIO119 | 0x80000000)
#define GPIO_CAMERA_FLASH_EXT2_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_MSDC1_CMD         (GPIO124 | 0x80000000)
#define GPIO_MSDC1_CMD_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CMD_M_MSDC1_CMD   GPIO_MODE_01

#define GPIO_MSDC1_CLK         (GPIO125 | 0x80000000)
#define GPIO_MSDC1_CLK_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CLK_M_CLK  GPIO_MODE_01

#define GPIO_MSDC1_DAT0         (GPIO126 | 0x80000000)
#define GPIO_MSDC1_DAT0_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT0_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT1         (GPIO127 | 0x80000000)
#define GPIO_MSDC1_DAT1_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT1_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT2         (GPIO128 | 0x80000000)
#define GPIO_MSDC1_DAT2_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT2_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT3         (GPIO129 | 0x80000000)
#define GPIO_MSDC1_DAT3_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT3_M_MSDC1_DAT   GPIO_MODE_01


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */


