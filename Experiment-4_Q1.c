#include <stdio.h>
int count=0;
int increment() {
    count++;
    printf("Count inside increment(): %d\n", count);
    return count;
}

int decrement() {
    count--;
    printf("Count inside decrement(): %d\n", count);
    return count;
}

int display() {
    printf("Current value of count: %d\n", count);
    return count;
}

int main() {
    printf("Initial count: %d\n", count);
    increment();
    increment();
    decrement();
    display();
    return 0;
}
