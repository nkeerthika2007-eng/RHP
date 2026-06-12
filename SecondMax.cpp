#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int firstMax, secondMax;

    if(arr[0] > arr[1]) {
        firstMax = arr[0];
        secondMax = arr[1];
    } else {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << secondMax;

    return 0;
}