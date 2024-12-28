// take two numbers start and end -> find sum of squares
// 1^2 + 2^2 +....n^2
// <loop> and <without loop>
#include<stdio.h>
int main()
{
    int start_value=0, end_value=3;
    int sum_of_squares = 0;
    for(int i =start_value; i <= end_value; i++)
    {
        sum_of_squares = sum_of_squares + i*i ;
    }
printf("The sum_of_squares of %d to %d is: %d\n",start_value, end_value, sum_of_squares);
return 0;
}