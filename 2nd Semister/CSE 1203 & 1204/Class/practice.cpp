#include <iostream>

// Define ANSI escape codes for text color
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

int main() {
    // Output colored text for "Enter OTP"
    std::cout << YELLOW << "Enter OTP" << RESET << std::endl;

    return 0;
}
