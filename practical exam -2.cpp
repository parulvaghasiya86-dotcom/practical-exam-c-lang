#include <stdio.h>

int main(){
    int n, i, s;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    s = a[0];

    for(i=1;i<n;i++){
        if(a[i] < s){
            s = a[i];
        }
    }

    printf("Smallest number: %d\n", s);
}

/*
	output:
	Enter array size: 3
	Enter 3 numbers:
	123
	357
	159
	Smallest number: 123
*/