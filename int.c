#include<stdio.h>
#include<conio.h>
void main()
{
    long long n;
    int count=0;
    printf("enters an integer");
    scanf("%d lld", &n);
    while(n!=0)
    {
        n/ =10;
        ++ count;
    }
    printf("numbers of digits; %d, count");
    return 0;
    }
