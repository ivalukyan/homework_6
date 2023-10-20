#include <iostream>
#include <array>
using namespace std;


void add_arr(array<array<int, 2>, 2> &matrix){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> matrix[i][j];
        }
    }
}

void see_arr(const array<array<int, 2>, 2> &matrix){
    for (int k = 0; k < 2; k++){
        for (int g = 0; g < 2; g++){
            cout << matrix[k][g] << " ";
        }
        cout << endl;
    }
}

int main(){
    
    array<array<int, 2>, 2> matrix;
    add_arr(matrix);
    see_arr(matrix);
}