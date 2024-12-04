#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> findSubsets(vector<int>& arr) {
    // Sort the array to handle duplicates
    sort(arr.begin(), arr.end());
    
    // Total number of subsets: 2^n
    int n = arr.size();
    int totalSubsets = 1 << n; // 2^n
    set<vector<int>> uniqueSubsets; // To store unique subsets
    
    // Generate subsets using bit masking
    for (int mask = 0; mask < totalSubsets; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            // Check if the i-th bit in the mask is set
            if (mask & (1 << i)) {
                subset.push_back(arr[i]);
            }
        }
        uniqueSubsets.insert(subset); // Add subset to the set
    }
    
    // Convert set to vector for output
    vector<vector<int>> result(uniqueSubsets.begin(), uniqueSubsets.end());
    return result;
}

int main() {
    // Input array
    vector<int> arr = {1, 2, 2};

    // Find subsets
    vector<vector<int>> subsets = findSubsets(arr);

    // Output the subsets
    cout << "Subsets:" << endl;
    for (const auto& subset : subsets) {
        cout << "(";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i != subset.size() - 1) cout << ",";
        }
        cout << ")" << endl;
    }

    return 0;
}