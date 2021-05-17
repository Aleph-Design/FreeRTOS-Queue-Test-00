#include <tasksConfig.h>
#include <createAllTasks.h>


//static QueueHandle_t myQueue;
/*
Define myQueue here results in:
src/taskReceiver.cpp:9:19: error: 'myQueue' was not declared in this scope
src/taskSender.cpp:15:18: error: 'myQueue' was not declared in this scope
*/

void setup() 
{
 	Serial.begin(115200);
  vTaskDelay(1000 / portTICK_PERIOD_MS);
	Serial.printf("\n--- Setup started ---\n");

	// Create the queue with 5 slots of 2 bytes
	myQueue = xQueueCreate(5, sizeof(int));

  createAllTasks();

	Serial.println("Setup completed.");
  
} // end setup()


void loop()
{
	vTaskDelete (NULL);
}

