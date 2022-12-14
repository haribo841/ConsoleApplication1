// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum seasons
{
    spring,
    summer,
    autumn = 2137,
    winter
};
int main()
{
    typedef long hint;//If its name begins with two underscores (__), a data type is non-standard.
    hint a = 5;//reference of type cannot be initialized with a value of type hint
    const int b = 10;//qualifiers dropped in binding reference of type string to initializer of type const int
    signed b2;//-2,147,483,648 to 2,147,483,647
    signed int b3;
    __int32 b4;
    unsigned char c;//0 to 255
    unsigned __int8 c2;
    char d;//-128 to 127 by default, 0 to 255 when compiled by using J
    wchar_t d2;//0 to 65,535, ither a wide-character type or multibyte-character type
    __wchar_t d4;
    __int8 d3;
    short int e;//-32,768 to 32,767
    short e2;
    signed short int e3;
    __int16 e4;
    unsigned int f;//0 to 4,294,967,295
    unsigned f2;
    unsigned __int32 f3;
    unsigned long g;//0 to 4,294,967,295
    long h = 21.37;//conversion from 'double' to 'long', possible loss of data
    long int h2;//-2,147,483,648 to 2,147,483,647
    signed long int h3;
    enum i;
    float j;//3.4E +/- 38 (7 digits)
    double k;//1.7E +/- 308 (15 digits)
    long double l;//Same as double
    bool m;//false or true
    seasons n = autumn;//not a season value of type "int" cannot be used to initialize an entity of type "seasons", E0110, E0020, C2332, C2440
    unsigned __int16 o;//0 to 65,535
    unsigned short o2;
    unsigned short int o3;
    __int64 p;//-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long long p2;//none (but equivalent to __int64), -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    signed long long p3;
    unsigned __int64 r;//0 to 18, 446, 744, 073, 709, 551, 615
    unsigned long long r2;//none (but equivalent to unsigned __int64), 0 to 18,446,744,073,709,551,615
    signed char q;//-128 to 127
    long & h_ref = h;//reference, new name for an existing object
    const int primes[]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};//incomplete type is not allowed, an empty initializer is invalid for an array with unspecified bound, cannot allocate an array of constant size 0, 'integers': unknown size
    char gosha[] = { "Karr" };
    /*std::*/cout << "Hello World!\n";
    a += b;
    cout << a /* + b */ << "\n";
    a -= b;
    cout << a /* - b */ << "\n";
    a *= b;
    cout << a /* * b */ << "\n";
    a /= b;
    cout << a /* / b */ << "\n";
    a %= b;
    cout << a /* % b */ << "\n";
    a++;//a+=1
    cout << a /* = a + 1 */ << "\n";
    cout << ++a << "\n";
    a--;//a-=1
    cout << a /* = a - 1 */ << "\n";
    cout << --a << "\n";
    cin >> a;
    cout << "Wartosc a to: " << a << "\n";
    cout << "Wartosc n to: " << n << "\n";
    cout << "Wartosc h to: " << h << "\n";
    cout << "Wartosc h_ref to: " << h_ref << "\n";
    cout << "Rozmiar a to: " << sizeof(a) << "\n";
    cout << "Rozmiar n to: " << sizeof(n) << "\n";
    cout << "Rozmiar h to: " << sizeof(h) << "\n";
    cout << "Rozmiar h_ref to: " << sizeof(h_ref) << "\n";
    cout << "Adres a to: " << &a << "\n";
    cout << "Adres n to: " << &n << "\n";
    cout << "Adres h to: " << &h << "\n";
    cout << "Adres h_ref to: " << &h_ref << "\n";
    cout << primes << "\n";
    cout << gosha << "\n";
    int* w;//value of type "int **" cannot be assigned to an entity of type "int *"
    int z = 10;
    int*x=&z;
    cout << *x << "\n";//Using uninitialized memory 'w'
    *x = 20;
    cout << z << "\n";
    char* y = &gosha[0];
    y=y+z;
    cout << y << "\n";
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
