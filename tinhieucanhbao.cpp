#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k >> b;

    vector<int> thietBiHong(b);
    unordered_set<int> tapThietBiHong;
    for (int i = 0; i < b; ++i) {
        cin >> thietBiHong[i];
        tapThietBiHong.insert(thietBiHong[i]);
    }

    int soSuaChuaToiThieu = k;  

    int soSuaChuaHienTai = 0;
    for (int i = 1; i <= k; ++i) {
        if (tapThietBiHong.find(i) != tapThietBiHong.end()) {
            ++soSuaChuaHienTai;
        }
    }
    soSuaChuaToiThieu = min(soSuaChuaToiThieu, soSuaChuaHienTai);

    for (int i = k + 1; i <= n; ++i) {
        if (tapThietBiHong.find(i - k) != tapThietBiHong.end()) {
            --soSuaChuaHienTai;
        }
        if (tapThietBiHong.find(i) != tapThietBiHong.end()) {
            ++soSuaChuaHienTai;
        }
        soSuaChuaToiThieu = min(soSuaChuaToiThieu, soSuaChuaHienTai);
    }

    cout << soSuaChuaToiThieu << endl;

    return 0;
}

