#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int x=a;//x�����̤j��
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}
int min(int a,int b,int c,int d)
{
	int x=a;//x�����̤j��
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* �W��C++ main �禡 ���P�� �U�� C �� main �禡
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
