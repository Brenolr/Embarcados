#include <Adafruit_BMP085.h> //INCLUSÃO DE BIBLIOTECA
 
Adafruit_BMP085 bmp; //OBJETO DO TIPO Adafruit_BMP085 (I2C)
   
void setup(){
  Serial.begin(9600); //INICIALIZA A SERIAL
  if (!bmp.begin()){ //SE O SENSOR NÃO FOR INICIALIZADO, FAZ
    Serial.println("Sensor BMP180 não foi identificado! Verifique as conexões."); //IMPRIME O TEXTO NO MONITOR SERIAL
    while(1){} //SEMPRE ENTRE NO LOOP
  }
}
   
void loop(){
    
    //Serial.print("T"); //IMPRIME O TEXTO NO MONITOR SERIAL
    Serial.println(bmp.readTemperature()*10); //IMPRIME NO MONITOR SERIAL A TEMPERATURA
    //Serial.print("\n");

    //Serial.print("P"); //IMPRIME O TEXTO NO MONITOR SERIAL
    //Serial.print(bmp.readPressure()); //IMPRIME NO MONITOR SERIAL A PRESSÃO
    //Serial.print("\n");

    //Serial.println("-----------------------------------\n"); //IMPRIME UMA LINHA NO MONITOR SERIAL
    delay(2000); //INTERVALO DE 2 SEGUNDOS
}
