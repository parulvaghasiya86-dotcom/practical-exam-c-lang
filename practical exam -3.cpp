#include <stdio.h>

void strev(int n){
    int rev = 0, r;
    for(; n != 0; n = n / 10){
        r = n % 10;
        rev = rev * 10 + r;
    }
    printf("Reverse: %d\n", rev);
}

int main(){
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if(n >= 100 && n <= 999){
        strev(n);
    }else{
        printf("Invalid input. Enter exactly three digits.\n");
    }
}

/*
	output:
	Enter a three-digit number: 123
	Reverse: 321
*/