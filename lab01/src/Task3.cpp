

#include "Arduino.h"
#include "Tasks.h"

#define LED_MOVE 10 // green
#define LED_HALT 12 // yellow
#define LED_STAY 11 // red

#define DELAY_MOVE 5000 // 5s
#define DELAY_HALT 2000 // 2s
#define DELAY_STAY 5000 // 5s

void task3_setup( void )
{
    pinMode( LED_MOVE, OUTPUT );
    pinMode( LED_HALT, OUTPUT );
    pinMode( LED_STAY, OUTPUT );

    // start state
    digitalWrite( LED_STAY, HIGH );
    digitalWrite( LED_HALT, LOW );
    digitalWrite( LED_MOVE, LOW );
}

void task3_loop( void )
{
    digitalWrite( LED_STAY, HIGH );
    digitalWrite( LED_MOVE, LOW  );
    delay( DELAY_STAY);

    digitalWrite( LED_STAY, LOW  );
    digitalWrite( LED_HALT, HIGH );
    delay( DELAY_HALT );

    digitalWrite( LED_HALT, LOW  );
    digitalWrite( LED_MOVE, HIGH );
    delay( DELAY_MOVE );
}

