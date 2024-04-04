#include <iostream>
using namespace std;
/*
reference Variable explaination
int main()
{
    int n = 10;
    int &k = n; // k is reference variable referring to n
    int &c = n; // c is reference variable referring to n
    // k and c will access n variable value only
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    k++;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    c++;
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    n++;
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    // cannot refer to  constant or literal
    // int &a = 60;
    // cout << t << endl;

}*/

// cal by value
void incrementBy1(int a) // a is local to incrementBy1(), any changes of a variable in this function will not effect in main() a variable(different memory is getting access)
{
    a = a + 1;
    // cout << "value of a in incrementBy1() is: -> " << a << endl;
}
void incrementBy1UsingRef(int &a) // a is ref variable of main() a variable, so any changes in ref a will effect the main() a value(same memory is getting access)
{
    a = a + 1;
    // cout << "value of a in incrementBy1UsingRef() is: ->" << a << endl;
}

int main()
{
    int a = 10; // a is local to main()

    cout << "call by value " << endl;

    cout << "Before function call, a value  in main is: ->" << a << endl;
    incrementBy1(a);
    cout << "After function call, a value  in main is: ->" << a << endl;

    cout << "call by ref " << endl;

    cout << "Before function call, a value  in main is: ->" << a << endl;
    incrementBy1UsingRef(a);
    cout << "After function call, a value  in main is: ->" << a << endl;
}