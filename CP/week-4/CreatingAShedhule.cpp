#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    // This line is often used in competitive programming to speed up I/O.
    

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

       
        std::vector<int> rooms(m);
        for (int i = 0; i < m; i++) {
            std::cin >> rooms[i]; // Correctly read single integers into the vector
        }

        // Sort the rooms
        std::sort(rooms.begin(), rooms.end());

        int left = 0;
        int right = m - 1;

        // 'groups' will store pairs of room values.
        // Each element of 'groups' is a pair: {room_value1, room_value2}
        std::vector<std::pair<int, int>> groups(n);

        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) { // If i is odd
                groups[i].first = rooms[right--];
                groups[i].second = rooms[left++];
            } else { // If i is even
                groups[i].first = rooms[left];
                groups[i].second = rooms[right];
            }
        }

        // Printing the assigned groups
        for (int i = 0; i < n; i++) {
            int x = 3;
            while(x--){
                std::cout << groups[i].first << " " << groups[i].second <<" ";
            }
            std::cout<<endl;
            
        }
    }
    return 0;
}