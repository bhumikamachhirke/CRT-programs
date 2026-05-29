#include<stdio.h>
int show(int returns);
int main()
{
    int num = show(sizeof(float));
    printf("value id %d",++num);
    return 0;
}
int show(int returns)
{
    returns += 5.31;
    return(returns);
}
