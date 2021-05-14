#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a)!=EOF){//End of File
		ans++;
	}
	printf("%d",ans-1);//因為最後一個是0
}
