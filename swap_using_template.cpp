#include <iostream>
using namespace std;

template <class T>
void fswap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout << "Enter value for A: ";
    cin >> a;
    cout << "Enter value for B: ";
    cin >> b;

    cout << "Before Swap A = " << a << " | B = " << b;
    
    fswap(a, b);

    cout << "\nAfter Swap A = " << a << " | B = " << b;
}
