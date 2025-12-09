#include <stdio.h>
int main(){
    int i, j, n;
    int arr[5];

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        printf("\n");
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

/*
	output:
	Enter 5 numbers:
	78
	
	65
	
	35
	
	21
	
	1000
	
	78
	65 65
	35 35 35
	21 21 21 21
	1000 1000 1000 1000 1000
*/