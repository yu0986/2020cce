void setup(){///只做一次設定
size(1024, 400);
}
void draw(){///每秒狂做60次
  if(mousePressed)background(200,191,261);
  else background(255,182,192);
  textSize(50);///字的大小 設50號字
  text(a,100,100);///將a在 100,100畫出來
}
int a=0;///外部變數
void mousePressed(){//按下去時,會呼叫這個函式
  a++;
}
