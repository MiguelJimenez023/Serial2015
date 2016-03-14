/*************************************************************************************************
**                                                                                              **
**                              Descripció del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************


//******  Setup  *********************************************************************************
int a = 3;
int b = 4;
int h;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Lets calculate a hypoteneuse ");  // AQUI CALCULA LA HIPOTENUSA AL CUADRAT
  
  Serial.print(sqrt( pow(a,2) + pow(b,2)));
  Serial.println(h);
  
  
}

void loop()  // we need this to be here even though its empty
{
}


