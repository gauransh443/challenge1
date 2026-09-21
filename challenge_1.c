// A student has marks for five subjects. Write a C program to read the marks of all five subjects and calculate
// the total marks, average marks, and percentage. Display all three results clearly.

#include <stdio.h>
int main() {

    int marks1,marks2,marks3,marks4,marks5,total ;
    float percentage,avg;
    printf("Enter marks of subject 1 : ");
    scanf("%d",&marks1);
    printf("Enter marks of subject 2 : ");
    scanf("%d",&marks2);
    printf("Enter marks of subject 3 : ");
    scanf("%d",&marks3);
    printf("Enter marks of subject 4 : ");
    scanf("%d",&marks4);
    printf("Enter marks of subject 5 : ");
    scanf("%d",&marks5);

    total = marks1+marks2+marks3+marks4+marks5 ;
    avg = (marks1+marks2+marks3+marks4+marks5)/5;
    percentage = (total/500.0)*100;
    printf("The total marks is : %d \n",total);
    printf("The average marks is : %.2f \n",avg);
    printf("The percentage of 5 subjects is : %.2f%% \n",percentage);
    return 0;
    

}