#include <stdio.h>

int main(){
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], *p;
    printf("Enter %d numbers:\n", n);

    for(p = a; p < a + n; p++){
        scanf("%d", p);
    }

    printf("Squares of the numbers:\n");
    for(p = a; p < a + n; p++){
        printf("%d ", (*p) * (*p));
    }
    printf("\n");
}

/*
	output:
	Enter array size: 4
	Enter 4 numbers:
	456
	68549
	1225
	4156
	Squares of the numbers:
	207936 403998105 1500625 17272336
*/