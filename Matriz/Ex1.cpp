#include <iostream>

using namespace std;

int main() {
    int mat[4][4] = {
	    {1,2,3,4},
	    {1,1,3,4},
	    {1,2,1,4},
	    {1,2,3,1}
    }, som_diag = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            mat[i][j] = 1;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if (i == j) {
                som_diag += mat[i][j];
            }
        }
    }

    printf("Soma da diagonal: %d", som_diag);
}
