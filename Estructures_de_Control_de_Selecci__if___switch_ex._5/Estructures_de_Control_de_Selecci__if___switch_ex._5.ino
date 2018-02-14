/**************************************************************
**                                                           **
**                    TÍTOL:  Control Structures             **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 29/1/2018      **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
double indicador = 39;

//******************* SETUP ****************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (indicador < 3.5)     
  {
    Serial.print("A");  // escriu-me aixó, sino ...
  } 
  else if (indicador < 6.5)  
                                                
  {
    Serial.print("B");  // escriu-me aixó sino...
  }
  else if(indicador < 11.1)           
  { Serial.print("C");    // escriu-me aixó sino ...
    }
   else if(indicador < 17.7)                                
   { Serial.print("D");   // escriu-me aixó
    }
   else if(indicador < 38.2)                                
   { Serial.print("E");   // escriu-me aixó
    } 
    else if(indicador < 43.2)                                
   { Serial.print("F");   // escriu-me aixó
    }
    else if(indicador >= 43,2)                                 
   { Serial.print("G");   // escriu-me aixó
    }
    
}

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************
