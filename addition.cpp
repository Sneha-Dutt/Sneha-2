// addition.cpp
#include <iostream>

class Adder {
public:
    // Function that adds two static numbers
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    // Just a basic example of using the Adder class
    int result = Adder::add(3, 5);
    std::cout << "Result: " << result << std::endl;
    int array[5];
    return array[6];
    //return 0;
}
