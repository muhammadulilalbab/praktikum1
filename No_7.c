#include <stdio.h>
int countTemp(int digit, int digits);
int main()
{
    int counter = 0,digit, digits;
    scanf("%d",&digit);
    scanf("%d",&digits);
    if(digits<0){
        printf("Tidak ada bilangan");
        printf("\n");
        return 0;
    }
    while (digits>=0){
        counter +=countTemp(digit,digits);
        scanf("%d",&digits);
    }
    printf("%d",counter);
    printf("\n");
    return 0;
}

int countTemp(int digit, int digits){
    int tempCounter = 0;
    do {
        tempCounter += digit == digits % 10;
        }
    while ( digits /= 10 );

return tempCounter;
}

