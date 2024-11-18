// Bai11_DienTichChuViHinhTron.cpp :
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh chu vi dien tich hinh tron";
    
    double pi = 3.14, chuvi, dientich, bankinh;

    cout << "Nhap bankinh:"; cin >> bankinh;
   

    chuvi = 2 * pi * bankinh;
    dientich = pi * bankinh * bankinh;

    cout << "Chu vi: " << chuvi << endl;
    cout << "Dien tich: " << dientich << endl;
    return 0;
}

