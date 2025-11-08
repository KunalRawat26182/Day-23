#include <stdio.h>

int main() {
    int numberOfTerms;
    float sumOfSeries = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    for (int termIndex = 1; termIndex <= numberOfTerms; termIndex++) {
        sumOfSeries = sumOfSeries + (float)numerator / denominator;

        numerator = numerator + 2;       // next even numerator
        denominator = denominator + 4;   // next denominator increases by 4
    }

    printf("Approximate sum: %.2f\n", sumOfSeries);

    return 0;
}
