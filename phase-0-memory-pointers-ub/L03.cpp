#include <iostream>
#include <cstring>

void inspect_tensor_bits() {
     float t_pun_float = 0.15625f;
     int t_pun_int;
     std::memcpy(&t_pun_int, &t_pun_float, sizeof(t_pun_int));

     std::cout << t_pun_int << "\n";
};

int main() {

     inspect_tensor_bits();
     return 0;

}
