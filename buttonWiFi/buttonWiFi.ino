#define BLINKER_WIFI
 
#include <Blinker.h>
 
char auth[] = "f437335f2216";
char ssid[] = "小米手机";
char pswd[] = "159357258";
 
#define BUTTON_1 "btn-abc"
#define BUTTON_2 "btn-s"
#define BUTTON_3 "btn-x"
#define BUTTON_4 "btn-z"
#define BUTTON_5 "btn-y"
#define BUTTON_6 "btn-t"
int motorL1 = 16; //D0左边轮子
int motorL2 = 5;  //D1
int motorR1 = 13; //D7右边轮子
int motorR2 = 15; //D8
BlinkerButton Button1(BUTTON_1);
BlinkerButton Button2(BUTTON_2);
BlinkerButton Button3(BUTTON_3);
BlinkerButton Button4(BUTTON_4);
BlinkerButton Button5(BUTTON_5);
BlinkerButton Button6(BUTTON_6);
 
void button1_callback(const String & state)
{
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
 
        Button1.icon("icon_1");
        Button1.color("#FFFFFF");
        Button1.text("Your button name or describe");
        Button1.print();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button1.icon("icon_1");
        Button1.color("#FFFFFF");
        Button1.text("Your button name or describe");
        Button1.print();
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button1.icon("icon_1");
        Button1.color("#FFFFFF");
        Button1.text("Your button name or describe");
        // Button1.text("Your button name", "describe");
        Button1.print();
    }
   
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button1.icon("icon_1");
        Button1.color("#FFFFFF");
        Button1.text("Your button name or describe");
        // Button1.text("Your button name", "describe");
        Button1.print();
    }
}
 
void button2_callback(const String & state)
{
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
     
        Button2.icon("icon_1");
        Button2.color("#FFFFFF");
        Button2.text("前进");
       Button2.print();
        line();  
        delay(200); 
        lull();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button2.icon("icon_1");
        Button2.color("#FFFFFF");
        Button2.text("连续前进");
        Button2.print();
        line();  
        delay(200);
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button2.icon("icon_1");
        Button2.color("#FFFFFF");
        Button2.text("停止前进");
        // Button2.text("Your button name", "describe");
        Button2.print();
        lull();
    }
    
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button2.icon("icon_1");
        Button2.color("#FFFFFF");
        Button2.text("s");
        // Button2.text("Your button name", "describe");
        Button2.print();
    }
}
void button3_callback(const String & state)
{
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
 
        Button3.icon("icon_1");
        Button3.color("#FFFFFF");
        Button3.text("后退");
        Button3.print();
        back();
        delay(200); 
        lull();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button3.icon("icon_1");
        Button3.color("#FFFFFF");
        Button3.text("连续后退");
        Button3.print();
        back();
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button3.icon("icon_1");
        Button3.color("#FFFFFF");
        Button3.text("停止后退");
        // Button3.text("Your button name", "describe");
        Button3.print();
        lull();
    }
    
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button3.icon("icon_1");
        Button3.color("#FFFFFF");
        Button3.text("x");
        // Button3.text("Your button name", "describe");
        Button3.print();
    }
}
void button4_callback(const String & state)
{
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
 
        Button4.icon("icon_1");
        Button4.color("#FFFFFF");
        Button4.text("左转");
        Button4.print();
        L();
        delay(200); 
        lull();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button4.icon("icon_1");
        Button4.color("#FFFFFF");
        Button4.text("连续左转");
        Button4.print();
        L();
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button4.icon("icon_1");
        Button4.color("#FFFFFF");
        Button4.text("左转停止");
        // Button4.text("Your button name", "describe");
        Button4.print();
        lull();
    }
    
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button4.icon("icon_1");
        Button4.color("#FFFFFF");
        Button4.text("Your button name or describe");
        // Button4.text("Your button name", "describe");
        Button4.print();
    }
}
void button5_callback(const String & state)
{
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
 
        Button5.icon("icon_1");
        Button5.color("#FFFFFF");
        Button5.text("右转");
        Button5.print();
        R();
        delay(200); 
        lull();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button5.icon("icon_1");
        Button5.color("#FFFFFF");
        Button5.text("连续右转");
        Button5.print();
        R();
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button5.icon("icon_1");
        Button5.color("#FFFFFF");
        Button5.text("停止右转");
        // Button5.text("Your button name", "describe");
        Button5.print();
        lull();
    }
    
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button5.icon("icon_1");
        Button5.color("#FFFFFF");
        Button5.text("Your button name or describe");
        // Button5.text("Your button name", "describe");
        Button5.print();
    }
}
void button6_callback(const String & state)
{
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("get button state: ", state);
 
    if (state == BLINKER_CMD_BUTTON_TAP) {
        BLINKER_LOG("Button tap!");
 
        Button6.icon("icon_1");
        Button6.color("#FFFFFF");
        Button6.text("Your button name or describe");
        Button6.print();
        lull();
    }
    else if (state == BLINKER_CMD_BUTTON_PRESSED) {
        BLINKER_LOG("Button pressed!");
 
        Button6.icon("icon_1");
        Button6.color("#FFFFFF");
        Button6.text("Your button name or describe");
        Button6.print();
         lull();
    }
    else if (state == BLINKER_CMD_BUTTON_RELEASED) {
        BLINKER_LOG("Button released!");
 
        Button6.icon("icon_1");
        Button6.color("#FFFFFF");
        Button6.text("Your button name or describe");
        // Button6.text("Your button name", "describe");
        Button6.print();
         lull();
    }
    
    else {
        BLINKER_LOG("Get user setting: ", state);
 
        Button6.icon("icon_1");
        Button6.color("#FFFFFF");
        Button6.text("Your button name or describe");
        // Button6.text("Your button name", "describe");
        Button6.print();
    }
}
void dataRead(const String & data)
{
    BLINKER_LOG("Blinker readString: ", data);
 
    Blinker.vibrate();
    
    uint32_t BlinkerTime = millis();
    Blinker.print(BlinkerTime);
    Blinker.print("millis", BlinkerTime);
}
 
void setup()
{
    Serial.begin(115200);
    BLINKER_DEBUG.stream(Serial);
 
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
     pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
 
    Blinker.begin(auth, ssid, pswd);
    Blinker.attachData(dataRead);
    Button1.attach(button1_callback);
    Button2.attach(button2_callback);
    Button3.attach(button3_callback);
    Button4.attach(button4_callback);
    Button5.attach(button5_callback);
    Button6.attach(button6_callback);
}
 
void loop()
{
    Blinker.run();
}
void line() {
   
 /* digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);*/
 analogWrite(motorL1, 700);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorR1, LOW);
  analogWrite(motorR2, 700);
}
 
void L() {
  
  digitalWrite(motorL1, LOW);
  analogWrite(motorL2, 700);
  digitalWrite(motorR1, LOW);
  analogWrite(motorR2, 700);
 
 
}
void R() {
   
  analogWrite(motorL1, 700);
  digitalWrite(motorL2, LOW);
  analogWrite(motorR1, 700);
  digitalWrite(motorR2, LOW);
 
}
 
 
void back() { //后退函数
   
  digitalWrite(motorL1, LOW);
  analogWrite(motorL2, 700);
  analogWrite(motorR1, 700);
  digitalWrite(motorR2, LOW);
  
}
 
void lull() {
  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, HIGH);
  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, HIGH);
  
}
