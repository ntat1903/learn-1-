#include <iostream>
using namespace std;
int main()
{
    char Ky_tu;
    cout<<"Chu cai can kiem tra la: ";
    cin>>Ky_tu;
    if((Ky_tu>='A')&&(Ky_tu<='Z'))
    {
        int(Ket_qua)=int(Ky_tu)+32;
        cout<<"Chu cai thuong tuong ung voi "<<Ky_tu<<" la "<<(char)Ket_qua;
    }
    else if ((Ky_tu>='a')&&(Ky_tu<='z'))
    {
        int (Ket_qua)=int(Ky_tu)-32;
        cout<<"Chu cai hoa tuong ung voi "<<Ky_tu<<" la "<<(char)Ket_qua;
    }
    else cout<<Ky_tu<<" khong la chu cai";
}

