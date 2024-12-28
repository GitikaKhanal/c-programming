//write a program to find the grade of student 
#include<stdio.h>
#include<math.h>
int main() {
    int marks,index;
    printf("Enter the percentege of marks you obtained\n");
    scanf("%d",& marks);
    index= marks/10;
    switch(index) { 
        case 9:
        case 8:
        {
            printf("You scored grade 'A'");
            break;
        }
        case 7:
        {
            printf("You scored grade 'B'");
            break;
        }
        case 6:
        {
            printf("You scored grade 'C'");
            break;
        }
        case 5:
        case 4:
        {
            printf("You scored grade 'D'");
            break;
        }
        case 3:
        {
            printf("You scored grade'E'");
        }
        case 2: case 1: case 0:
        {
            printf("you scored grade 'F' ");
            break;
        }
        default:
        {
            printf("You have entered invalid marks!!!");
        }
        return 0;

    }
    

        

}