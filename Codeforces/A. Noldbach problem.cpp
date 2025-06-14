#include <iostream>
#include <vector>
#include <cmath>

// Function to generate prime numbers up to n using Sieve of Eratosthenes
std::vector<bool> sieve(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<bool> is_prime = sieve(n);

    // Extract prime numbers into a list
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int count = 0;
    // Check pairs of neighboring primes
    for (size_t i = 0; i < primes.size() - 1; ++i) {
        int candidate = primes[i] + primes[i + 1] + 1;
        if (candidate <= n && is_prime[candidate]) {
            ++count;
        }
    }

    if (count >= k) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
