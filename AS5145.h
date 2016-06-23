#ifndef AS5145_h
#define AS5145_h

#include "Arduino.h"

class AS5145
{
  public:
    AS5145(uint16_t DataPin, uint16_t ClockPin, uint16_t ChipSelectPin, uint16_t ProgramInputPin);
    AS5145(uint16_t PWMPin);
    uint32_t encoder_degrees(void);
    uint32_t encoder_value(void);
    uint32_t encoder_error(void);
    uint32_t pwm_degrees(void);
    uint32_t high_value(void);
    uint32_t low_value(void);
    struct err_struct{
  	bool DECn;
	bool INCn;
	bool OCF;
	bool COF;
	bool LIN; } err_value;
  private:
    uint32_t read_chip(void);
    const uint16_t _clock;        // clock pin: output from arduino to AS5145
    const uint16_t _cs;           // chip select: output
    const uint16_t _data;         // data pin: input
    const uint16_t _pdio;	  // program input pin: input
    const uint16_t _pwm;	  // pwm input pin: input
    
};

#endif


