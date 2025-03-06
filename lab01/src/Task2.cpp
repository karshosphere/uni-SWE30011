
#include "Arduino.h"
#include "Tasks.h"

#define LED 2

void task2_setup( void )
{
    pinMode( LED, OUTPUT );
    digitalWrite( LED, OUTPUT );
}

void task2_loop( void )
{
    digitalWrite( LED, HIGH );
    delay( 1000 );

    digitalWrite( LED, LOW );
    delay( 1000 );
}

