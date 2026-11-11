#include <stdio.h>
#define CAP 5
int main(void) {
    int q[CAP], front = 0, rear = 0, count = 0;
    int values[] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++) {
        if (count == CAP) { puts("Queue full"); break; }
        q[rear] = values[i]; rear = (rear + 1) % CAP; count++;
    }
    while (count > 0) {
        printf("%d ", q[front]);
        front = (front + 1) % CAP; count--;
    }
    putchar('\n');
    return 0;
}
