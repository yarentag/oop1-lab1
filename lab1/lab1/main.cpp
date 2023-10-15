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
// Function to calculate the average of numbers
double calculateAverage(const int numbers[], int count) {
    int sum = calculateSum(numbers, count);
    return static_cast<double>(sum) / count;
}
// Function to find the smallest number
int findSmallest(const int numbers[], int count) {
    int smallest = numbers[0];
    for (int i = 1; i < count; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}
