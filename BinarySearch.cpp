#include <iostream>
using namespace std;

int element[10]; //membuat array
int nPanjang; //membuat input panjang data
int x; //nilai yang dicari

void input()
{ //prosedur input
    while (true){
        cout << "Masukkan banyaknya elemen pada array (maksimal 10 data): ";
        cin >> nPanjang;
        if (nPanjang <= 10){
            break;
        }
        else{
            cout << "\nArray maksimal 10 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array";
    cout << "=====================" << endl;
     for (int i=0; i<nPanjang; i++)
    {
        cout << "Data ke-" << (i+1) << " = ";
        cin >> element[i];
    }
}

