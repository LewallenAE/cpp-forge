#include <iostream>

struct LlamaLayer {
    double dropout_rate;
    int hidden_dim_size;
    short Q_2Bytes;
    char t;

};

int main() {

    std::cout << "The struct size of LlamaLayer is: " << sizeof(LlamaLayer) << "\n";
    return 0;
}