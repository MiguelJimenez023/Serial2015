/*************************************************************************************************
**                                                                                              **
**                              DescripciÃƒÂ³ del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************


//******  Setup  *********************************************************************************
int IndicadorkgCO2m2 = 10;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( IndicadorkgCO2m2 < 3.5)
  {
    Serial.println("Eficiencia energetica excelent A ");
  }

  else if ( IndicadorkgCO2m2 < 6.5)
  {
    Serial.println("Eficiencia energetica bona B ");
  }

  else if ( IndicadorkgCO2m2 < 11.1 )
  {
    Serial.println("Eficiencia energetica millorable C ");
  }

   else if ( IndicadorkgCO2m2 < 17.7 )
  {
    Serial.println("Eficiencia energetica intermitja D ");
  }

   else if ( IndicadorkgCO2m2 < 38.2 )
  {
    Serial.println("Eficiencia energetica per sota la intermitja E");
  }

   else if ( IndicadorkgCO2m2 < 43.2 )
  {
    Serial.println("Eficiencia energetica dolenta F");
  }

  else if ( IndicadorkgCO2m2 >= 43.2 )
  {
    Serial.println("Molt mala eficiencia energetica G ");
  }
}

void loop()   // we need this to be here even though its empty
{
}



