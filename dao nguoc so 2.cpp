#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout << " Nhap vao so co 3 chu so N: ";
    cin >> N;
    int hangtram = N/100;
    int hangchuc = ( N - hangtram*100 )/10;
    int hangdv = N - hangtram*100 - hangchuc*10;
    cout << "So dao nguoc cua N la: " << hangdv << hangchuc << hangtram;
    return 0;
}
