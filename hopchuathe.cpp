#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    long long N, Q;
    cin >> N >> Q;

    vector<multiset<long long>> A(N);
    unordered_map<long long, set<long long>> B; 

    while (Q--) {
        long long C;
        cin >> C;

        if (C == 1) {
            long long Z, Y;
            cin >> Z >> Y;
            A[Y-1].insert(Z); 
            B[Z].insert(Y);
        } 
        else if (C == 2) {
            long long Y;
            cin >> Y;
            if (A[Y-1].empty()) {
                cout << -1 << endl;
            } else {
                for (auto value : A[Y-1]) {
                    cout << value << " ";
                }
                cout << endl;
            }
        } 
        else if (C == 3) {
            long long Z;
            cin >> Z;
            if (B[Z].empty()) {
                cout << -1 << endl;
            } else {
                for (auto index : B[Z]) {
                    cout << index << " ";
                }
                cout << endl;
            }
        } 
        else {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}
