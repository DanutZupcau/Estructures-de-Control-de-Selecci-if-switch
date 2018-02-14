/**************************************************************
**                                                           **
**                    TÍTOL:  Control Structures             **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 29/1/2018      **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int tempAigua = 99;

//******************* SETUP ****************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua >= 100)
  {
    Serial.print("Aigua bullint!");
  } 
  else 
  {
    Serial.print("Aigua encara no bull");
  }
}

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************
