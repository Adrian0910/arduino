
#include <Keypad.h>

const byte Filas = 4; 		//Cuatro filas
const byte Cols = 4; 		//Cuatro columnas

byte Pins_Filas[] = {9, 8, 7, 6};	 //Pines Arduino a los que contamos las filas.
byte Pins_Cols[] = { 5, 4, 3, 2}; 	// Pines Arduino a los que contamos las columnas.
char Teclas [ Filas ][ Cols ] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

void setup()
{	  Serial.begin(9600) ; }
  
void loop()
{	  
  char pulsacion = Teclado1.getKey() ; 
  char teclas= Teclado1.getKey();
  {
	  if (pulsacion != 0)			// Si el valor es 0 es que no se ha pulsado ninguna tecla
    		Serial.println(pulsacion);	
        if(teclas !=NO_KEY){
        if(Teclado1.getState()==PRESSED){
      switch(teclas){
        case '1':
        tone(13,293.66,200);
        break;
        case '2':
        tone(13,280.36,100);
        break;
        case '3':
        tone(13,263.6,200);
        break;
        tone(13,223.66,100);
        break;
        case '4':
        tone(13,291.66,200);
        break;
        tone(13,159.66,100);
        break;
        case '5':
        tone(13,600.66,100);
        break;
        case '6':
        tone(13,100.66,100);
        break;
        case'7':
        tone(13,93.66,100);
        break;
        case '8':
        tone(13,227.66,200);
        break;
        case'9':
        tone(13,215.66,100);
        break;
        case'0':
        tone(13,210.66,200);
        break;
        case 'A':
        tone(13,209.66,100);
        break;
        case 'B':
        tone(13,103.66,200);
        break;
        case 'C':
        tone(13,183.66,100);
        break;
        case 'D':
        tone(13,113.66,100);
        break;
        case '#':
        tone(13,273.66,100);
        break;
        case '*':
        tone(13,203.66,100);
        break;
        tone(13,330.66,200);

      }
      }
  }
  }
}
        
