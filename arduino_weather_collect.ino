//这些是WiFi得东西
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>
// 天气的api
#include <SPI.h>
// 还有lcd
#include <LiquidCrystal.h>

// WiFi名字和密码
char ssid[] = "wifi_name";
char password[] = "wifi_password";

// 那个天气要的东西，名字来的
String api_Key = "b1c4cb988cede7649d1bf43d63637ae5";

// 地点
String location= "kuala lumpur,MY";
// 什么鬼来的
int status = WL_IDLE_STATUS;
// 天气app的网站，要Connect去那边才有东西的
char server[] = "api.openweathermap.org";
// 叫WiFi准备好
WiFiClient client;
// 叫lcd准备好
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //connect 去 WiFi:
  while (status != WL_CONNECTED){ // 如果WiFi还没有Connect到：
    Serial.print("Connecting to network. Please wait...");
    Serial.println(ssid);
    // 根据WiFi名字connect去WiFi
    status = WiFi.begin(ssid);
    //activate below line for wpa security:
    //WiFi用WPA密码才用下面的
    //status = WiFi.begin(ssid, pass);
    //wait 10 secs:
    delay (10000);
  }
  Serial.println("Connected to network");
  //lcd开始
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  //用getWeather
  void getWeather();
  delay(10000);
  //写在lcd上面
  lcd.setCursor(0,0);
  lcd.print(line);

}

//这个才是重点:):)
void getWeather(){
  Serial.println("\nStarting connection to Openweather server...");
  Serial.println("\nHttps://home.openweathermap.org");
  //如果Connect到伺服器：
  if (client.connect(server, 80)){
    Serial.println("Connection successful");
    //make http request
    //叫那个网站给我们数据
    client.print("GET /data/2.5/forecast?");
    client.print("q=" + location);
    client.print("&appid=" + api_Key);
    client.print("&cnt=3");
    client.println("&units=metric");
    client.println("Host: api.openweathermap.org");
    client.println("Connection: close");
    client.println();}
   //要不然：
   else{
    Serial.println("Connection failed.");
    Serial.println("Check your connection and try again");}
   delay (1000);

   //这个我也不知道是什么:)
   String line = "";
   //当connect到伺服器：
   while (client.connected()){
    //读取数据直到结束（\n)
    line = client.readStringUntil('\n');
    //把数据写出来

   }
}
