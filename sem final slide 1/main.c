#include <stdio.h>
#include <stdlib.h>

/*
---------1--------*/

int main()
{
   int arr[5],i;

   for (i=0;i<5;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }


   for (i=0;i<5;i++){
    printf("%d",arr[i]);
   }
}

/*
-------2------*/

int main(){
    int arr[5],i;

   for (i=0;i<5;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }


   for (i=5-1;i>=0;i--){
    printf("%d",arr[i]);
   }
}

/*
-----3-----*/
int main(){

    int arr[5],i,sum=0;

   for (i=0;i<5;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }
    for (i=0;i<5;i++){
        sum = sum + arr[i];
    }
    printf("Sum of the array = %d\n",sum);
}


/*
----4----*/
int main(){
    int arr[5],i,j;

   for (i=0;i<5;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i] == arr[j]){;
                printf("%d",arr[j]);
            }
        }
    }
}


/*
----5----*/
int main(){
    int arr[10],i,j,count=0;

   for (i=0;i<10;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i] == arr[j]){;
                count++;
            }
        }
    }

}


/*
----6----*/
int main(){
    int arr[10],i,j,count;

   for (i=0;i<10;i++){
    printf("Enter number %d element: ",i+1);
    scanf("%d",&arr[i]);
   }

    for(i=0;i<10;i++){
        count=0;
        for(j=0;j<10;j++){
            if(arr[i] == arr[j] && i!=j ){;
                count++;
            }
        }
        if(count==0){
             printf("%d",arr[i]);
        }


    }

}



/*
----7----*/

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    printf("Enter size of array: ");
    scanf("%d", &size);


    for(i=0; i<size; i++)
    {
        printf("Enter number %d element: ",i+1);
        scanf("%d", &arr[i]);


        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}



/*
----8----*/
int main(){
    int arr[100];
    int size,i,min,max;

    printf("Enter size of array: ");
    scanf("%d", &size);


    for(i=0; i<size; i++)
    {
        printf("Enter number %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum = %d",max);
    printf("\nMinimum = %d",min);
}
/*
----9----*/
int main() {
    int arr[100];
    int size,i,first,second;

    printf("Enter size of array: ");
    scanf("%d", &size);


    for(i=0; i<size; i++)
    {
        printf("Enter number %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    first = arr[0];
    second = arr[0];

    for(i=1;i<size;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }

        else if(arr[i] > second && arr[i] < first){
            second = arr[i];
        }
    }
    printf("Maximum = %d",first);
    printf("\n2nd maximum = %d",second);
}





/*
----12----*/

int main()
{
    /* Adding an element in Array


    int arr[100],i,size,pos,value;

    printf("Enter the number of array elements: ");
    scanf("%d",&size);

    printf("Enter the elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the index you want to place new element: ");
    scanf("%d",&pos);

    printf("Enter the value: ");
    scanf("%d",&value);

    if(pos>size+1 || pos<=0){
        printf("Invalid position!");
    }
    else{
        for(i=size;i>=pos;i--){
        arr[i] = arr[i-1];

        }
        arr[pos-1] = value;
        size++;


        printf("New Array elements are: ");
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }

    }

    */

    /* Deleting elements form Array
    int arr[100],pos,i,size;

    printf("Enter the number of array elements: ");
    scanf("%d",&size);

    printf("Enter the elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the index you want to remove: ");
    scanf("%d",&pos);


    if(pos>size+1 || pos<=0){
        printf("Invalid position!");
    }
    else{
        for(i=pos-1;i<size-1;i++){
        arr[i] = arr[i+1];

        }

        size--;


        printf("New Array elements are: ");
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }

    }
    */
}

/*-------13--------*/
int main(){

/* Counting String Length*/
    char string[100];
    int i,count = 0;

    printf("Enter a string: ");
    gets(string);

    for(i=0;i< string[i] != '\0';i++){
        count++;
    }

    printf("Length of your string is %d",count);

}

/*-------15--------*/


void main()
{
    char str[100];
    int i, wrd;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    i = 0;
    wrd = 1;

    while(str[i]!='\0')
    {

        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd-1);
}


void main()
{
    char str[100];
    int alp, digit, splch, i;
    alp = 0;
    digit = 0;
    splch = 0;
    i = 0;

       printf("Input the string : ");
       fgets(str, sizeof str, stdin);


    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]>='#' || str[i]<='*' || str[i]<='+' || str[i]<='-' || str[i]<='/' || str[i]<='^'|| str[i]<='@' || str[i]<='$' || str[i]<='%')
        {
            splch++;
        }
        else{
            printf("Invalid Input");
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}



#include <stdio.h>
int main()
{
    int vowel =0,cons = 0;
    int i;

    char str[100];
    int len = sizeof(str);

    printf("Enter a string: ");
    gets(str);


for(i=0; i<len; i++)
{

if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        vowel++;
    }
else if((str[i] >'a' && str[i] < 'z' ) || (str[i] >'A' && str[i] < 'Z'))
    {
        cons++;
    }
}

printf("%d vowels",vowel);
printf("\n %d consonants",cons);
}
