#include<stdio.h>
int main()
{
    int i,j,n,max,a[50];
    scanf("%d",&n);
    i = 1;
    while(n!=0)
    {
        a[i] = n % 16;
        n=n/16;

        i++;
    }
    for (j = i-1;j>=1;j--)
        if(a[j]<=9)
        printf("%d",a[j]);
    else
        printf("%c",a[j]+55);
    return 0;
}
