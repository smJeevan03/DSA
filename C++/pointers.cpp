
#include<iostream>
#include <cassert>
using namespace std;


/*

pointers - A pointer stores an address, A reference is a second name for an existing object

Declaration
int*  p;     // p is a pointer to int   (uninitialized — dangerous)
int * p;     // identical
int  *p;     // identical

The * belongs to the declarator, not the type. This is why:

int* a, b;   // a is int*, b is int   ← classic bug
int *a, *b;  // both are int*          ← correct if you want both

Read declarations right-to-left — this is the single most useful parsing rule in C++:

int* p;          // p is a pointer to int
int** pp;        // pp is a pointer to (pointer to int)
int* const p;    // p is a const pointer to int
const int* p;    // p is a pointer to const int
int (*fp)(int);  // fp is a pointer to a function taking int, returning int
int* arr[10];    // arr is an array of 10 pointers to int
int (*arr)[10];  // arr is a pointer to an array of 10 ints


2.2 Always initialize
An uninitialized pointer holds garbage — whatever bits happened to be in that stack slot. 
Dereferencing it is undefined behavior (UB) — the program might crash, might "work," might corrupt memory silently. 
There is no way to test whether a pointer is valid.
int* p;          // holds garbage
int* q = nullptr; // holds address 0 — defined "points to nothing"



// int main(){
//     int x=5;
//     int *p=&x;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;
//     cout<<x<<endl;
//     cout<<&x<<endl;

//     cout << ((p == &x) ? "true" : "false");
// }

// int main(){
//     int x=10;
//     int *p=&x;
//     int **pp=&p;
//     cout<<**pp<<endl;
//     **pp=17;
//     cout<<**pp<<endl;
// }



References  - jsut another name for the variable

int x=5;
int &y=x;


// int main(){
//     int x=1;
//     int &y=x;
//     y=10;
//     cout<<y<<endl;
//     cout<<x<<endl;
//     cout<<&y<<endl;
// }

A reference is not an object — it has no address, no storage.
It's a binding, an alias, a compile-time notion. 





Pointer arithmetic



int main(){
    int x=10;
    int* p=&x;
    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)<<endl;
}



int main(){

    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    
}



EX - 1

int main(){
        
    int x = 5, y = 10;
    int* p = &x;
    const int* cp = &x;
    int* const pc = &x;
    cout<<cp<<endl;
    cout<<pc<<endl;
    // cp = &y;    // (a)
    // *cp = 7;    // (b)
    // pc = &y;    // (c)
    // *pc = 7;    // (d)
    // const int* cp;   // pointer to const int   -> *cp = ... is illegal
    // int* const pc;   // const pointer to int   -> pc = ...  is illegal

}

EX - 2  

int main(){
    int arr[5] = {1,2,3,4,5};
    int* p = arr + 2; // p points to the 1st element of arr (if int* p = arr)
    cout<<*p<<endl;
    std::cout << *(p - 1) << '\n'; // p - 1 points to arr[1], value 2.
    std::cout << p[2] << '\n'; // p[2] means *(p + 2) = arr[4], value 5.
    std::cout << (arr + 5) - arr << '\n';
    std::cout << *(arr + 6) << '\n';
}


*/


int main(){
    char ch[] = "abcd";
    char *p = "abcd";
    cout<<p<<endl;
}

