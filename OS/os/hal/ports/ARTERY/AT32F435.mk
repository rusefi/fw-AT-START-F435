PLATFORMSRC_CONTRIB := ${ARTERY_CONTRIB}/os/hal/ports/ARTERY/hal_lld.c \
                        ${ARTERY_CONTRIB}/os/hal/ports/ARTERY/hal_pal_lld.c \
                        ${ARTERY_CONTRIB}/os/hal/ports/ARTERY/hal_st_lld.c

PLATFORMINC_CONTRIB := ${ARTERY_CONTRIB}/os/hal/ports/ARTERY

# Shared variables
ALLCSRC += $(PLATFORMSRC_CONTRIB)
ALLINC  += $(PLATFORMINC_CONTRIB)