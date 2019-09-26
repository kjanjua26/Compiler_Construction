/*
 * This is the code to implement STACK using arrays.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int STACK[MAX], TOP;
void printStack(int []);
void push(int [], int);
void pop(int []);

void main(){
    int ITEM = 0;
    int choice = 0;
    TOP = -1;
    printf("Welcome to STACK with MAX of %d elements!\n", MAX);
    while(1){
        printf("What do you want to do?\n 1. DISPLAY\n 2. PUSH\n 3. POP\n 4. EXIT\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printStack(STACK);
                break;
            case 2:
                printf("Enter ITEM to insert: ");
                scanf("%d", &ITEM);
                push(STACK, ITEM);
                break;
            case 3:
                pop(STACK);
                break;
            case 4:
                printf("Exiting!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
}

void printStack(int STACK[]){
    int i = 0;
    if(TOP == -1){
        printf("STACK is empty!");
        return;
    }
    for(i = TOP; i >= 0; i--){
        printf("\n%d", STACK[i]);
    }
    printf("\n\n");
}

void push(int STACK[], int toPush){
    if(TOP == MAX-1){
        printf("STACK is full. Cannot push.\n");
        return;
    }
    TOP++;
    STACK[TOP] = toPush;
    printf("Pushed the item %d!\n", toPush);
    printf("Updated STACK looks like this: \n");
    printStack(STACK);
}

void pop(int STACK[]){
    if(TOP == -1){
        printf("STACK is empty. Nothing to POP!\n");
        return;
    }
    int elem = STACK[TOP];
    TOP--;
    printf("POP'ed %d from STACK!\n", elem);
    printf("Updated STACK looks like this: \n");
    printStack(STACK);
}