#include<iostream>
using namespace std;
int GCD(int a, int b){
  int m,n,ans=1,i;
  if(a<b)m=a;
  else m=b;
  for(i=2;i<=m;i++){
  	if(a%i==0 && b%i==0)ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
