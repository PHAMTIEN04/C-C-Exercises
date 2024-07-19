#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int mostFrequentElement(int n, const vector<int>& arr) {
    unordered_map<int, int> frequency;
    
    for (int num : arr) {
        frequency[num]++;
    }
    
    int maxCount = 0;
    int mostFrequent = arr[0];  
    
    for (int num : arr) {
        if (frequency[num] > maxCount) {
            maxCount = frequency[num];
            mostFrequent = num;
        }
    }
    
    return mostFrequent;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int result = mostFrequentElement(n, arr);
    cout << result << endl;
    
    return 0;
}
