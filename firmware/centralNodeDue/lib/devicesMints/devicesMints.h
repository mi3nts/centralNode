#ifndef DEVICES_MINTS_H
#define DEVICES_MINTS_H

#include <Arduino.h>
#include <Adafruit_HTU21DF.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <Time.h>

void sendCommand2DevicesMints(String command);

void setTimeMints(String command);
void printTimeMints();

void printTimeOnlyMints();

// For HTU21D
extern Adafruit_HTU21DF htu;
void initializeHTU21DMints();
void readHTU21DMints();


extern Adafruit_BMP280 bme;
void initializeBMP280Mints();
void readBMP280Mints();

void printInput(String command);


#endif // ADAFRUIT_NEOPIXEL_H