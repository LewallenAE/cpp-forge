#include <iostream>


void launch_kernel_config() {
    int *heap_ptr = new int(1024);

    std::cout << "Heap ptr: " << *heap_ptr << "\n";

    delete heap_ptr;
}


int main() {
    launch_kernel_config();
    return 0;
}