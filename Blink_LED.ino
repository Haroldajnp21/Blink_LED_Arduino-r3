void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); // Set pin as output  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // LED on
  delay(200);                     // Wait 1s
  digitalWrite(LED_BUILTIN, LOW);  // LED off
  delay(200); 
  
}
