#include "aKaReZa.h"

#define RGB_R_Config  DDRB
#define RGB_R_Control PORTB
#define RGB_R_PIN     3

#define SW1_Config    DDRB
#define SW1_Status    PINB
#define SW1_Pin       5

int main(void)
{
  GPIO_Config_OUTPUT(RGB_R_Config, RGB_R_PIN);
  GPIO_Config_INPUT(SW1_Config, SW1_Pin);
  while(1)
  {
    if(bitCheckHigh(SW1_Status, SW1_Pin))
    {
      bitWaitLow(SW1_Status, SW1_Pin);
      bitToggle(RGB_R_Control, RGB_R_PIN);
    };
  };
};
