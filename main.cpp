#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Hello, world!\n";
    for (int i = 1; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }
}
