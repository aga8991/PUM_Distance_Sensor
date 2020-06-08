#define DistSen A7 
                                  
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
  float distance = (0.22)*pow(volts, -1.28);    //counted in Excel
  return distance;  //in cm
}
