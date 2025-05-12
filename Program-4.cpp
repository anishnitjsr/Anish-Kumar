#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> elements;
    int totalElements;
    cout << "Enter the number of elements: ";
    cin >> totalElements;
    cout << "Enter the elements: ";
    for (int idx = 0; idx < totalElements; idx++) {
        int value;
        cin >> value;
        elements.push_back(value);
    }

    map<int, int> divisorCount;

    for (int div = 1; div <= 9; div++) divisorCount[div] = 0;

    for (int value : elements) {
        for (int div = 1; div <= 9; div++) {
            if (value % div == 0) divisorCount[div]++;
        }
    }

    for (int div = 1; div <= 9; div++) {
        cout << div << ": " << divisorCount[div];
        if (div != 9) cout << ", ";
    }

    cout << endl;
    return 0;
}
