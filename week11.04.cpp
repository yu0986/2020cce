#include <stdio.h>
typedef struct data{
    int ans;///���X��
    char c;///�r��
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
