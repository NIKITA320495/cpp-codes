#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int primorial(int n) {
    int result = 1;
    for (int i = 2; n > 0; i++) {
        if (isPrime(i)) {
            result *= i;
            n--;
        }
    }
    return result;
}
