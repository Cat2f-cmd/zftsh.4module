#include<stdio.h>

double opr(double m[3][3]){

    return m[0][0] * m[1][1] * m[2][2] +
    m[0][1] * m[1][2] * m[2][0] +
    m[0][2] * m[1][0] * m[2][1] -
    m[0][2] * m[1][1] * m[2][0] -
    m[0][1] * m[1][0] * m[2][2] - 
    m[0][0] * m[1][2] * m[2][1];
}

int main(){

    double matrix[3][3];

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            scanf("%lf", &matrix[i][j]);
        }
    }

    printf("%lf", opr(matrix));
}