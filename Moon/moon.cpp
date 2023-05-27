/*
Nama Program    : Moon 
Nama            : Indah Sutriyati
NPM             : 140810200040
Tanggal Buat    : 14 Oktober 2020
Deskripsi       : Membuat pattern bulan 
*/

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void SetColor(unsigned short color) {
  HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsoleOutput,color);
}

void white(int n){
    for(int i=0; i<n; i++){
        SetColor(119);
        cout << "  ";
    }
}

void grey(int n){
    for(int i=0; i<n; i++){
        SetColor(255);
        cout << "  ";
    }
}

void dark_grey(int n){
    for(int i=0; i<n; i++){
        SetColor(136);
        cout << "  ";
    }
}

void black(int n){
    for(int i=0; i<n; i++){
        SetColor(256);
        cout << "  ";
    }
}

int main(){
    cout << "========================== MOON ==========================" << endl;
    cout << "+|+|+|+|+| Oleh: Indah Sutriyati (140810200040) |+|+|+|+|+" << endl;
    cout << "==========================================================" << endl;

    //1
    white(29);
    cout << endl;
    //2
    white(11);black(7);white(11);
    cout << endl;
    //3
    white(9);black(2);grey(2);white(4);grey(1);black(2);white(9);
    cout << endl;
    //4
    white(7);black(3);dark_grey(2);grey(4);white(3);grey(1);black(2);white(7);
    cout << endl;
    //5
    white(6);black(2);dark_grey(8);grey(2);white(3);grey(1);black(1);white(6);
    cout << endl;
    //6    
    white(5);black(2);dark_grey(9);grey(2);white(4);grey(1);black(1);white(5);
    cout << endl;
    //7
    white(4);black(2);dark_grey(5);grey(1);dark_grey(1);grey(1);dark_grey(4);grey(1);white(4);grey(1);black(1);white(4);
    cout << endl;
    //8
    white(3);black(2);dark_grey(8);grey(1);dark_grey(4);grey(2);white(4);grey(1);black(1);white(3);
    cout << endl;
    //9
    white(3);black(1);dark_grey(2);black(1);dark_grey(4);grey(2);dark_grey(6);grey(3);white(3);black(1);white(3);
    cout << endl;
    //10
    white(2);black(2);dark_grey(1);black(1);white(1);black(1);dark_grey(1);grey(1);dark_grey(6);black(2);dark_grey(2);grey(3);white(2);grey(1);black(1);white(2);
    cout << endl;
    //11
    white(2);black(1);dark_grey(2);black(1);dark_grey(1);black(1);dark_grey(7);black(1);grey(1);dark_grey(1);black(1);dark_grey(1);grey(3);white(2);grey(1);black(1);white(2);
    cout << endl;
    //12
    white(1);black(2);dark_grey(3);black(1);dark_grey(8);black(1);dark_grey(2);black(1);dark_grey(2);grey(3);white(2);grey(1);black(1);white(1);
    cout << endl;
    //13
    white(1);black(2);dark_grey(13);black(2);dark_grey(4);grey(2);white(2);grey(1);black(1);white(1);
    cout << endl;
    //14
    white(1);black(1);dark_grey(20);white(1);grey(1);black(1);grey(2);black(1);white(1);
    cout << endl;
    //15
    white(1);black(1);dark_grey(1);grey(1);dark_grey(18);white(1);black(1);grey(1);black(1);white(1);black(1);white(1);
    cout << endl;
    //16
    white(1);black(1);dark_grey(1);grey(1);dark_grey(5);black(2);dark_grey(11);white(1);black(1);grey(1);black(1);white(1);black(1);white(1);
    cout << endl;
    //17
    white(1);black(1);dark_grey(6);grey(3);black(1);dark_grey(9);grey(1);white(1);grey(1);black(1);grey(2);black(1);white(1);
    cout << endl;
    //18
    white(1);black(2);dark_grey(4);black(1);grey(2);dark_grey(1);black(1);dark_grey(7);black(2);grey(1);white(4);dark_grey(1);black(1);white(1);
    cout << endl;
    //19
    white(2);black(1);dark_grey(4);black(1);dark_grey(2);black(2);dark_grey(6);black(1);white(1);grey(1);black(1);white(4);black(1);white(2);
    cout << endl;
    //20
    white(2);black(1);dark_grey(5);black(3);dark_grey(6);black(1);white(1);grey(2);black(1);white(3);grey(1);black(1);white(2);
    cout << endl;
    //21
    white(3);black(1);dark_grey(13);black(1);white(1);grey(1);black(1);grey(1);white(3);black(1);white(3);
    cout << endl;
    //22
    white(3);black(2);dark_grey(11);grey(2);black(2);grey(1);white(1);dark_grey(3);black(1);white(3);
    cout << endl;
    //23
    white(4);black(1);grey(1);dark_grey(2);grey(2);dark_grey(3);grey(6);white(3);dark_grey(2);black(1);white(4);
    cout << endl;
    //24
    white(5);black(1);grey(1);white(1);grey(7);white(6);grey(1);dark_grey(1);black(1);white(5);
    cout << endl;
    //25
    white(6);black(2);grey(1);white(6);dark_grey(3);white(1);grey(1);black(3);white(6);
    cout << endl;
    //26
    white(7);black(4);grey(2);white(3);grey(2);black(4);white(7);
    cout << endl;
    //27
    white(9);black(4);grey(1);white(1);black(5);white(9);
    cout << endl;
    //28
    white(11);black(7);white(11);
    cout << endl;
    //29
    white(29);
    cout << endl;
}