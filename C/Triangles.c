#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Right Angle
    int i,j,r;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for (i = 1; i<= r; ++i){
        for (j = 1; j<=i; ++j){
            printf("* ");
        }
        printf("\n");
    }
    */

    /* Reverse
    int i,j,r;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for (i = r; i > 0; i--){
        for (j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
    */

    /* numbers
    int i,j,r;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for (i = 1; i<= r; ++i){
        for (j = 1; j<=i; ++j){
            printf("%d ",j);
        }
        printf("\n");
    }
    */

    /* Numbers reverse

    int i,j,r;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for (i = r; i > 0; i--){
        for (j = i; j > 0; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    */

    /* Left angle reverse
    int i,j,k,r;

    printf("Enter number of rows: ");
    scanf("%d",&r);


    for (i = 1;i <= r; i++){
        for (j = 1; j <= i; j++){
            printf("  ");
        }
        for (k = i;k <= r; k++){
            printf("* ");
        }
        printf("\n");
    }
    */

    /* Square

    int r, i, j;

    printf("Enter row of square: ");
    scanf("%d", &r);

    for (i=0 ; i<r; i++){
        for (j = 0; j < r; j++){
            printf("* ");
        }
        printf("\n");
    }
    */


    /* Left Angle
    int r, i, j;

    printf("Enter row of square: ");
    scanf("%d", &r);

    for (i = 0; i<r;i++){
        for (j = 0; j<r;j++){
            if (j < r-i-1){
                printf("  ");
            }
            else
                printf("* ");

        }
        printf("\n");
    }

    */







}
