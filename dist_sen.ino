#define DistSen A7;  
                                  
void setup() 
{
  Serial.begin(115200);                             
}

void loop() 
{
                                  
}

float count_distance()
{
  float volts = analogRead(DistSen)*(5/1024);   //5V/1024
  float distance = 3.31*pow(volts, -0.78);      //counted in Excel
  return distance;  //in cm
}
