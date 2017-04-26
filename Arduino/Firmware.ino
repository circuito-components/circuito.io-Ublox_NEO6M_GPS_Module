// // ***************************** Include Libraries *************************************
#include "Arduino.h"
// ****************************************************************************************

// Pin Definitions
#define GPS_PIN_RX	10
#define GPS_PIN_TX	11

// ***************************** Global variables and defines *****************************

// ****************************************************************************************
// ******************************** object initialization *********************************

// ****************************************************************************************

/* This code sets up the essentials for your circuit to work. It runs first every time your circuit is powered with electricity. */
void setup() {
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    // ******************************* GPSNeo6M - setup *****************************

    // *************************************************************************************
}

/* This code is the main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop. */
void loop() {
    // ******************************* GPSNeo6M - Test Code *************************
   
    // *************************************************************************************
    
}
