#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b;
        cin >> b;
        int ans = (b/2) * ((b/2)-1) / 2;
        cout << ans << endl;
    }
    return 0;
}