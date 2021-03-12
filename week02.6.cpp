#include <stdio.h>
int main()
{
	float a[100],n,all=0,t=0,x=0;
	scanf("%f",&n);
	for(int i=0;i<=n;i++){
		scanf("%f",&a[i]);
		all+=a[i];
	}
	for(int i=0;i<=n;i++){
		if(a[i]>=all/n){
			t+=a[i];
			x++;
		}
	}
	printf("§¡¼Ð:%0.1f\n«e¼Ð:%0.1f\n",all/n,t/x);
}
