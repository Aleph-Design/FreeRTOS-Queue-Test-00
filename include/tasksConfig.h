#ifndef TASKS_CONFIG_H
#define tasksConfig_h

#include <arduino.h>
#include <taskSender.h>
#include <taskReceiver.h>

static QueueHandle_t myQueue;
/*
Define myQueue here results in [just] a warning
In file included from src/createAllTasks.cpp:2:0:
include/tasksConfig.h:8:22: warning: 'myQueue' defined but not used [-Wunused-variable]
 static QueueHandle_t myQueue;

Well, that's correct; "myQueue" is not used in "createAllTasks.cpp", but it is in
other functions.
*/

#endif