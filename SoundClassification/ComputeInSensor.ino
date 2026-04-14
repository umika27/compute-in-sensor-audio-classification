float prevLow = 0;
float prevHigh = 0;

unsigned long lastClapTime = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float low  = analogRead(A0) * (5.0 / 1023.0);
  float high = analogRead(A1) * (5.0 / 1023.0);

  float dLow  = abs(low - prevLow);
  float dHigh = abs(high - prevHigh);

  unsigned long now = millis();

  Serial.print("dL: "); Serial.print(dLow);
  Serial.print(" | dH: "); Serial.println(dHigh);
  if (dHigh > 0.12 && dHigh > dLow && (now - lastClapTime > 300)) {
    Serial.println("CLAP DETECTED");
    lastClapTime = now;
  }
  else if (dLow > 0.04 && dLow < 0.12) {
    Serial.println("SPEECH DETECTED");
  }

  prevLow = low;
  prevHigh = high;

  delay(30);
}
