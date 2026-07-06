#include <iostream>

int fast_matrix_sum(int* matrix, int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
        
        sum += matrix[i * cols + j];
    }
   }
   return sum;
};

int main() {
    int my_matrix[] = {1, 2, 3, 4, 5, 6};
    int matrix_output = fast_matrix_sum(my_matrix,2,3);
    std::cout << "The sum of the matrix: "<< matrix_output << "\n";
    return 0;
}
