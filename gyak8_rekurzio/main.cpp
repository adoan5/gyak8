#include <QCoreApplication>
#include <iostream>
#include <cmath>
using namespace std;


int factorial(int num) {

    if (num < 2) {
        return 1;
    }

    return num * factorial(num-1);
}

void countDown(int n) {
    if ( n == 0 ) {
        cout << 0 << endl;
        return;
    } else {
        cout << n << endl;
        countDown(n-1);
    }
}

void countUp(int n) {
    if ( n == 0 ) {
        cout << 0 << endl;
        return;
    } else {
        countUp(n-1);
        cout << n << endl;
    }
}

int fibbonacci(int n) {

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibbonacci(n-1) + fibbonacci(n-2);
    }

}

int power(int x, int n) {

    if (n <= 0) {
        return 1;
    } else {
        return x * power(x, n-1);
    }

}

bool even(int n) {

    if (n == 0) {
        return true;
    } else if (abs(n)==1) {
        return false;
    } else {
        return even(abs(n) - 2);
    }

}


void factorialTest(int n) {

    int factor = 1;
    for (int i=1;i<=n; i++) {
        factor *=i;
    }

    cout << "Iterativ faktorialis:" << factor << endl;
    cout << "Rekurziv faktorialis:" << factorial(n) << endl;

}


int main()
{

//    countUp(1000000);

    factorialTest(5);

    int x = 3;
    int n = 8;
    cout << n << ". fibbonacci:" << fibbonacci(n) << endl;
    cout << x << " a " << n << ".-on/en: " << power(x,n) << endl;
    cout << x << (even(x)?" paros":" paratlan") << endl;

}

