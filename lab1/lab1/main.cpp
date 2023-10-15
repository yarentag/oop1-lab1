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


int main() {
    ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        // Use cout for error messages
        cout << "Error opening input file!" << endl;
        return 1;
    }

    int count;
    inputFile >> count;

    int* numbers = new int[count];

    for (int i = 0; i < count; ++i) {
        inputFile >> numbers[i];
    }

    inputFile.close();

    // Calculate and display results
    cout << "Sum: " << calculateSum(numbers, count) << endl;
    cout << "Product: " << calculateProduct(numbers, count) << endl;
    cout << "Average: " << calculateAverage(numbers, count) << endl;
    cout << "Smallest: " << findSmallest(numbers, count) << endl;

    // Don't forget to release memory allocated with 'new'
    delete[] numbers;

    return 0;
}