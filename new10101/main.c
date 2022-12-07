#include <stdio.h>
#include <stdlib.h>

/*
int isEven(int x){
    if (x % 2 == 0){
        return 1;
    }

}

int main()
{
    int n,num;

    printf("Enter a number: ");
    scanf("%d",&n);

    num = isEven(n);

    if (num == 1){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }


    return 0;
}
*/

/*
int large(int arr[5]){
    for (int i = 1; i < 5; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
        }
    }

    printf("Largest element = %d", arr[0]);
}

int main(){

    int arr[5]={1,2,3,4,9};
    large(arr);

}

*/


int check(int number) {
  int c_digit, sum = 0, num = number, number_of_digits;

  while (num > 0) {
    c_digit = num % 10;

    sum = sum + pow(c_digit, 3);
    num = num / 10;
  }


  if (sum == number) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int number , x;

  printf("Enter any number: ");
  scanf("%d",&number);


  x = check(number);

  if (x == 1) {
    printf("%d is an Armstrong Number.", number);
  } else {
    printf("%d is not an Armstrong Number.", number);
  }

  return 0;
}
