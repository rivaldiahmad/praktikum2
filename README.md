# praktikum2


##latihan1.cpp Menghitung bilangan terbesar dari 3 bilangan 

**Alur algoritma** 
1. Mendeklarasikan variable int A, B, C sebagai variable input
2. Membaca input dari keyboard cin >> A >> B >> c
3. Membandingkan nilai variabel **A** dan **B** 
4. Kondisi **True** maka bandingan nilai variable **A** dengan **C**
5. Kondisi **False** maka bandingkan nilai variable **B** dengan **C** 

**Flowchart Program**
https://github.com/rivaldiahmad/praktikum2/blob/master/latihan1/flowchart1.jpg

**Pict Program**
https://github.com/rivaldiahmad/praktikum2/blob/master/latihan1/Pict1.png

**Code Program Lengkap:**
```C++
#include<iostream>
using namespace std;

int main(){

    int A,B,C,D;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;
    cout << "masukan bilangan 3: ";
    cin >> C;

    if (A > B){
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
}   else {
        if (B > C)
            cout << "bilangan terbesar adalah: " << B << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;

}
}
```

### Latihan2.cpp : Menghitung bilangan terbesar dari 4 bilangan

**Alur algoitma**
1. Mendeklarasikan variable int A, B, C, D sebagai variable input
2. Membaca input Dari keyboard cin >> A >> B >> C >> D
3. Membandingkan nilai variable **A** dengan **B**
4. Kondisi **True** maka bandingkan nilai variable **A** dengan **C**
5. Kondisi **True** maka bandingkan nilai variable **C** dengan **D**
6. Kondisi **False** maka bandingkan nilai variable **B** dengan **C**

**Flowchart Program**
https://github.com/rivaldiahmad/praktikum2/blob/master/latihan2/flowchart2.jpg

**Pict Program**
https://github.com/rivaldiahmad/praktikum2/blob/master/latihan2/Pict2.png

**Code program lengkap**
```C++
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
```