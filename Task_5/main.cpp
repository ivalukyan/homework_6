#include <iostream>
#include <array>
using namespace std;

void see_arr(array<float, 5> arr){
    for (int j = 0; j < 5; j++){
        cout << arr[j] << " ";
    }
}

int main(){
    const int N = 5;
    array<float, N> arr;
    for (int i = 0; i < N; i++){
        cout << "Enter element as mas: ";
        cin >> arr[i];
    }
    see_arr(arr);
    return 0;
}
