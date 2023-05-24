/**
 * @file	mpu_util.cpp
 */

#include "pch.h"

void baseMCUInit(void) {
}

#define PORT_SIZE 16

// copy-paste of stm32 method? reuse code?
brain_pin_e parseBrainPin(const char *str) {
	if (strEqual(str, "none"))
		return Gpio::Unassigned;
	// todo: create method toLowerCase?
	if (str[0] != 'p' && str[0] != 'P') {
		return Gpio::Invalid;
	}
	char port = str[1];
	brain_pin_e basePin;
	if (port >= 'a' && port <= 'z') {
		basePin = Gpio::A0 + PORT_SIZE * (port - 'a');
	} else if (port >= 'A' && port <= 'Z') {
		basePin = Gpio::A0 + PORT_SIZE * (port - 'A');
	} else {
		return Gpio::Invalid;
	}
	const char *pinStr = str + 2;
	int pin = atoi(pinStr);
	return (brain_pin_e)(basePin + pin);
}

ioportid_t * getGpioPorts() {
    return nullptr;
}

uint32_t getTimeNowLowerNt() {
	return 0;// TODO: at32 port_rt_get_counter_value();
}

unsigned int getBrainPinOnchipNum(void) {
	return BRAIN_PIN_ONCHIP_PINS;
}