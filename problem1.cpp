#include <iostream>

long sum_upto(long n) {
    return (n * (n + 1)) / 2;
}

long sum_of_multiples(long limit) {
    long sum = 0;
    sum = 3*sum_upto((limit-1)/3) + 5*sum_upto((limit-1)/5) - 15*sum_upto((limit-1)/15);
    return sum;
}

int main() {
    long limit = 0;

    std::cin >> limit;
    std::cout << sum_of_multiples(limit);

    return 0;
}
