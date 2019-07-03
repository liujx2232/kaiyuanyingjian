//小写字母转换morse码 17050510046
int incomingByte = 0; //for incoming serial data
String comdata = "";//声明字符串变量
void setup(){
 Serial.begin(9600);//opens serial port,sets data rate to 9600 bps
}


void loop()
{
    while (Serial.available() > 0)  
    {
        comdata += char(Serial.read());  //串口输入接收字符串
        delay(2);
    }
    int i;
    for(i=1;i<1000;i++){
    int b = comdata[i];
    switch(b){
      case 97:printf("*-");break;
      case 98:printf("-***");break;
      case 99:printf("-*-*");break;
      case 100:printf("-** ");break;
      case 101:printf("* ");break;
      case 102:printf("**-*");break;
      case 103:printf("--*");break;
      case 104:printf("**** ");break;
      case 105:printf("** ");break;
      case 106:printf("*--- ");break;
      case 107:printf("-*-");break;
      case 108:printf("*-**");break;
      case 109:printf("--");break;
      case 110:printf("-*");break;
      case 111:printf("---");break;
      case 112:printf("*--*");break;
      case 113:printf("--*-");break;
      case 114:printf("*-*");break;
      case 115:printf("***");break;
      case 116:printf("-");break;
      case 117:printf("**-");break;
      case 118:printf("***-");break;
      case 119:printf("*--");break;
      case 120:printf("-**-");break;
      case 121:printf("-*--");break;
      case 122:printf("--**");break;
      case 32:printf(" ");break; //空格
      case 13:printf("/");break; //回车
      }
    
     if (comdata.length() > 0)
      {
          Serial.println(comdata);
          comdata = "";
      }
  }
}
