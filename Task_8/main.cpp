#include <iostream>
#include <array>
using namespace std;

void see_arr(array<int, 5> arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sum(array<int, 5> &arr){
    for (int j = 1; j < arr.size(); j++){
        arr[j] = arr[j] + arr[j - 1];
    }
}

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    array<int, 5> arr{};
    arr.fill(n);
    see_arr(arr);
    sum(arr);
    see_arr(arr);
    return 0;
}
