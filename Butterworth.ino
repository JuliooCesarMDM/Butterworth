#include "BUTTERWORTH.h"

/******************************INFO**********************************/
//AUTOR:JULIO CESAR MATIAS
//DESENVOLVIDO OFICIALMENTE PARA A CONTROLADORA DE VOO JCFLIGHT
//DATA:JUNHO DE 2019
/********************************************************************/

//https://de.wikipedia.org/wiki/Butterworth-Filter

void setup() {
  Serial.begin(115200);
}

float FilterIn;
float FilterOut;
void loop() {
  //PARA O TESTE O MEU PINO ANALOGICO ESTÁ LIVRE,SEM NADA CONECTADO,ELE ESTÁ TENDO INFLUENCIA APENAS DO NOISE DE 48mV (5v / 2^10 = 48mV)
  FilterIn = analogRead(0);
  static Struct_Butterworth ObjectToFilter;
  FilterOut = Butterworth_Apply(FilterIn, &ObjectToFilter);
  Serial.print(FilterOut);
  Serial.print(" ");
  Serial.println(FilterIn);
}
