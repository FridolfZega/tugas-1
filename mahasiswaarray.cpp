#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_MAHASISWA = 100;
const int JUMLAH_NILAI = 3; // tugas, UTS, UAS

int main() {
    string nama[MAX_MAHASISWA];
    string nim[MAX_MAHASISWA];
    double nilai[MAX_MAHASISWA][JUMLAH_NILAI];
    double rataRata[MAX_MAHASISWA];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Memasukkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Masukkan data untuk Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> nama[i];
        cout << "NIM: ";
        cin >> nim[i];
        for (int j = 0; j < JUMLAH_NILAI; ++j) {
            cout << "Nilai " << (j == 0 ? "Tugas" : (j == 1 ? "UTS" : "UAS")) << ": ";
            cin >> nilai[i][j];
        }

        // Menghitung rata-rata nilai
        double totalNilai = 0;
        for (int j = 0; j < JUMLAH_NILAI; ++j) {
            totalNilai += nilai[i][j];
        }
        rataRata[i] = totalNilai / JUMLAH_NILAI;
    }

    // Menampilkan tabel data mahasiswa
    cout << "\nTabel Data Mahasiswa:\n";
    cout << "---------------------------------------------------------\n";
    cout << "No.\tNama\tNIM\tTugas\tUTS\tUAS\tRata-Rata\n";
    cout << "---------------------------------------------------------\n";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << i + 1 << "\t" << nama[i] << "\t" << nim[i] << "\t";
        for (int j = 0; j < JUMLAH_NILAI; ++j) {
            cout << fixed << setprecision(2) << nilai[i][j] << "\t";
        }
        cout << rataRata[i] << "\n";
    }
    cout << "---------------------------------------------------------\n";

    return 0;
}