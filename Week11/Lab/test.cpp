
/* #include <iostream>
using namespace std;

void func1()
{
    cout << "Able was I\n";
}
void func2()
{
    cout << "I saw Elba\n";
}

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if (input < 10)
    {
        func1();
        func2();
    }
    else
    {
        func2();
        func1();
    }
    return 0; 
} */

/* #include <iostream>
using namespace std;

void showDouble(int); // Function prototype

int main()
{
    int num;
    for (num = 0; num < 10; num++)
        showDouble(num);
    return 0;
}

// Definition of function showDouble.
void showDouble(int value)
{
    cout << value << "\t" << (value * 2) << endl;
} */

/* #include <iostream>
using namespace std;

void func1(double, int); // Function prototype

int main()
{
    int x = 0;
    double y = 1.5;

    cout << x << " " << y << endl;
    func1(y, x);
    cout << x << " " << y << endl;
    return 0;
}

void func1(double a, int b)
{
    cout << a << " " << b << endl;
    a = 0.0;
    b = 10;
    cout << a << " " << b << endl;
} */



/* #include <iostream>
using namespace std;

void myFunc(); // Function prototype

int main()
{
    int var = 100;

    cout << var << endl;
    myFunc();
    cout << var << endl;
    return 0;
}

// Definition of function myFunc
void myFunc()
{
    int var = 50;
    cout << var << endl; 
} */

#include <iostream>
using namespace std;

void showVar(); // Function prototype

int main()
{
    for (int count = 0; count < 10; count++)
        showVar();
    return 0;
}

// Definition of function showVar
void showVar()
{
    static int var = 10;
    cout << var << endl;
    var++;
}