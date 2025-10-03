#include <iostream>
#include <vector>


using namespace std;

void divide( vector<long long int>& arr, int index, long long int sum1, long long int sum2, long long int& min_diff) {
    if (index == arr.size()) {
        min_diff = min(min_diff, abs(sum1 - sum2));
        return;
    }
    divide(arr, index + 1, sum1 + arr[index], sum2, min_diff);
    divide(arr, index + 1, sum1, sum2 + arr[index], min_diff);
}

int main() {
    long long int n,sum=0;
    cin >> n;
    vector<long long int> arr(n);

    for (auto& x : arr) {
        cin >> x;
        sum += x;
    }

    long long int min_diff = sum ;
    divide(arr, 0, 0, 0, min_diff);

    cout << min_diff << endl;
    return 0;
}
