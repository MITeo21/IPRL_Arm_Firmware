#ifndef TASKS_H
#define TASKS_H

// === INCLUDE === //

#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include "config.h"

// === EXTERNALS === //

// Task Handles
extern TaskHandle_t debugTaskHandle;
extern TaskHandle_t armTaskHandle;

// Tasks
void debugTask(void *pvParameters);
void armTask(void *pvParameters);

#endif