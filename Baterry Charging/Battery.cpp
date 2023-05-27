#include <iostream>
#include <windows.h>
#include <conio.h>
#define delay Sleep

using namespace std;

struct teks{
    char tanda[2] = {'.','!'};
    string charge = "Charging";
    string full = "Full Battery";
};

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setColor(unsigned short color) {
  HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsoleOutput,color);
}

void warna_hitam(int n){
    for(int i=0; i<n; i++){
        setColor(256);
        cout << "  ";
    }
}

void warna_putih(int n){
    for(int i=0; i<n; i++){
        setColor(255);
        cout << "  ";
    }
}

void warna_merah(int n){
    for(int i=0; i<n; i++){
        setColor(204);
        cout << "  ";
    }
}

void warna_kuning(int n){
    for(int i=0; i<n; i++){
        setColor(238);
        cout << "  ";
    }
}

void warna_hijau(int n){
    for(int i=0; i<n; i++){
        setColor(170);
        cout << "  ";
    }
}

void pola_baterai_1(int jumlah){
    warna_hitam(3);warna_putih(8); cout << endl;
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    for (int i=0; i<3;i++){ warna_hitam(2);warna_putih(1);warna_hitam(1);warna_merah(2);warna_hitam(5);warna_putih(2);cout << endl;}
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    warna_hitam(3);warna_putih(8); cout << endl;
    setColor(15);
}

void pola_baterai_2(int jumlah){
    warna_hitam(3);warna_putih(8); cout << endl;
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    for (int i=0; i<3;i++){ warna_hitam(2);warna_putih(1);warna_hitam(1);warna_kuning(4);warna_hitam(3);warna_putih(2);cout << endl;}
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    warna_hitam(3);warna_putih(8); cout << endl;
    setColor(15);
}

void pola_baterai_3(int jumlah){
    warna_hitam(3);warna_putih(8); cout << endl;
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    for (int i=0; i<3;i++){ warna_hitam(2);warna_putih(1);warna_hitam(1);warna_hijau(6);warna_hitam(1);warna_putih(2);cout << endl;}
    warna_hitam(2);warna_putih(1);warna_hitam(8);warna_putih(1); cout << endl;
    warna_hitam(3);warna_putih(8); cout << endl;
    setColor(15);
}

int main() {
    teks statusBaterai[3];

    system("cls");

    gotoxy(0,3); pola_baterai_1(1); cout << endl;
    gotoxy(9,1); cout << statusBaterai[0].charge; delay(500);
    gotoxy(17,1); cout << statusBaterai[0].tanda[0]; delay(500);
    gotoxy(18,1); cout << statusBaterai[0].tanda[0]; delay(500);
    gotoxy(19,1); cout << statusBaterai[0].tanda[0]; delay(500);
    gotoxy(1,2); cout << endl; delay(500);
    system("cls");

    gotoxy(0,3); pola_baterai_2(1); cout << endl;
    gotoxy(9,1); cout << statusBaterai[1].charge; delay(500);
    gotoxy(17,1); cout << statusBaterai[1].tanda[0]; delay(500);
    gotoxy(18,1); cout << statusBaterai[1].tanda[0]; delay(500);
    gotoxy(19,1); cout << statusBaterai[1].tanda[0]; delay(500);
    gotoxy(1,2);cout << endl; delay(500);
    system("cls");

    gotoxy(0,3); pola_baterai_3(1); cout << endl;
    gotoxy(7,1); cout << statusBaterai[2].full; delay(500);
    gotoxy(20,1); cout << statusBaterai[2].tanda[1]; delay(500);
    gotoxy(1,2); cout << endl; delay(500);
    system("cls");
}
