#include "./Servo.h"


Servo_t servo;

void SRV_Init() {
	servo.position = 0;
	servo.setPosition = 0;

	servo.servo.attach(PIN_SRV);
	delay(1000);

	// Serial.println(F("SRV init done"));
	Serial.println(F("SRV init done"));
}

void SRV_SetPosition(uint8_t pos) {
	servo.setPosition = pos;
}


void SRV_Run() {
	servo.servo.write(servo.setPosition);
	servo.position = servo.setPosition;
}