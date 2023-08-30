#include <iostream>
#include <climits>

using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    int N;
    cin >> N;

    int Arr[N];
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    int result = maxSubarraySum(Arr, N);
    cout << result << endl;

    return 0;
}
