#include <iostream>
#include <array>
using namespace std;

void see_arr(array<float, 5> arr, const int n){
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
}

float min_el(array<float, 5> arr, const int n){
    float min_i = arr[0];
    for ( int i = 0; i < n; i++){
        if (arr[i] < min_i){
            min_i = arr[i];
        }
    }
    return min_i;
}

int main() {

    const int n = 5;
    array<float, n> arr{};
    for (int i = 0; i < arr.size(); i++){
        cout << "Enter: ";
        cin >> arr[i];
    }
    see_arr(arr, n);
    cout << endl << "MIN ELEMETN: " << min_el(arr, n);
    return 0;
}
