#include <iostream>
#include <fstream>

using namespace std;

// Function to calculate the sum of numbers
int calculateSum(const int numbers[], int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += numbers[i];
    }
    return sum;
}
// Function to calculate the product of numbers
int calculateProduct(const int numbers[], int count) {
    int product = 1;
    for (int i = 0; i < count; ++i) {
        product *= numbers[i];
    }
    return product;
}
