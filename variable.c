#include<stdio.h>
int global_variable = 55;
void local_variable_function()
{
    int local_variable = 88;
    printf("local variable from local_variable_function:-%d\n",local_variable);
    printf("Global variable from local_variable_function:-%d\n",global_variable);

}
int main()
{
    local_variable_function();
     //print("local variable from main function:-%d\n",local_variable);
    printf("Global variable from main function:-%d\n",global_variable);
    return 0;
}