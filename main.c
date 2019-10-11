#include<stdio.h>
void conversion(int n,int b);
void conversion(int n,int b)
{
    int x=n%b;
    if(n/b==0 && x>10)
    {
        printf("%c",x-10+'A');
        return;
    }
    else if(n/b==0 && x<10)
    {
        printf("%d",x);
        return;
    }
    conversion(n/b,b);
    if(x>10)
        printf("%c",x-10+'A');
    else if(x<10)
        printf("%d",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Binary:");
    conversion(n,2);
    printf("\n");
    printf("octal:");
    conversion(n,8);
    printf("\n");
    printf("hexadecimal:");
    conversion(n,16);
    printf("\n");
    return 0;
}
