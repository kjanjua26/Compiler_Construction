/*
 * This is the code to implement QUEUE using arrays.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int QUEUE[MAX], TOP;
void printQueue(int []);
void push(int [], int);
void pop(int []);
int rear = -1;
int front = -1;

void main(){
    int choice = 0;
    int ITEM = 0;
    printf("Welcome to QUEUE with MAX of %d elements!\n", MAX);
    while(1){
        printf("What do you want to do?\n 1. DISPLAY\n 2. PUSH\n 3. POP\n 4. EXIT\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printQueue(QUEUE);
                break;
            case 2:
                printf("Enter ITEM to insert: ");
                scanf("%d", &ITEM);
                push(QUEUE, ITEM);
                break;
            case 3:
                pop(QUEUE);
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

void printQueue(int QUEUE[]){
    int i;
    if(front == -1){
        printf("The QUEUE is empty!\n");
        return;
    }
    for(i = front; i <= rear; i++){
        printf("\n%d", QUEUE[i]);
    }
    printf("\n\n");
}

void push(int QUEUE[], int toPush){
    if(rear == MAX-1){
        printf("QUEUE is full!\n");
        return;
    }
    front = 0;
    rear++;
    QUEUE[rear] = toPush;
    printf("Pushed the item %d!\n", toPush);
    printf("Updated QUEUE looks like this: \n");
    printQueue(QUEUE);
}

void pop(int QUEUE[]){
    if(front == -1 || front > rear){
        printf("Queue is empty!\n");
        return;
    }
    int elem = QUEUE[front];
    front++;
    printf("POP'ed %d from QUEUE!\n", elem);
    printf("Updated QUEUE looks like this: \n");
    printQueue(QUEUE);
}