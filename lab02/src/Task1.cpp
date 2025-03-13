
#include "Arduino.h"
#include "Tasks.h"

#define BUTTON 2
#define FAN    5

bool FanState = LOW;

void task1_setup( void )
{
    pinMode( BUTTON, INPUT );
    pinMode( FAN, OUTPUT );

    digitalWrite( FAN, LOW ); // initial state
}

void task1_loop( void )
{
    if ( digitalRead( BUTTON ) )
    {
        FanState = !FanState;

        while ( digitalRead( BUTTON ) );
    }
    digitalWrite( FAN, FanState );
    delay( 1000 );
}

