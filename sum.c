#include<stdio.h>

int main()
{
    long int  start_value=0, end_value=5;
    long int sum = 0;
    // if start_value > end_value, 
    // print-> start value is greater than end value, so the sum is 0

    
    for(int i =start_value; i <= end_value; i++)
    {
        //printf("sum: %d i: %d\n", sum, i);
        sum = sum + i;
    }
    
//    long int n = end_value - start_value;

//    sum = n * (2*start_value + n - 1)/2;

    // 1 + 2 + 3 + 4 + 5 + 6 + ...
    printf("The sum of %ld to %ld is: %ld\n",start_value, end_value, sum);

    return 0;
}