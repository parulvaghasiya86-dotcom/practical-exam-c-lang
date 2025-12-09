#include <stdio.h>

int main(){
    int number, type;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0){
        type = 1;
    }else if(number < 0){
        type = 2;
    }else{
        type = 3;
    }

    switch(type){
        case 1:
            printf("The number is positive.\n");
            break;
        case 2:
            printf("The number is negative.\n");
            break;
        case 3:
            printf("The number is consonant (zero).\n");
            break;
    }
}

/*
	output:
	Enter a number: 159
	The number is positive.
	
	Enter a number: -789
	The number is negative.
	
	Enter a number: 00
	The number is consonant (zero).
*/