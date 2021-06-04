#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%0.2d:%0.2d:%0.2d",hour,min,sec);
}
