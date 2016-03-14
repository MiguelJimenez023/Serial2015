/*************************************************************************************************
**                                                                                              **
**                              DescripciÃƒÂ³ del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************


//******  Setup  *********************************************************************************
int tempAigua = 50;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 90)
  {
    Serial.println("Aigua encara no bull!");
  }

  else if ( tempAigua >= 90)
  {
    Serial.println("Aigua apunt de bullir!");
  }

  else if ( tempAigua < 100 )
  {
    Serial.println("Aigua apunt de bullir!");
  }

   else if ( tempAigua == 100 )
  {
    Serial.println("Aigua a 100!");
  }

   else if ( tempAigua > 100 )
  {
    Serial.println("Aigua bullint!");
  }
}

void loop()   // we need this to be here even though its empty
{
}



