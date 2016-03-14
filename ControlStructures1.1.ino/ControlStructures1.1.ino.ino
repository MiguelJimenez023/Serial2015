/*************************************************************************************************
**                                                                                              **
**                              DescripciÃ³ del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************


//******  Setup  *********************************************************************************
int tempAigua = 50;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.println("Aigua bullint!");
  }

  if else ( tempAigua < 100)
  {
    Serial.println("Aigua encara no bull!");
  }

  if else( tempAigua >= 90)
  {
    Serial.println("Aigua apunt de bullir!");
  }

  if else ( tempAigua < 100)
  {
    Serial.println("Aigua apunt de bullir!");
  }

  else ( tempAigua == 100)
  {
    Serial.print("Aigua a 100!");
  }
}

void loop()   // we need this to be here even though its empty
{
}


