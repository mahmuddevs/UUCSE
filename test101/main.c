#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a,b;

    printf("Enter 2 numbers: ");
    scanf("%d,%d",&a,&b);

    if (a<b){
        printf("%d is greater than %d",b,a);
    }
    else if (a==b){
         printf("%d is equal to %d",a,b);
    }
    else {
         printf("%d is greater than %d",a,b);
    }
    */

    /*
    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);

    if (a>b && a>c) {
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if (b>a && b>c){
         printf("%d is equal to %d and %d",b,a,c);
    }
    else if (a==b && a==c){
        printf("all equal number");
    }
    else {
         printf("%d is greater than %d and %d",c,a,b);
    }
    */

    /*
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if (a>0){
        printf("%d is a positive number",a);
    }
    else if (a<0){
        printf("%d is a negative number",a);
    }
    else if (a==0){
        printf("%d is equals to 0",a);
    }
    else{
        printf("Invalid number");
    }
    */
    /*
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if (a%5 == 0){
        printf("%d is divisible by 5",a);
    }
    else if (a%11 == 0){
        printf("%d is divisible by 11",a);
    }
    else{
        printf("%d is not divisible by 5 or 11",a);
    }
    */

    /*
    int a;

    printf("Enter 2 numbers: ");
    scanf("%d",&a);

    if (a%2 == 0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }
    */

    /*
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch>='A' && ch <= 'Z' || ch>='a' && ch <= 'z'){
        printf("%c is an alphabet",ch);
    }
    else {
        printf("The value is not an alphabet",ch);
    }
    */
    /*
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if (ch == 'a' && ch == 'e' && ch == 'i' && ch=='o' && ch=='u' && ch == 'A' && ch == 'E' && ch == 'I' && ch=='O' && ch=='U'){
        printf("%c is a Vowel",ch);
    }
    else {
        printf("%c is a Consonant",ch);
    }
    */

    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if (year % 4 == 0){
        if (year % 100 != 0){
            printf("%d is leap year",year);
        }
        else if (year % 400 == 0){
            printf("%d is leap year",year);
        }
        else{
            printf("%d is not leap year",year);
        }
    }
    else {
        printf("%d is not leap year",year);
    }


}
