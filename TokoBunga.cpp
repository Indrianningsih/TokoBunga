#include <iostream>
#include <vector>
using namespace std;

struct Bunga {
    string nama;
    int stok;
    double harga;
};

vector<Bunga> inventaris;

void addBunga() {
    Bunga b;
    cout << "\nMasukkan nama bunga: ";
    cin.ignore();
    getline(cin, b.nama);
    cout << "Masukkan stok: ";
    cin >> b.stok;
    cout << "Masukkan harga: ";
    cin >> b.harga;
    inventaris.push_back(b);
    cout << "Bunga berhasil ditambahkan!\n";
}
