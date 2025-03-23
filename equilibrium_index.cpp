#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    int totalSum = 0, leftSum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            cout << i << endl;
            return 0;
        }
       leftSum += arr[i];
    }
    cout << -1 << endl;
    return 0;
}