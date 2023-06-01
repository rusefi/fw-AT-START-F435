# Current state

Some skeleton compiles but does not even link yet. nothing else

# fw-AT-START-F435

An attempt to blink an LED on AT-START-F435 board using ChibiOS+rusEFI codebase

Current status:

We have openocd working with AT32 https://github.com/dron0gus/openocd

AT32 различия с STM32: флеш, немного pwr и клоки

Сильно похоже на stm32: usart завелся без правок, usb otg, pinmux и gpio тоже

https://github.com/rusefi/ChibiOS/tree/stable_20.3.x.rusefi/demos/STM32/RT-AT32F435-ARTERY144 seems to work!

https://github.com/rusefi/ChibiOS/tree/stable_20.3.x.rusefi/testhal/AT32/AT32F4xx/USB_CDC_IAD seems to work!

Следующие этапы: SPI & ADC

![image](https://github.com/rusefi/fw-AT-START-F435/assets/48498823/81af22f5-1581-429a-a370-377ecf8afcb8)


# Artery Documentation

https://www.arterychip.com/download/ARTERY_AT32_MCU_Cross_Reference_Table_EN_V202011.xlsx

https://www.arterytek.com/download/MG0003_Migrating_from_SXX32F103_to_AT32F413_EN_V1.0.6.pdf

https://www.arterytek.com/download/MG0007_Migrating_from_SXX32F103_to_AT32F403A_EN_V1.0.8.pdf

https://www.arterytek.com/download/MG0009_Migrating_from_SXX32F107_to_AT32F407_EN_V1.0.4.pdf

https://www.arterytek.com/download/MG/MG0018_Migrating_from_AT32F403A_407_to_AT32F435_437_EN_V2.0.3.pdf

https://www.arterychip.com/download/APNOTE/AN0128_AT32F435_437_Get_started_guide_EN_V2.0.0.pdf


# Outdated Notes

* https://github.com/rusefi/rusefi/tree/master/firmware/config/boards/cypress and https://github.com/rusefi/rusefi/tree/master/firmware/config/boards/kinetis are examples of custom platform for ChibiOS
* only difference with above mentioned cypress and kinetis is here we are trying to build on top of rusEFI as a git submodule
* see 'ext/AT32F435_437_Firmware_Library' for Artery firmware library
