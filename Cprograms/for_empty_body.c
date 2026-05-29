#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=3;i++);  //After i++ from 3, i becomes 4, and the condition i<=3 becomes false.
    printf("%d",i); //Then this line executes:
    return 0;
}
