#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, x1=0, x2=0;
    cout << "Informe os tres coeficientes de uma equacao do segundo grau: ";
    cin >> a >> b >> c;

    d = b^2-(4*a*c);
    cout << d;
    cout << x1 << "\n" << x2;

    return 0;
}