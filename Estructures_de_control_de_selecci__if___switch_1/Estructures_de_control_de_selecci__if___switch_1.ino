/************************************************************************************
**                                                                                 **
**                    TÍTOL: Estructures de Control de Selecció if & switch        **
**                                        Programa 1                               **
**                                                                                 **
**  NOM: Danut Zupcau                   DATA: 28/1/2018                            **
************************************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int T  =  9;
int Y  =  4;
int K  =  8;
int N  =  3;
int P  = - 3;
boolean Z  = true;
boolean W = false;
boolean A  =  false;
boolean B  =  true;
//******************* SETUP ****************************

void setup(){
  Serial.begin(9600);
 if ( W == ( T < P + 1) || ( (K + 1 - P == K % N – Y ) && B) || Z && !A)
{
Serial.print("True");  
}
else //sino
{
Serial.print("False");
}

  }

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************
