#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        cout << "Value: " << arr[i]
             << " | Address: " << &arr[i] << endl;
    }

    return 0;
}
