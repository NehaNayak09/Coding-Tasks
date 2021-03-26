#include<stdio.h>
#include<conio.h>

void main(){
    int n;

    printf("Input: ");
    scanf("%d",&n);

    char bin32[]  = "00000000000000000000000000000000";

    //converting integer to binary and storing it in character array
    for (int i = 31; i >= 0; --i)
    {
        if (n % 2)
            bin32[i] = '1';
        n /= 2;
    }

    printf("Input Binary : ");
    for (int i = 0; i < 32; i++)
    {
        printf("%c",bin32[i]);
    }

    printf("\nOutput Binary : ");
    for (int i = 31; i >= 0; i--)
    {
        printf("%c",bin32[i]);
    }


}
