import processing.sound.*;//Step3的程式
SoundFile player;//Step3的程式
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this,"tada.mp3");
}//Step3的程式
void draw(){//每秒60次
  background(41,109,207);
  int s = second();//秒鐘
  text(9-s%10,100,100);
  if(9-s%10==0) player.play();//Step3的程式
}
