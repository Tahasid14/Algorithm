#include <bits/stdc++.h>
using namespace std;

int knapsack(int capacity, int weights[], int values[], int size) {
    int dynamic[size+1][capacity+1];

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0){

                dynamic[i][j] = 0;
            }
            else if (weights[i-1] <= j){
                dynamic[i][j] = max(values[i-1] + dynamic[i-1][j - weights[i-1]], dynamic[i-1][j]);
            }
            else{
                dynamic[i][j] = dynamic[i-1][j];
            }
        }
    }

    return dynamic[size][capacity];
}

int main() {
    cout << "Size of arr: ";
    int size;
    cin >> size;

    int weights[size];
    int values[size];

    cout << "Weights: ";
    for (int i = 0; i < size; i++) {
        cin >> weights[i];
    }

    cout << "Values: ";
    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }

    cout << "Knapsack Capacity: ";
    int capacity;
    cin >> capacity;

    int result = knapsack(capacity, weights, values, size);

    cout << "Maximum value in knapsack = " << result << endl;

    return 0;
}
