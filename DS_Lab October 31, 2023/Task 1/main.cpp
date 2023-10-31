#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 elements of the array: ";
    for(int i=0; i<10; i++)
        cin >> arr[i];

    int min_sum = INT_MAX;
    int min_i = 0, min_j = 0;


    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            int sum = arr[i] + arr[j];

            if(abs(sum) < abs(min_sum)) {
                min_sum = sum;
                min_i = i;
                min_j = j;
            }
        }
    }

    cout << "The two elements whose sum is nearest to zero are " << arr[min_i] << " and " << arr[min_j] << endl;

    return 0;
}
