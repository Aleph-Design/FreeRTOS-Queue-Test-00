#include <tasksConfig.h>

void taskReceiver(void *param)
{
  for (;;)
  {
    int flopTotal;

    xQueueReceive(myQueue, &flopTotal, portMAX_DELAY);

    Serial.printf("- - - - - - Receiver - reading: %d\n", flopTotal);

    vTaskDelay(100 / portTICK_PERIOD_MS);

  }

} // end taskReceiver()