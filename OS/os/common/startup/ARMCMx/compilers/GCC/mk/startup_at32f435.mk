# shameless copy-paste of startup_ke1xf.mk





STARTUPSRC = $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC/crt1.c

# cypress is happy without custom asm see startup_S6E2CxAH.mk
# kinetis has a custom asm just for some Errata see startup_ke1xf.S
STARTUPASM = $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC/crt0_v7m.S \
             $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC/vectors.S

STARTUPINC = $(ARTERY_CONTRIB)/os/common/startup/ARMCMx/devices/AT32F435 \
             $(ARTERY_CONTRIB)/os/common/ext/CMSIS/ARTERY \
             $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC \
             $(CHIBIOS)/os/common/ext/CMSIS/include \
             $(CHIBIOS)/os/common/ext/ARM/CMSIS/Core/Include

STARTUPLD_KINETIS  = $(KINETIS_CONTRIB)/os/common/startup/ARMCMx/compilers/GCC/ld
STARTUPLD = $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC/ld

# Shared variables
ALLXASMSRC += $(STARTUPASM)
ALLCSRC    += $(STARTUPSRC)
ALLINC     += $(STARTUPINC)