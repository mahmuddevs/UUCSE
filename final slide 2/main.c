#include <stdio.h>
#include <stdlib.h>


/* ---------percentage from 1-100---------

void recursion(int i,float nn)
{
 if(i>100)
 {
  return;
 }
 else
 {
  printf("%d %% = %f \n",i,(nn*i)/100);
 }
 recursion(i=i+1,nn);
}
main()
{
 float num;
 printf("Enter a value to split in percentage: ");
 scanf("%f",&num);
 recursion(1,num);
}

*/

/* ---------factorial---------
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
*/



/* ---------fibonacchi---------
int Fibonacci(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

int main()
{
    int n, i = 0, c;

    scanf("%d",&n);

    printf("Fibonacci series\n");

    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d\n", Fibonacci(i));
        i++;
    }

    return 0;
}
*/


/* ---------power of number---------
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}
*/



/* ---------digit count---------
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;

    printf("Enter a positive integer number: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("Total digits in number %d is: %d\n",number,count);

    return 0;
}
*/

/* ---------suym of all digits---------
int sumOfDigits(int num)
{
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}



int main()
{
    int num, sum;

    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits of %d = %d", num, sum);

    return 0;
}


*/
/* ---------length of string using rec---------*/

int find_len (char str[], int index)

{

	static int l = 0;


	if (str[index] == '\0')

		return l;

	else

		l ++;


	find_len (str, index + 1);

}


int main ()

{

	char str[100];

	int len = 0;


	printf ("Enter the string: \n");

	scanf ("%[^\n]s", str);



	len = find_len (str, 0);



	printf ("The length of the given string is: %d\n", len);

	return 0;

}





