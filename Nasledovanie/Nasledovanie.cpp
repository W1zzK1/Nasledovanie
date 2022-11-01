#include <iostream>
#include "Number.h"
#include "Real.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Real a(4);
    cout << a.degree(5) << endl;

    Number n(10, 5);
    cout << n.Additional() << endl;
    cout << n.Division() << endl;

    Real z(-2);
    cout << z.getLn();
     
    return 0;
}