// prog1.cpp
#include <iostream>

void modify(int* p) {
    *p = *p + 10;
}

int sum(int a, int b) {
    int result = a + b;
    return result;
}

int recursive(int n) {
    if (n == 0) return 1;
    return n * recursive(n - 1);
}

int main() {
    int x = 5;                // stack
    int* ptr = new int(20);   // heap allocation
    modify(ptr);              // pointer passed to another function

    int y = sum(x, *ptr);     // function call with value + dereference

    int fact = recursive(3);  // recursion producing stack frames

    delete ptr;               // heap free
    return 0;
}
