#include <bits/stdc++.h>
using namespace std;

int main() {
    int count;
    cout << "Enter a: ";
    cin >> count;

    for (int index = 0; index < count; index++) {
        cout << (2 * index + 1);
        if (index != count - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
