#include <stdio.h>
#include <stdlib.h>
#define MAX 5   // maximum size of the circular queue

// Circular Queue structure
typedef struct {
    char arr[MAX];
    int front, rear;
} CircularQueue;

// Function Prototypes
void insert(CircularQueue *q, char element);
void delete(CircularQueue *q);
void display(CircularQueue *q);
int isFull(CircularQueue *q);
int isEmpty(CircularQueue *q);

int main() {
    CircularQueue q;
    q.front = -1;
    q.rear = -1;

    int choice;
    char element;

    while (1) {
        printf("\n=== Circular Queue Menu ===\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter a character to insert: ");
            scanf(" %c", &element);  // space before %c to ignore whitespace
            insert(&q, element);
            break;

        case 2:
            delete(&q);
            break;

        case 3:
            display(&q);
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to check if queue is full
int isFull(CircularQueue *q) {
    return ((q->front == 0 && q->rear == MAX - 1) || (q->front == q->rear + 1));
}

// Function to check if queue is empty
int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}

// Function to insert element
void insert(CircularQueue *q, char element) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot insert '%c'.\n", element);
        return;
    }
    if (q->front == -1) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = element;
    printf("Inserted '%c' into the queue.\n", element);
}

// Function to delete element
void delete(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }
    char deleted = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    printf("Deleted '%c' from the queue.\n", deleted);
}

// Function to display elements of the queue
void display(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%c ", q->arr[i]);
        if (i == q->rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
