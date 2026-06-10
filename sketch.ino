/*
  Guardiao de Habitats Extremos - Coletor de CSV

  Este codigo roda no Wokwi com ESP32.
  O potenciometro simula a pressao atmosferica interna
  de um habitat lunar ou marciano.

  Classes:
  - seguro
  - alerta
  - critico
*/

#define POT_PIN 34

float rawToPressureKpa(int raw) {
  // ESP32: 0 a 4095
  return 40.0 + ((float)raw / 4095.0) * 85.0;
}

String labelFromPressure(float pressao) {

  if (pressao >= 75.0 && pressao <= 105.0) {
    return "seguro";
  }

  if ((pressao >= 60.0 && pressao < 75.0) ||
      (pressao > 105.0 && pressao <= 115.0)) {
    return "alerta";
  }

  return "critico";
}

void setup() {
  Serial.begin(115200);

  pinMode(POT_PIN, INPUT);
  analogReadResolution(12);

  // CSV header SEM timestamp
  Serial.println("pressao_kpa,label");
}

void loop() {

  int raw = analogRead(POT_PIN);
  float pressao = rawToPressureKpa(raw);
  String label = labelFromPressure(pressao);

  Serial.print(pressao, 2);
  Serial.print(",");
  Serial.println(label);

  delay(200);
}