#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int num[8] = {8, 7, 6, 5, 4, 3, 2, 1}, temp = 0;//, i,aux = 0;
    // cout << "Informe 8 numeros\n";
    // for (i=0; i < 8; i++) {
    //     cout << (i+1) << ": ";
    //     cin >> n[i];
    // }

    // for (i=0; i < 8; i++) {
    //     for (int j=1; j < 8; j++) {
    //         if (n[i] < n[j]) {
    //             aux = n[i];
    //             n[i] = n[j];
    //             n[8] = aux;
    //         }
    //     }
    //     cout << n[i];
    // }

    
    // for (int j = 0; j < 8; j++) {
    //     for (int i = 1; i <= 8; i++) {
    //         if (num[j] > num[i]) {
    //             temp = num[j];
    //             num[j] = num[i];
    //         }
    //     }
    //     num[j] = num[-1];
    //     num[-1] = temp;
    // }
    
    for (int i = 0; i < 8; i++) {
        cout << num[i];
        //printf("%d, %d",num[0], num[1]);
    }
    
    return 0;
}