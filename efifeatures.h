#pragma once

#define EFI_GPIO_HARDWARE TRUE

// todo: we really need GPT implementation
// todo: #define EFI_SIGNAL_EXECUTOR_ONE_TIMER TRUE
#define EFI_SIGNAL_EXECUTOR_SLEEP TRUE
#define MY_US2ST(x) ((x) / 10)

#define CONSOLE_MAX_ACTIONS 180

#define ENABLE_PERF_TRACE FALSE