#include "BUTTERWORTH.h"
float Butterworth_Apply(float Input, Struct_Butterworth * Butterworth_Parameters) {
  float Butterworth_Output;
  //CALCULA O COEFICIENTE DO FILTRO
  Butterworth_Output                  = 3.123897691708261e-005f * Input;
  Butterworth_Output                 += 1.249559076683304e-004f * Butterworth_Parameters->InputOne;
  Butterworth_Output                 += 1.874338615024957e-004f * Butterworth_Parameters->InputTwo;
  Butterworth_Output                 += 1.249559076683304e-004f * Butterworth_Parameters->InputThree;
  Butterworth_Output                 += 3.123897691708261e-005f * Butterworth_Parameters->InputFour;
  Butterworth_Output                 -= -3.589733887112176f     * Butterworth_Parameters->OutputOne;
  Butterworth_Output                 -= 4.851275882519417f      * Butterworth_Parameters->OutputTwo;
  Butterworth_Output                 -= -2.924052656162459f     * Butterworth_Parameters->OutputThree;
  Butterworth_Output                 -= 0.663010484385891f      * Butterworth_Parameters->OutputFour;
  //CALCULA OS PARAMETROS DE ENTRADA
  Butterworth_Parameters->InputFour   = Butterworth_Parameters->InputThree;
  Butterworth_Parameters->InputThree  = Butterworth_Parameters->InputTwo;
  Butterworth_Parameters->InputTwo    = Butterworth_Parameters->InputOne;
  Butterworth_Parameters->InputOne    = Input;
  //CALCULA OS PARAMETROS DE SAÍDA
  Butterworth_Parameters->OutputFour  = Butterworth_Parameters->OutputThree;
  Butterworth_Parameters->OutputThree = Butterworth_Parameters->OutputTwo;
  Butterworth_Parameters->OutputTwo   = Butterworth_Parameters->OutputOne;
  Butterworth_Parameters->OutputOne   = Butterworth_Output;
  //RETORNA O VALOR FILTRADO
  return Butterworth_Output;
}
