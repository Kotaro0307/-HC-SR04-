# UltrasonicSensor HC-SR04  
- 超音波センサ（HC-SR04）のライブラリです  
- mbed Compilerで使えます  
- HC_SR04というファイルが、超音波センサのライブラリでmain.cppがサンプルプログラムです  

# リファレンス
`HC_SR04::HC_SR04(PinName Trigger, PinName Echo)`  
- 超音波センサのピン設定をするための関数  
- `Trigger`には超音波センサのトリガーピンを、`Echo`には超音波センサのエコーピンのピン番号を代入してください  

`double HC_SR04::Get_Distance(void)`  
- 超音波センサの距離を返却する関数
- 超音波センサと障害物との距離を見たい場合に使用する
