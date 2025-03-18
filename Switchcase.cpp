#include <iostream>
using namespace std;

double hitungipk(int sks, double total)
{
    return total / sks;
}

string predikat (double ipk)
{
    if (ipk < 10){
        return "memuaskan";
    }
    else{
        return"cumlaude";
    }
}

int main(){
    char pilihan;
   
    do
    {
cout << "pilih menu" << endl;
cout << "1. cek nilai ipk" << endl;
cout << "2. ceek predikat kelulusan" << endl;
cout << "3. keluar";

cout << "masukan pilihan (1/2/3) : ";
cin >> pilihan;

switch (pilihan)
    {
        case '1':
        int sks;
        double total;
        cout << "masukan total nilai :";
        cin >> total;
        cout << "masukan jumlah sks :";
        cin >> sks;
        cout << "nilai ipk = " << hitungipk(total, sks) << endl;
        break;
    }
}while (pilihan != 3); 
}