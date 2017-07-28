#include <stdio.h>

#include <stdlib.h>

int i = -1;

void push();

void pop();

int decision();

int arr[10];

void display();


int main() {

    int m;

    m = decision();

    while(m > 0) {

        switch(m) {

            case 1: push();

                    break;

            case 2: pop();

                    break;

            case 3: exit(0);

            default:printf("Range is 1 to 3\n");

        }

        m = decision();

    }

    return 0;

}



void push() {

    int p;

    printf("Enter the element to be pushed: ");

    scanf("%d", &p);

    if(i >= 9) {

        printf("Stack Overflow\n");

    } else {

            i = i + 1;

            arr[i] = p;

            printf("The element is successfully pushed\n");

            display();

        }

}



void pop() {

    int k;

    int j = i-1;
    if (j < -1) {
        printf("Stack Underflow\n");
    } else {

    for (k = j; k >= 0; k--) {

        printf("|%d|\n", arr[k]);

    }

    printf("Successfully poped\n");
        i = i - 1;

}

}


int decision() {

    int n;

    printf("\nEnter your choice\n1.push\n2.pop\n3.exit\n");

    scanf("%d", &n);

    return n;

}



void display() {

    int j;

    for (j = i; j >= 0; j--) {

        printf("|%d|\n", arr[j]);

    }

}




    

