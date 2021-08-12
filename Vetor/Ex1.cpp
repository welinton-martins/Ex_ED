#include <iostream>

using namespace std;

int main() {
    int n=0, i=0;
    cout << "Digite numeros inteiros maiores que zero";
    while (n>=0) {
        cout << "\nN" << (i+1) << ": ";
        cin >> n;
        i++;
    }
    return 0;
}