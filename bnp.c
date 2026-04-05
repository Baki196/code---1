// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[100][100];
    int m=3;
    int n=3;

    for(int i=0; i<m ; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    int sum;
    for(int i=0; i<m ; i++){
        sum=0;
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
            sum= sum+arr[i][j];
        }
        printf(" = %d",sum);
        printf("\n");
    }


    return 0;
}





#include <stdio.h>
int main() {
int a = 0, b = 1, c, n, i;
printf("Enter limit: ");
scanf("%d", &n);
printf("Fibonacci Series: ");
for(i = 0; a <= n; i++) {
printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
}
return 0;
}
