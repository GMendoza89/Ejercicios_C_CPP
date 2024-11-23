/// Ing. Gustavo David Mendoza Pinto
/// Cálculo de una matriz Nilpotente


#include <stdio.h>
#include "matlib/matlib.h"

int main(int argv, char *argc[]){

    matrix *matA;
    char *inputFile; 
    if(argv == 2)
        inputFile = argc[1];
    else{
        inputFile = "matrix.txt";
    }
    matA = LoadMatrix(inputFile);
    printMatrix(matA);
    NilMatrix(matA);

    DelMatrix(matA);
    return 0;
}
