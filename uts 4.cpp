#include <iostream>
using namespace std;

double calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else {
                cout << "Angka yang anda masukan tidak dapat di proses, mohon masukan angka lain! " << endl;
                return 0;
            }
        default:
            cout << "Angka yang anda masukan tidak dapat di proses, mohon masukan angka lain! " << endl;
            return 0;
    }
}

void displayMenu() {
    cout << "========== Selamat Datang di Kalkulator Sederhana Milik Ryan ==========" << endl;
    cout << "Silahkan pilih menu yang anda inginkan :" << endl;
    cout << "[1] Penjumlahan (+)" << endl;
    cout << "[2] Pengurangan (-)" << endl;
    cout << "[3] Perkalian (*)" << endl;
    cout << "[4] Pembagian (/)" << endl;
    cout << "[5] Keluar" << endl;
    cout << "==========================================" << endl;
}

int main() {
    double num1, num2, result;
    int choice;
    char operation;
    bool running = true;

    while (running) {
        displayMenu();
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: operation = '+'; break;
            case 2: operation = '-'; break;
            case 3: operation = '*'; break;
            case 4: operation = '/'; break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
                running = false;
                continue;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                continue;
        }


        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        result = calculate(num1, num2, operation);


        cout << "Hasil: " << num1 << " " << operation << " " << num2 << " = " << result << endl << endl;
    }

    return 0;
}
