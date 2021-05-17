#ifndef TASKS_CONFIG_H
#define tasksConfig_h

#include <arduino.h>
#include <taskSender.h>
#include <taskReceiver.h>

/*
* Define myQueue here as extern is obligatory!
* Written the declaration of myQueue as static, means that every .cpp file get
* its own copy, or version, of myQueue variable. Static means a global variable
* but its scope is limited to the file scope.
*/
extern QueueHandle_t myQueue;

#endif