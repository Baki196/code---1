#include <stdio.h>
int main()
{
    int days,years,weeks,remainingDays;
    printf("Enter total days:");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    weeks=days/7;
    remainingDays=days%7;
    printf("Years=%d\n",years);
    printf("weeks=%d\n",weeks);
    printf("Days=%d\n",remainingDays);
    return 0;

}
