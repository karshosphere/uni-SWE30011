
#include "Arduino.h"
#include "Tasks.h"

#define LED_MOVE 10 // green
#define LED_HALT 12 // yellow
#define LED_STAY 11 // red

#define PED_PASS 8
#define PED_WAIT 9

#define DELAY_MOVE 5000 // 5s
#define DELAY_HALT 2000 // 2s
#define DELAY_STAY 5000 // 5s

void task3_setup( void )
{
    pinMode( LED_MOVE, OUTPUT );
    pinMode( LED_HALT, OUTPUT );
    pinMode( LED_STAY, OUTPUT );
    pinMode( PED_PASS, OUTPUT );
    pinMode( PED_WAIT, OUTPUT );

    // start state
    digitalWrite( LED_STAY, HIGH );
    digitalWrite( LED_HALT, LOW  );
    digitalWrite( LED_MOVE, LOW  );
    digitalWrite( PED_PASS, HIGH );
    digitalWrite( PED_WAIT, LOW  );
}

void task3_loop( void )
{
    digitalWrite( LED_STAY, HIGH );
    digitalWrite( LED_MOVE, LOW  );
    digitalWrite( PED_PASS, HIGH );
    delay( DELAY_STAY);

    digitalWrite( LED_STAY, LOW  );
    digitalWrite( LED_HALT, HIGH );
    digitalWrite( PED_PASS, LOW  );
    delay( DELAY_HALT );

    digitalWrite( LED_HALT, LOW  );
    digitalWrite( LED_MOVE, HIGH );
    delay( DELAY_MOVE );
}

