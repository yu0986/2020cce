#include <stdio.h>
int main()
{
    int max(int,int);
    int min(int,int);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a/max(a,b),b/max(a,b));
    return 0;
}

int max(int a,int b)
{
    int i;
    while(b!=0)
    {
        i=a%b;
        a=b;
        b=i;
    }
    return a;
}

