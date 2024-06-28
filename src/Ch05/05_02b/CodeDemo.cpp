// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

//Takes argument by value
int square(int x){
    x = x * x;
    return x;
}

//takes aruuments by address
void swap (int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//takes aruguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
