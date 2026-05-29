#include<stdio.h>
int _a_1234(int n);
int main()
{
    int n = _a_1234(4);
    printf("%d\n",--n);
    return 0;
}
int _a_1234(int n)
{
    return (n++);
}
