#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, c, P; //declare variables a, b,, c and P as type float
    char* kind; //declare variable kind as type character
    printf("Enter values"); //print a message to console
    scanf("%f%f%f", &a, &b, &c);  //read the values for the variables a, b, and c
    if (a+b>c&&a+c>b&&b+c>a) //check if the sum of every pair of two edges is greater than the remaining edge
{ //if true
       { P = (float)(a+b+c);  //do the calculations for the perimeter
        printf("%.1f\n", P);  //print the value of the variable P
    }
        if (a==b || b==c || a==c) //check if either of the edges are equal
        { //if true
            kind= "Isosceles Triangle"; //assign a word to the variable kind
            printf("%s", kind); //print the value assigned to the variable kind
        }
    else if (a==b&&b==c) //check if both all edges are equal
        { //if true
            kind = "Equilateral Triangle"; //assign a word to the variable kind
            printf("%s", kind);//print the value assigned to the variable kind
        }
        else //if none are equal
        {
            kind = "Scalene Triangle"; //assign a word to the variable kind
            printf("%s", kind); //print the value assigned to the variable kind
        }
}    else //if the first condition is not true
        {
        printf("Invalid input"); //print a message to console
    }
    return 0; }
