#ifndef BUTTERWORTH_H_
#define BUTTERWORTH_H_
#include "Arduino.h"
typedef struct {
  float InputOne,  InputTwo,  InputThree,  InputFour;
  float OutputOne, OutputTwo, OutputThree, OutputFour;
} Struct_Butterworth;
float Butterworth_Apply(float Input, Struct_Butterworth * Butterworth_Parameters);
#endif
