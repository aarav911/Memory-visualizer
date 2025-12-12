// prog2.cpp
#include <iostream>

void process(int arr[], int n) {
    arr[1] = arr[1] + 5;
}

int main() {
    int a = 2;
    int* arr = new int[3];
    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    process(arr, 3);
    // show pointer arithmetic example
    int second = *(arr + 1);
    delete[] arr;
    return 0;
}
