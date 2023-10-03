/*
 *
 */

#include "lab2.h"                                 // Lab specific defines/declarations

#define LED_RED         (0x01)
#define RGB_RED         (0x02)
#define RGB_GREEN       (0x04)
#define RGB_BLUE        (0x08)

void print_and_increment(uint32_t* value);     // Function prototype declaration


void task_4(void)
{
  // Declare a delay counter
  volatile uint32_t i;

  // Define a toggling counter
  uint32_t counter = 0;

  // Toggle the LED 25 times, with an increasing toggling delay
  while (counter < 25)
  {
    // Toggle an LED
    toggle(LED_RED);

    //
    // TODO: add function call
    //
    print_and_increment(&counter);
    // Delay
    static uint32_t delay = 0;  // Declare the initial toggling delay
    delay = delay + 3000;       // Increase it by ~10ms
    for (i = 0; i < delay; i++);
  }

  // Your task consist in reaching this print statement.
  uart_println("Congrat's! You completed task 4 :-) ");

  while (1)
  {
    /* An empty loop preventing the program from exiting */
  }
}


void print_and_increment(uint32_t* value)
{
  //
  // TODO: Implement the function here
  //

    uart_println("counter = %u", *value);
    (*value) += 1;

}
