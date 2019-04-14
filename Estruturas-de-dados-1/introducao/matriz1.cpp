#include<stdio.h>
#include<iostream>

using namespace std;

void f2(float (*mat)[2]);
void f(float mat[][2]);

int main(int argc, char const *argv[]){

    float mat[2][2] {
        {2,3},
        {4,5}
    };

    f(mat);
    f2(mat);

    return 0;
}

void f(float mat[][2]){    

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            cout << "\t" << mat[i][j] << "\t";

        }
        
        cout << endl;

    }
}

void f2(float (*mat)[2]){

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            cout << "\t" << mat[i][j] << "\t";

        }
        
        cout << endl;

    }
}