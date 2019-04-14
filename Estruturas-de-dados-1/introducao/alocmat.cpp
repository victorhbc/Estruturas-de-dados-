#include<stdio.h>
#include<iostream>
#define LIN 2
#define COL 3

using namespace std;


int main(int argc, char const *argv[]){

    int **mat;
    int x = 1;

    mat = (int**)malloc(LIN * sizeof(int));
    
    for(int i = 0; i < LIN; i++)
    {
        mat[i] = (int*)malloc(COL * sizeof(int));
    }
    

    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        { 
            x = x * 2;
            mat[i][j] = i + x;
        }
        
    }

    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        { 
            
            cout << "\t" << mat[i][j] << "\t"; 
        }
        cout << endl;
        
    }

    for(int i = 0; i < LIN; i++)
    {
        free(mat[i]);
    }

    free(mat);

    return 0;
}
