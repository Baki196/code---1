#include<stdio.h>
int main()
{
    int i,n,max,a[i];
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    max = a[1];
    for(i = 2; i <= n; i++)
        if(max < a[i])
        max = a[i];
    printf("%d",max);
    return 0;
}
