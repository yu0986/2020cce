#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;//�����̤j��
	max=n%10;//n���Ӧ��
	while(n>0){
		if((n%10)>max) max=n%10;
		n/=10;
	}
		return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* �W��C++ �� main ��� ������ �U�� C �� main ���
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
