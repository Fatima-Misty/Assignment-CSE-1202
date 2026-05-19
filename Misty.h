#ifndef MISTY_H
#define MISTY_H

#include <stdio.h>

// 🔹 Basic Functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int isOdd(int n) {
    return n % 2 != 0;
}

int isEven(int n) {
    return n % 2 == 0;
}

// 🔹 Prime Check
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 🔹 Digit Sum
int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 🔹 Reverse Number
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

// 🔹 Number Conversion Functions
void decimalToBinary(int n) {
    int bin[32], i = 0;
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}

int binaryToDecimal(int n) {
    int dec = 0, base = 1;
    while (n > 0) {
        int rem = n % 10;
        dec += rem * base;
        base *= 2;
        n /= 10;
    }
    return dec;
}

void decimalToOctal(int n) {
    int oct[32], i = 0;
    while (n > 0) {
        oct[i++] = n % 8;
        n /= 8;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", oct[j]);
}

void decimalToHex(int n) {
    char hex[32];
    int i = 0, rem;
    while (n > 0) {
        rem = n % 16;
        if (rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A';
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
}

// 🔹 Additional Functions
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int palindrome(int n) {
    return n == reverseNumber(n);
}

#endif