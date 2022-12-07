#include <stdio.h>
#include <stdlib.h>

/*
int sumRec(int n){
    if (n == 0){
        return 0;
    }
    else{
        return(n%10 + sumRec(n/10));
    }
}

int main()
{
    int num,sum;

    printf("Enter numbers: ");
    scanf("%d",&num);

    sum = sumRec(num);

    printf("%d",sum);

    return 0;
}
*/


int recPercentage(float n,int i){
    if(i>100){
        return;
    }
    else{
        printf("%f %% \n",(n*i)/100);
    }
    recPercentage(n,i=i+1);
}


int main(){
    int num,i=1;

    printf("Enter a number: ");
    scanf("%d",&num);
    recPercentage(num,i);
}

