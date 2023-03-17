#include <iostream>
using namespace std;

int main() {
    int menu, size;
    float sum = 0, avg;
    cout << "Masukkan ukuran array: ";
    cin >> size;
    int arr[size];

    // Input nilai array
    for(int i=0; i<size; i++) {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    // Tampilkan menu
    cout << "\n--- Menu ---" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Jumlah Total Array" << endl;
    cout << "4. Rata-rata" << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    // Cek menu yang dipilih
    switch(menu) {
        case 1: // Penjumlahan
            sum = 0;
            for(int i=0; i<size; i++) {
                sum += arr[i];
            }
            cout << "Hasil Penjumlahan = " << sum << endl;
            break;
        case 2: // Pengurangan
            int sub;
            cout << "Masukkan nilai pengurangan: ";
            cin >> sub;
            for(int i=0; i<size; i++) {
                arr[i] -= sub;
            }
            cout << "Array setelah dikurangi = ";
            for(int i=0; i<size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 3: // Jumlah Total Array
            cout << "Jumlah Total Array = " << size << endl;
            break;
        case 4: // Rata-rata
            avg = sum / size;
            cout << "Rata-rata = " << avg << endl;
            break;
        default:
            cout << "Menu tidak tersedia" << endl;
            break;
    }

    return 0;
}
