#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cout << "Enter a: ";
    cin >> input;

    int maxOddCount = (input % 2 == 0) ? input - 1 : input;

    for (int idx = 0; idx < maxOddCount; idx++) {
        cout << (2 * idx + 1);
        if (idx != maxOddCount - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
