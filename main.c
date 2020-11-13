#include <stdio.h>
int sum(int Numbers[], int p ); /* function for summation*/
int main()
{
    int Numbers[20]; /*array that will store the unique values*/
    int i,j, user_number[20];/*counters and array that will store values from the user*/
    int f; /*stands for found*/
    int p=0; /*variable for the position of elements in the array*/
    printf("Enter 20 integers: ");
        for( i = 0; i < 20; i++){
            f=1;
            scanf("%d",&user_number[i]);
            for (int j=0; j<i; j++){
                if (Numbers[j]==user_number[i])
                    f=0; /*if the number found in the new array it will not be stored and make f=0*/
            }
            if (f==1){
                Numbers[p]= user_number[i]; /*if the number not found in the new array or f=1 it will store in the array*/
                p++;
            }
    }
    printf("The Numbers are:  \n ");
    for (i = 0; i < p; i++) {
            printf("%d \n", Numbers[i]); /* to print the new values in the new array*/
    }
    sum(Numbers,p);
return 0;
}
int sum(int Numbers[], int p ){
    int sum = 0;
    int i;
for (i = 0; i < p; i++) {
        sum += Numbers[i]; /*to sum the numbers in the array*/
}
printf("The Sum = %d ", sum);
    return 0;
}
