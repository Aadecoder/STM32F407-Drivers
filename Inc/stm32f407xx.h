/*
 * stm32f407xx.h
 *
 *  Created on: Jun 21, 2025
 *      Author: aditya
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_
#include <stdint.h>
#define __vo volatile




// Base Addresses of FLASH and SRAM Memory
#define FLASH_BASEADDR				0x08000000U
#define SRAM_BASEADDR				0x20000000U
#define SRAM1_BASEADDR				0x20000000U
#define SRAM2_BASEADDR				0x20000000U + 1C00U = 0x2001C000U
#define ROM_BASEADDR				Ox1FFF0000U


// Base Addresses of BUS Domains
#define PERIP_BASEADDR				0x40000000U
#define APB1PERIPH_BASEADDR			0x40000000U
#define APB2PERIPH_BASEADDR			0x40010000U
#define AHB1PERIPH_BASEADDR			0x40020000U
#define AHB2PERIPH_BASEADDR			0x50000000U


//Base Addresses of AHB1 Peripherals
#define GPIOA_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0000)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0400)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0800)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0C00)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1000)
#define GPIOF_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1400)
#define GPIOG_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1800)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1C00)
#define GPIOI_BASEADDR				(AHB1PERIPH_BASEADDR + 0x2000)
#define RCC_BASEADDR				(AHB1PERIPH_BASEADDR + 0x3800)


//Base Addresses of APB1 Peripherals
#define I2C1_BASEADDR				(APB1PERIPH_BASEADDR + 0x5400)
#define I2C2_BASEADDR				(APB1PERIPH_BASEADDR + 0x5800)
#define I2C3_BASEADDR				(APB1PERIPH_BASEADDR + 0x5C00)

#define SPI2_BASEADDR				(APB1PERIPH_BASEADDR + 0x3800)
#define SPI3_BASEADDR				(APB1PERIPH_BASEADDR + 0x3C00)

#define USART2_BASEADDR				(APB1PERIPH_BASEADDR + 0x4400)
#define USART3_BASEADDR				(APB1PERIPH_BASEADDR + 0x4800)
#define UART4_BASEADDR				(APB1PERIPH_BASEADDR + 0x4C00)
#define UART5_BASEADDR				(APB1PERIPH_BASEADDR + 0x5000)


// Base Addresses of APB2 Peripherals
#define EXTI_BASEADDR				(APB2PERIPH_BASEADDR + 0x3C00)
#define SPI1_BASEADDR				(APB2PERIPH_BASEADDR + 0x3000)
#define SYSCFG_BASEADDR				(APB2PERIPH_BASEADDR + 0x3800)
#define USART1_BASEADDR				(APB2PERIPH_BASEADDR + 0x1000)
#define USART6_BASEADDR				(APB2PERIPH_BASEADDR + 0x1400)


//GPIO Peripheral Registers Structures

typedef struct{
	__vo uint32_t MODER;			// Address Offset : 0x00
	__vo uint32_t OTYPER;			// Address Offset : 0x04
	__vo uint32_t OSPEEDR;			// Address Offset : 0x08
	__vo uint32_t PUPDR;			// Address Offset : 0x0C
	__vo uint32_t IDR;				// Address Offset : 0x10
	__vo uint32_t ODR;				// Address Offset : 0x14
	__vo uint32_t BSRRL;			// Address Offset : 0x18
	__vo uint32_t BSRRH;			// Address Offset : 0x1A
	__vo uint32_t LCKR;				// Address Offset : 0x1C
	__vo uint32_t AFR[2];			// Address Offset : 0x20 - 0x24
}GPIO_RegDef_t;

// Peripheral Definations Macros
#define GPIOA						((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB						((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC						((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD						((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE						((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF						((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG						((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH						((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI						((GPIO_RegDef_t*)GPIOI_BASEADDR)


//RCC Registers Structure
typedef struct{
		__vo uint32_t CR;                         /* Address Offset : 0x00 */
		__vo uint32_t PLLCFGR;                    /* Address Offset : 0x04 */
		__vo uint32_t CFGR;                       /* Address Offset : 0x08 */
		__vo uint32_t CIR;                        /* Address Offset : 0x0C */
		__vo uint32_t AHB1RSTR;                   /* Address Offset : 0x10 */
		__vo uint32_t AHB2RSTR;                   /* Address Offset : 0x14 */
		__vo uint32_t AHB3RSTR;                   /* Address Offset : 0x18 */
		uint32_t      RESERVED0;                   /* 0x10 */
		__vo uint32_t APB1RSTR;                   /* Address Offset : 0x1C */
		__vo uint32_t APB2RSTR;                   /* Address Offset : 0x20 */
		uint32_t      RESERVED1[2];                   /* 0x28-0X2C */
		__vo uint32_t AHB1ENR;                    /* Address Offset : 0x30 */
		__vo uint32_t AHB2ENR;                    /* Address Offset : 0x34 */
		__vo uint32_t AHB3ENR;                    /* Address Offset : 0x38 */
		uint32_t      RESERVED2;                   /* 0x3C */
		__vo uint32_t APB1ENR;                    /* Address Offset : 0x40 */
		__vo uint32_t APB2ENR;                    /* Address Offset : 0x04 */
		uint32_t      RESERVED3[2];                   /* 0x48-0x4C */
		__vo uint32_t AHB1LPENR;                  /* Address Offset : 0x50 */
		__vo uint32_t AHB2LPENR;                  /* Address Offset : 0x54 */
		__vo uint32_t AHB3LPENR;                  /* Address Offset : 0x58 */
		uint32_t      RESERVED4;                   /* 0x5C */
		__vo uint32_t APB1LPENR;                  /* Address Offset : 0x60 */
		__vo uint32_t APB2LPENR;                  /* Address Offset : 0x64 */
		uint32_t      RESERVED4[2];                   /* 0x68-0x6C */
		__vo uint32_t BDCR;                       /* Address Offset : 0x70 */
		__vo uint32_t CSR;                        /* Address Offset : 0x74 */
		uint32_t      RESERVED5[2];                   /* 0x78-0x7C */
		__vo uint32_t SSCGR;                      /* Address Offset : 0x80 */
		__vo uint32_t PLLI2SCFGR;                 /* Address Offset : 0x84 */
}RCC_RegDef_t;

#define RCC           ((RCC_RegDef_t*)RCC_BASEADDR)


/*  Clock Enable Macros for GPIOx Peripherals */
#define GPIOA_PCLK_EN()     (RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()     (RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()     (RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()     (RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()     (RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()     (RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()     (RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()     (RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN()     (RCC->AHB1ENR |= (1 << 8))

/* Clock Enable Macros for I2Cx Peripherals */
#define I2C1_PCLK_EN()     (RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()     (RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()     (RCC->APB1ENR |= (1 << 23))

/* Clock Enable Macros for SPIx Peripherals */
#define SPI1_PCLK_EN()     (RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN()     (RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN()     (RCC->APB1ENR |= (1 << 15))

/* Clock Enable Macros for USARTx Peripherals */
#define USART1_PCLK_EN()   (RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN()   (RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN()   (RCC->APB1ENR |= (1 << 18))
#define UART4_PCLK_EN()    (RCC->APB1ENR |= (1 << 19))
#define UART5_PCLK_EN()    (RCC->APB1ENR |= (1 << 20))
#define USART6_PCLK_EN()   (RCC->APB2ENR |= (1 << 5))

/* Clock Enable Macros for SYSCFG Peripheral */
#define SYSCFG_PCLK_EN()     (RCC->APB2ENR |= (1 << 14))

/*  Clock Disable Macros for GPIOx Peripherals */
#define GPIOA_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DI()     (RCC->AHB1ENR &= ~(1 << 8))

/* Clock Disable Macros for I2Cx Peripherals */
#define I2C1_PCLK_DI()     (RCC->APB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DI()     (RCC->APB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DI()     (RCC->APB1ENR &= ~(1 << 23))

/* Clock Disable Macros for SPIx Peripherals */
#define SPI1_PCLK_DI()     (RCC->APB2ENR &= ~(1 << 12))
#define SPI2_PCLK_DI()     (RCC->APB1ENR &= ~(1 << 14))
#define SPI3_PCLK_DI()     (RCC->APB1ENR &= ~(1 << 15))

/* Clock Disable Macros for USARTx Peripherals */
#define USART1_PCLK_DI()   (RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DI()   (RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DI()   (RCC->APB1ENR &= ~(1 << 18))
#define UART4_PCLK_DI()    (RCC->APB1ENR &= ~(1 << 19))
#define UART5_PCLK_DI()    (RCC->APB1ENR &= ~(1 << 20))
#define USART6_PCLK_DI()   (RCC->APB2ENR &= ~(1 << 5))

/* Clock Disable Macros for SYSCFG Peripheral */
#define SYSCFG_PCLK_DI()     (RCC->APB2ENR &= ~(1 << 14))

// GPIO Clock Register Reset Macros
#define GPIOA_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<0)); (RCC->AHB1RSTR &= ~(1<<0));}while(0)
#define GPIOB_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<1)); (RCC->AHB1RSTR &= ~(1<<1));}while(0)
#define GPIOC_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<2)); (RCC->AHB1RSTR &= ~(1<<2));}while(0)
#define GPIOD_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<3)); (RCC->AHB1RSTR &= ~(1<<3));}while(0)
#define GPIOE_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<4)); (RCC->AHB1RSTR &= ~(1<<4));}while(0)
#define GPIOF_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<5)); (RCC->AHB1RSTR &= ~(1<<5));}while(0)
#define GPIOG_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<6)); (RCC->AHB1RSTR &= ~(1<<6));}while(0)
#define GPIOH_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<7)); (RCC->AHB1RSTR &= ~(1<<7));}while(0)
#define GPIOI_REG_RESET()       do{(RCC->AHB1RSTR |= (1<<8)); (RCC->AHB1RSTR &= ~(1<<8));}while(0)


// Some Macros
#define ENABLE				1
#define DISABLE				0
#define SET					ENABLE
#define RESET				DISABLE
#define GPIO_PIN_SET		SET
#define GPIO_PIN_RESET		RESET

#endif /* INC_STM32F407XX_H_ */



