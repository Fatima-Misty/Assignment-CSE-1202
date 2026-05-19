#include <stdio.h>
#include "Misty.h"

int main() {

    printf("Max: %d\n", max(10, 20));
    printf("Min: %d\n", min(10, 20));

    printf("Is Prime (7): %d\n", isPrime(7));
    printf("Is Odd (5): %d\n", isOdd(5));
    printf("Is Even (6): %d\n", isEven(6));

    printf("Digit Sum (1234): %d\n", digitSum(1234));
    printf("Reverse (1234): %d\n", reverseNumber(1234));

    printf("Decimal to Binary (10): ");
    decimalToBinary(10);
    printf("\n");

    printf("Binary to Decimal (1010): %d\n", binaryToDecimal(1010));

    printf("Decimal to Octal (10): ");
    decimalToOctal(10);
    printf("\n");

    printf("Decimal to Hex (255): ");
    decimalToHex(255);
    printf("\n");

    printf("Factorial (5): %d\n", factorial(5));
    printf("GCD (12,18): %d\n", gcd(12, 18));
    printf("LCM (12,18): %d\n", lcm(12, 18));
    printf("Power (2^3): %d\n", power(2, 3));

    printf("Palindrome (121): %d\n", palindrome(121));

    return 0;
}