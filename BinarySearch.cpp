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
     for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

void bubbleSortArray(){
    int pass = 1; //step 1
    do{
        for (int j = 0; j <= nPanjang-1-pass; j++){ //step 2
            if (element[j] > element[j + 1])
            {
                int temp;
                temp = element[j];
                element[j] = element[j+1];
                element[j+1] = temp;
            }
        }
        pass = pass + 1; //step 4  
    }while(pass <= nPanjang-1); //step 5

}

void display(){
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1){
            cout << " --> ";
        }
    }
    cout << endl;
}

void binary()
{
    char ulang;
    do
    {
        cout << "=======================" << endl;
        cout << "Pencarian binary search" << endl;
        cout << "=======================" << endl;
        cout << "masukkan elemen yang dicari:" << endl;
        cin >> x;

        int low = 0;
        int higt = nPanjang - 1;

        do
        {
            int mid = (low + higt)/2
            if (element[mid] == x)
            {
                cout << "elemen" << x << "Elemen ditemukan pada indeks" << mid << endl;
                return;
            }
            if (x < element[mid])
            {
                higt = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= higt);
        
        if (low > higt)
        {
            cout << "elemen" << x << "tidak ditemukan dalam array" << endl;
        }
        cout << "ingin mencari lagi? (y/n): " << endl;
        cin >> ulang;
    } while (ulang == 'y' || ulang == Y);
}

int main()
{
    
}