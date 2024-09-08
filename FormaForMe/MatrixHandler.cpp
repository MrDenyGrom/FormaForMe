#include <iostream>
using namespace std;
const int RAZ = 10;
typedef int elem;
typedef elem mas[RAZ];
typedef elem matr[RAZ][RAZ];

class MatrixHandler {
public:
    static void sortMatrix(matr a, int m);
private:
    static void sort_vstav(mas b, int m);
    static void obnulMatrix(matr a, mas b, int i, int m, int newm);
};


void MatrixHandler::sortMatrix(matr a, int m) {

    int newm = m - 1;
    mas b;
    for (int i = 0; i < m / 2; i++) {
        int indexb = 0;
        for (int j = 0; j < newm; j++) {
            b[indexb++] = a[i][j];
        }
        sort_vstav(b, newm);
        obnulMatrix(a, b, i, m, newm);
        newm--;
    }
    newm++;
    for (int i = m / 2; i < m; i++) {
        int indexb = 0;
        for (int j = 0; j < newm; j++) {
            b[indexb++] = a[i][j];
        }
        sort_vstav(b, newm);
        obnulMatrix(a, b, i, m, newm);
        newm++;
    }
}

void MatrixHandler::obnulMatrix(matr a, mas b, int i, int m, int newm)
{
    for (int j = 0; j < m; j++) 
    {
        if (j < newm)
            a[i][j] = b[j];
        else
            a[i][j] = 0;
    }
}

void MatrixHandler::sort_vstav(mas b, int m) 
{
    int i, j, k;
    elem z;
    for (i = m - 2; i >= 0; i--) {
        z = b[i];
        j = m - 1;
        while (j > i && b[j] <= z)
            j--;
        for (k = i + 1; k <= j; k++)
            b[k - 1] = b[k];
        b[j] = z;
    }
}
