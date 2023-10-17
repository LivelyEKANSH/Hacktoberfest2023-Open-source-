//using recursion
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
  
    return fib(n - 1) + fib(n - 2);
}
 
int main() {
     
    cout << fib(7);
     
    return 0;
}  




//using iterative for loop
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}



//Using dynamic programming- memorization
#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100
 
int lookup[MAX];
 
void _initialize()
{
    int i;
    for (i = 0; i < MAX; i++)
        lookup[i] = NIL;
}
 
int fib(int n)
{
    if (lookup[n] == NIL) {
        if (n <= 1)
            lookup[n] = n;
        else
            lookup[n] = fib(n - 1) + fib(n - 2);
    }
 
    return lookup[n];
}
 
int main()
{
    int n = 40;
    _initialize();
    cout << "Fibonacci number is " << fib(n);
    return 0;
}
