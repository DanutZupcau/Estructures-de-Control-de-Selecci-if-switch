/**************************************************************
**                                                           **
**                    TÍTOL:  Control Structures             **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 29/1/2018      **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int tempAigua = 105;

//******************* SETUP ****************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 90)     // si la temperatura es inferior a 90
  {
    Serial.print("Aigua encara no bull");  // escriu-me aixó, sino ...
  } 
  else if (tempAigua >= 90 && tempAigua < 100)  // si l'aigua esta a més temperatura o igual a 90
                                                // i si també es inferior a 100
  {
    Serial.print("Aigua apunt de bullir");  // escriu-me aixó sino...
  }
  else if(tempAigua == 100)           // si la temperatura és superior o igual a 100
  { Serial.print("Aigua a 100ºC");    // escriu-me aixó sino ...
    }
   else                                
   { Serial.print("Aigua bullint");   // escriu-me aixó
    }
}

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************
