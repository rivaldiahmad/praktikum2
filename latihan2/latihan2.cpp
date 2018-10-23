#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout << "Masukan bilangan 1: ";
    cin >> a;
    cout << "Masukan bilangan 2: ";
    cin >> b;
    cout << "Masukan bilangan 3: ";
    cin >> c;
    cout << "Masukan bilangan 4: ";
    cin >> d;

    if (a>b && a>c && a>d)
        cout << "Bilangan terbesar adalah: " << a << endl;
    else if (b>a && b>c && b>d)
        cout << "Bilangan terbesar adalah: " << b << endl;
    else if (c>a && c>b && c>d)
        cout << "Bilangan terbesar adalah: " << c << endl;
    else
        cout << "Bilangan terbesar adalah: " << d << endl;
}
