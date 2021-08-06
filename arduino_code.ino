String assigned_wallet = "None";
String miners_wallet = "";
int amount = 0;
void setup() {
  Serial.begin(9600);
  assigned_wallet = "None";
  amount = 0;
  miners_wallet = "";
  while (assigned_wallet = "None") {
  Serial.println("requesting_wallet");
  assigned_wallet = Serial.read();}
  while (!miners_wallet.startsWith("ARD")){
  miners_wallet = Serial.read();}
  }

void loop() {
  

  amount = Serial.read();
  Serial.println(assigned_wallet);
  String yes = "yes";
  if (Serial.read() == "yes"){
  Serial.println(10);
  Serial.println("no");
  }
}
