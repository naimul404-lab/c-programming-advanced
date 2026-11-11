#include <stdio.h>
#define CAP 5
int main(void) {
    int q[CAP], front = 0, rear = -1;
    for (int x = 10; x <= 30; x += 10) q[++rear] = x;
    puts("Queue (front to rear):");
    for (int i = front; i <= rear; i++) printf("%d ", q[i]);
    putchar('\n');
    return 0;
}
