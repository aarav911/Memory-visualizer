// prog3.cpp
// Demonstrates RAII via a simple Buffer class, manual new/delete, and unique_ptr.

#include <iostream>
#include <memory>

struct Buffer {
    int* data;
    size_t size;
    Buffer(size_t n) : size(n) {
        data = new int[n];
        std::cout << "Buffer ctor: allocated data[" << n << "] at " << data << std::endl;
    }
    void set(size_t i, int v) {
        if (i < size) data[i] = v;
    }
    int get(size_t i) const {
        if (i < size) return data[i];
        return 0;
    }
    ~Buffer() {
        std::cout << "Buffer dtor: freeing data at " << data << std::endl;
        delete[] data;
    }
};

int main() {
    // Manual allocation of an object that owns heap memory
    Buffer* b = new Buffer(3);      // Buffer object on heap; it allocates internal array on heap
    b->set(0, 10); b->set(1, 20); b->set(2, 30);
    // Use the buffer...
    delete b;                       // destructor runs, freeing internal array (RAII if used correctly)

    // Safer: use unique_ptr for automatic lifetime management
    {
        std::unique_ptr<Buffer> ub = std::make_unique<Buffer>(2);
        ub->set(0, 100);
        ub->set(1, 200);
        // ub goes out of scope at the end of this block -> destructor runs automatically
    }

    return 0;
}
