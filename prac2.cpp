#include<iostream>
using namespace std;

int main() {
    int a[10], ans[10], n, j, i, c;

    // Read Array Size
    cin >> n;

    // Ensure that n does not exceed the array size limit
    if (n > 10) {
        cout << "Array size exceeds the limit of 10." << endl;
        return 1;
    }

    // Read Array Elements
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    i = 0; 
    c = 0; 
    j = 0;

    // Process the array to move all non-zero elements to the front
    while(i < n) {
        if(a[i] == 0) {
            c++;  // Count the number of zeros
        } else {
            ans[j] = a[i];  // Store non-zero elements in ans array
            j++;
        }
        i++;
    }

    // Append zeros at the end of the ans array
    for(i = 0; i < c; i++) {
        ans[j] = 0;
        j++;
    }

    // Display the answer
    for(i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
