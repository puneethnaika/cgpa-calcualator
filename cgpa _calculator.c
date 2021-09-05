/*This program was written by "PUNEETH M" on 5 september 2021 */

#include<stdio.h>
void main ()
{
    int marks;
    printf("enter the marks:\n");
    scanf("%d", &marks);
    if(marks>=60)
    {
            
            if (marks>=90)
            
            {
                printf("you got 10CGPA");
            }
            
            else if (marks>=80)
            {
                printf("you got 9 CGPA\n");
            }
            
            else if (marks>=70)
            {
                printf("you got 8 CGPA");
            }
            
    }
    
    else if(marks<60)
    {
        printf("you have failed maga cool");
    }
    
}