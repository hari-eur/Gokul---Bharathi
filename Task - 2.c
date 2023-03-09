#include <stdio.h>
#include <stdlib.h>

void full_pyramid_while()
{
	int i = 1;
    while (i <= 7) {
        int j = 1;
        while (j <= 7 - i) {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}

void half_pyramid_while()
{
	int i = 1;
    while (i <= 7) {
        int j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

void inverted_pyramid_while()
{
	int i = 7;
    while (i >= 1) {
        int j = 1;
        while (j <= 7 - i) {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            printf("*");
            k++;
        }
        printf("\n");
        i--;
    }
}

void full_pyramid_for()
{
	int i, j, k;
	for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7 - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void half_pyramid_for()
{
	int i, j;
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void inverted_pyramid_for()
{
	int i, j, k;
	for (i = 7; i >= 1; i--) {
        for (j = 1; j <= 7 - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice;
    here:
    printf("1. Full Pyramid using for loop\n2. Inverted Pyramid using for loop\n3. Half-Pyramid using for loop\n");
    printf("4. Full Pyramid using while loop\n5. Inverted Pyramid using while loop\n6. Half-Pyramid using while loop\n7. To exit\n\nEnter your Choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
    	case 1:
    		printf("Full Pyramid using for loop: \n");
    		full_pyramid_for();
    		goto here;
    	case 2:
    		printf("Inverted Pyramid using for loop: \n");
    		inverted_pyramid_for();
    		goto here;
    	case 3:
    		printf("Half Pyramid using for loop: \n");
    		half_pyramid_for();
    		goto here;
    	case 4:
    		printf("Full Pyramid using while loop: \n");
    		full_pyramid_while();
    		goto here;
    	case 5:
    		printf("Inverted Pyramid using while loop: \n");
    		inverted_pyramid_while();
    		goto here;
    	case 6:
    		printf("Half Pyramid using while loop: \n");
    		half_pyramid_while();
    		goto here;
    	case 7:
    		exit(0);
    	default:
    		printf("Enter valid choice \n");
    		goto here;
	}
    return 0;
}

