/* Using standard Arduino library called 'dtostrf()'
 * How to use dtostrf(double float_var, int minimum_witdh, int precision_witch, char* str_buff)
 */

char temperatureBuffer[6];
double temperature = 34.13;

void setup() {
  Serial.begin(9200);
  
  dtostrf(temperature, 3, 2, temperatureBuffer); // double to char array
}

void loop() {  
  Serial.println(temperatureBuffer);
  delay(1000);
}
