#include<stdio.h>
int main()
{
    // c me direct string comparision is not possible
    char str[8] = "if block";
    if (str == "if block")
    {
        printf("if block executed");
    }
    else
    printf("else block executed");
    return 0;
}
