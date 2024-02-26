#include <iostream>
using namespace std;

int main()
{
    //begin
    // numeric nJejari
    // display 'Masukan Jejari= '
    // accept nJejari
    // compute nLuas = 3.14 * r * r
    // display 'nLuasnya= ' = nLuas
    //end

    double nJejari, nLuas;
    cout << "Masukan Jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << "Luasnya = " << nLuas << endl;

    system("pause");
}

