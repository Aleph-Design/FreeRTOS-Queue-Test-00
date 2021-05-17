#include <tasksConfig.h>

void taskSender(void *param)
{
  	for (;;) 
    {
      // Add a random number to the queue
      //auto flashTotal = esp_random();

      // Use Arduino implementation for a number between limits
      int flashTotal = random(1, 9);

      // Add to the queue - wait forever until space is available
      //    
      xQueueSend(myQueue, &flashTotal, portMAX_DELAY);

      Serial.printf("Sender - Add to Q: %d\n", flashTotal);

	  } // end for-ever-loop

} // end taskSender()