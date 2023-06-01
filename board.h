#ifndef _BOARD_H_
#define _BOARD_H_

/**
 * @brief	The board name
 */
#define BOARD_NAME "AT-EVAL"

#ifndef LED_CRITICAL_ERROR_BRAIN_PIN
#define LED_CRITICAL_ERROR_BRAIN_PIN Gpio::Unassigned
#endif

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

#endif /* _BOARD_H_ */
