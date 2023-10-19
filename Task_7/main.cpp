#include <iostream>
#include <array>
using namespace std;

void see_arr(array<int, 5> arr){
    for (int j = 0; j < arr.size(); j++){
        cout  << arr[j] << " ";
    }
}

void add_el(array<int, 5> &arr){
    for (int i = 0; i < arr.size(); i++){
        cout << "Enter el: ";
        cin >> arr[i];
    }
}

void rav(array<int, 5> &arr, array<int, 5> &arr1){
    arr1 = arr;
}

int main() {
    const int n = 5;
    array<int, n> arr{};
    array<int, n> arr1{};
    add_el(arr);
    see_arr(arr);
    rav(arr, arr1);
    see_arr(arr1);
    return 0;
}
