#include <tasksConfig.h>
#include <createAllTasks.h>


QueueHandle_t myQueue;
/*
* Define myQueue here in main.cpp results in this global variable is defined 
* in only one *.cpp file (which one doesn’t really matter).
* This results in truly only one myQueue variable in the entire firmware and 
* it’s shared between all *.cpp files correctly.
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

