#include <iostream>
#include <cmath>

bool is_prime(int num) {
    // Check if a number is prime
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_primes(int num) {
    // Calculate the sum of all prime numbers up to num
    int total = 0;
    for (int n = 0; n <= num; n++) {
        if (is_prime(n)) {
            total += n;
            // std::cout << n << " is a prime, adding it to the total. Current total: " << total << std::endl;
        }
    }
    return total;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Please provide a number as a command-line argument." << std::endl;
        return 1;
    }

    int number = std::stoi(argv[1]);
    int sum_of_primes = sum_primes(number);
    std::cout << sum_of_primes << std::endl;

    return 0;
}
