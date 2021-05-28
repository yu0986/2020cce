//int []a={1,2,3,4,5,6,7,8,9,10}//Java
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
  for(int i=0;i<10000;i++){
    int i1=(int) random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0, rolling=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){
    int x =50+i*50;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255);
    ellipse(x,100,40,40);
    textAlign(CENTER,CENTER);
    fill(0);
    text(a[i],x,100);
  }
}
void mousePressed(){
  N++;
  rolling=500;
}
