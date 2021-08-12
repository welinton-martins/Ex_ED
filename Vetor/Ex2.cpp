#include <iostream>

using namespace std;

int main() {
    int vetor[100], n = 0, i = 0, qnt = 0, ran = 0;
    vetor[0] = 0;
    vetor[100] = 0;
    while (i<100) {
        //cin >> n;
        ran = rand() % 100;
        vetor[i] = ran;//n;
        ++i;
    }

   for (i=0;i<100;i++) {
   	cout << vetor[i];
   } 
    for (i = 0; i < 100; i++) {
        if(vetor[i] == vetor[100]) {
            qnt++;
        }
    }
    
    printf("%d Numeros iguais ao ultimo numero.", qnt);
    return 0;
}
