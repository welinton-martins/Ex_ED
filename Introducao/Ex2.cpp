#include <iostream>

using namespace std;

int main() {
    int n1, n2, area=0;
    
    cout << "Informe os lados de um retangulo" << endl;
    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;
        
    area = n1 * n2;

    cout << "Area: " << area;
    
    return 0;
}