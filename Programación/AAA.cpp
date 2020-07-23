#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int A, B, C;
    cout << "ingrese el numero ";
    cin >> C;
    cout << endl;
    for (A = 1; A <= 10; A++) {
        for (B = 1; B <= A; B++) {
            cout << B;


        }
        cout << endl;
    }
    return 0;
}