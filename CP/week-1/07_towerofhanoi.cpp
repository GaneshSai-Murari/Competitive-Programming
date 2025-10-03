#include <iostream>
using namespace std;

void hanoi(int n, int source, int auxiliary, int destination) {
    if (n == 1) {
        cout << source << " " << destination << "\n";
        return;
    }
    hanoi(n - 1, source, destination, auxiliary);
    cout << source << " " << destination << "\n";
    hanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    cin >> n;

    long long moves = (1LL << n) - 1; 
    cout << moves << "\n";

    hanoi(n, 1, 2, 3); 
}
