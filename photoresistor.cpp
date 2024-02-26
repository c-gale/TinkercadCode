int PhotoPIN = A0; // defining an integer named "PhotoPIN" that cannot have decimals
float val; // defining a float named "val" that can have decimals

void setup() // initializing pins
{
  pinMode(2, OUTPUT); // setting the pin "2" to OUTPUT
  Serial.begin(9600); // initializing the bitrate of the serial
}

void loop() // endless loop, runs after setup()
{
  val = analogRead(PhotoPIN); // defining the "val" float to be the analogs input for pin A0
  Serial.println(val); // displaying the value of "val" in the Serial monitor 
  if (val >= 200) { // an if statement checking if val is greater than or equal to 200.
  	digitalWrite(2, HIGH); // if true, send digital pin 2 to high
  } else {
    digitalWrite(2, LOW); // if false, send digital pin 2 to low
  }
}
