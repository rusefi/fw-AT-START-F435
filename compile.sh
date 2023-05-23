#!/bin/bash

# todo: remove 'atlas' part once we have https://github.com/rusefi/rusefi/issues/5284
cd ext/rusefi/firmware/config/boards/atlas

bash ../common_make.sh ../../../../.. custom_platform
