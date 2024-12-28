// wap to display odd numbers till 10
#include<stdio.h>
int main() {
    int i , sum=0;
    // printf("Enter a number : ");
    // scanf("%d",& i);
    // do{
    //     if (i%2!=0)
    //     {
    //         printf("the odd number is: %d\n",i);
    //     }
    //         i++;
        
    // }
    // while (i<10);
    for (i = 0; i<=4 ; i++ ) {
        if(i%2==0) {
            continue;
            sum = sum+i;
        }
    }
            printf("%d\n", sum);
    return 0;
}

