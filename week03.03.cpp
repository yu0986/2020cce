#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
        printAll();
    int *p=&a[2];
    *p=222;
        printAll();
        printf("p�߸̤p�ȱ��O���ȬO:%d\n",p);
    p=p+2;
    *p=666;
        printAll();
        printf("p�߸̤p�ȱ��O���ȬO:%d\n",p);

    p--;
    *p=555;
        printAll();
        printf("p�߸̤p�ȱ��O���ȬO:%d\n",p);

}

