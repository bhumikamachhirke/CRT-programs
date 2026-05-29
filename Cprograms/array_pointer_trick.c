#include<stdio.h>
int main()
{
    char name[]="abcdef";
    int i=0;
    printf("%c",name[i]);
    printf("%c",i[name]);
    printf("%c",name[i+2]);
    printf("%d",i[name+2]);
    return 0;
}
