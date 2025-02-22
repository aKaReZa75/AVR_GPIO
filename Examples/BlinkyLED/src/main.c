#include "aKaReZa.h"

#define RGB_R_Config  DDRB
#define RGB_R_Control PORTB
#define RGB_R_PIN     3

int main(void)
{
  GPIO_Config_OUTPUT(RGB_R_Config, RGB_R_PIN);
  while(1)
  {
    bitToggle(RGB_R_Control, RGB_R_PIN);
    delay_ms(1000); 
  };
};