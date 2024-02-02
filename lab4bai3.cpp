#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    do
    {
        cout << "Nhap so nguyen duong a: " ;
        cin >> a;
        cout << "Nhap so nguyen duong b: " ;
        cin >> b;
    }
    while (a<=0 || b<=0);
        //1. In ra uoc chung
        cout << "Uoc chung cua a va b la: " << endl;
        if (a<b)
        {
            for (int i=1; i<=b; i++)
            {
                if (a%i==0 && b%i==0)
                cout << i << " " ;
            }
        }
        else
        {
            for (int i=1; i<=a; i++)
            {
                if (a%i==0 && b%i==0)
                cout << i << " " ;
            }
        }
    int tich=a*b;
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    cout << "Uoc chung lon nhat la: " << a << endl;
    cout << "Boi chung nho nhat la: " << tich/a << endl;
    if (a==1)
    cout << "a va b la 2 so nguyen to cung nhau";
    else
    cout << "a va b khong phai la 2 so nguyen to cung nhau";
}
