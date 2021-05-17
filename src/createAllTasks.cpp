#include <stdlib.h>
#include <tasksConfig.h>
#include <createAllTasks.h>

void createAllTasks(void)
{
	xTaskCreatePinnedToCore(
			taskSender,   /* Function to implement the task */
			"Task Sender",  /* Name of the task */
			2048,           /* Stack size in words */
			NULL,           /* Task input parameter */
			1,              /* Priority of the task */
			NULL,           /* Task handle. */
			1);             /* Core where the task should run */

	xTaskCreatePinnedToCore(
			taskReceiver,   /* Function to implement the task */
			"Task Receive", /* Name of the task */
			2048,           /* Stack size in words */
			NULL,           /* Task input parameter */
			1,              /* Priority of the task */
			NULL,           /* Task handle. */
			1);             /* Core where the task should run */

}	// end createAllTasks(void)