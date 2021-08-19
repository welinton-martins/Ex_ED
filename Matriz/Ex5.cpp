#include <iostream>

using namespace std;

int main() {
    int mat[6][6] = {
	{0,0,0,0,0,0},
	{2,0,0,0,0,0},
	{2,2,0,0,0,0},
    	{2,2,2,0,0,0},
	{2,2,2,2,0,0},
	{2,2,2,2,2,0}
    }, prod_abaix_diag = 1;


    for(int i = 1; i < 6; i++) {
	for(int j = 0; j < 6; j++) {
	     prod_abaix_diag *= mat[j][i];
	}
    }

    printf("Produto abaixo da diagonal: %d", prod_abaix_diag);
}
