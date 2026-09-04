#include <iostream>
using namespace std;

int main () {
    int x;
    cin >> x;
    cout << (x % 100) % 10 << endl;
    cout << x / 100 << endl;
    cout << (x / 10) % 10;   
    return 0;
}
