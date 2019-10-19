#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int counter;
int main(int argc, char* argv[])

{
    string kata;
    string jawaban;
    char ulang;
    do{
    string kata;
    cout << "masukan kata: ";
    cin >> kata;
    cout<< "jumlah kata = ";
    cout<< kata.size()<<endl;
    jawaban=kata;
    cout << "jawaban dari tebakan ini adalah : " << jawaban << endl;
    for (int i=0;i<=kata.size();i++){//
        swap(kata[rand()%kata.size()], kata[rand()%kata.size()]);

    }

    cout << "tebak dari hasil acak kata ini : " << kata << endl << endl;
            string jawab;
            int nyawa=3;
                do{
                    cout << "Masukkan tebakan anda :";
                    cin >> jawab;
                    if(jawab==jawaban){
                        cout << "Tebakan anda benar !!" << endl;
                        break;
                    }else if(jawab!=jawaban){
                            cout << "Tebakan anda salah !!, nyawa anda :" << nyawa-1 << endl <<endl;
                            nyawa--;
                        }
                }while(nyawa!=0);
                cout << "Apakah Mau ulangi game (y/t) ?";
                cin >>ulang;
    }

    while(ulang=='y');
    return 0;
}
