#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 10; // Size of each input array
    int array1[10], array2[10], mergedArray[2 * SIZE];

    // Input elements of the first array
	// It is used for the first set of 10 elements
    // The maximum size of the first array is 10 elements
    cout << "Enter 10 elements for the first array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> array1[i];
    }

    // Input elements for the second array
    // It is uded for the second set of 10 elements
    // The maximum size of the second array is 10 elements
    cout << "Enter 10 elements for the second array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> array2[i];
    }

    // Merge the two arrays into mergedArray
    // It is used to merged the two sets of Arrays
    for (int i = 0; i < SIZE; ++i) {
        mergedArray[i] = array1[i];
        mergedArray[i + SIZE] = array2[i];
    }

    // it is used to merged the two sets of arrays and it is used so that the elements can be in descending order
    sort(mergedArray, mergedArray + 2 * SIZE, greater<int>());

    // It is used for the output of the merged and descending arrays
    cout << "Merged array in descending order:" << endl;
    for (int i = 0; i < 2 * SIZE; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}