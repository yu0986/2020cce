#include <stdio.h>
struct data{
    int ans;///���X��
    char c;///�r��
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
