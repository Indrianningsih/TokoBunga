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

void insertBunga() {
    int pos;
    Bunga b;
    cout << "\nMasukkan posisi untuk menyisipkan: ";
    cin >> pos;
    if (pos < 0 || pos > inventaris.size()) {
        cout << "Posisi tidak valid!\n";
        return;
    }
    cout << "Masukkan nama bunga: ";
    cin.ignore();
    getline(cin, b.nama);
    cout << "Masukkan stok: ";
    cin >> b.stok;
    cout << "Masukkan harga: ";
    cin >> b.harga;
    inventaris.insert(inventaris.begin() + pos, b);
    cout << "Bunga berhasil disisipkan!\n";
}

void printInventaris() {
    cout << "\n=== Daftar Bunga ===\n";
    if (inventaris.empty()) {
        cout << "Belum ada data bunga.\n";
    } else {
        for (int i = 0; i < inventaris.size(); ++i) {
            cout << i << ". " << inventaris[i].nama 
                 << " | Stok: " << inventaris[i].stok 
                 << " | Harga: Rp " << inventaris[i].harga << endl;
        }
    }
}

