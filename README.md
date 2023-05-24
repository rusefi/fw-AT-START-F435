# Current state

Some skeleton compiles but does not even link yet. nothing else

# fw-AT-START-F435

An attempt to blink an LED on AT-START-F435 board using ChibiOS+rusEFI codebase

* https://github.com/rusefi/rusefi/tree/master/firmware/config/boards/cypress and https://github.com/rusefi/rusefi/tree/master/firmware/config/boards/kinetis are examples of custom platform for ChibiOS
* only difference with above mentioned cypress and kinetis is here we are trying to build on top of rusEFI as a git submodule
* see 'ext/AT32F435_437_Firmware_Library' for Artery firmware library


# Artery Documentation

https://www.arterychip.com/download/ARTERY_AT32_MCU_Cross_Reference_Table_EN_V202011.xlsx

https://www.arterytek.com/download/MG0003_Migrating_from_SXX32F103_to_AT32F413_EN_V1.0.6.pdf

https://www.arterytek.com/download/MG0007_Migrating_from_SXX32F103_to_AT32F403A_EN_V1.0.8.pdf

https://www.arterytek.com/download/MG0009_Migrating_from_SXX32F107_to_AT32F407_EN_V1.0.4.pdf

https://www.arterytek.com/download/MG/MG0018_Migrating_from_AT32F403A_407_to_AT32F435_437_EN_V2.0.3.pdf

https://www.arterychip.com/download/APNOTE/AN0128_AT32F435_437_Get_started_guide_EN_V2.0.0.pdf