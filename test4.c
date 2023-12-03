#include <stdio.h>

int main() {
    double totalBelanja, hargaBayar;
    int jumlahTransaksi;

    // Meminta input total belanja
    printf("Masukkan total belanja (Rp): ");
    scanf("%lf", &totalBelanja);

    // Meminta input jumlah transaksi
    printf("Masukkan jumlah transaksi dalam sebulan: ");
    scanf("%d", &jumlahTransaksi);

    // Menghitung diskon berdasarkan ketentuan
    if (totalBelanja < 200000) {
        // Tidak mendapat diskon
        hargaBayar = totalBelanja;
    } else if (totalBelanja >= 200000 && totalBelanja <= 500000) {
        // Diskon 10%
        hargaBayar = totalBelanja * 0.9;
    } else if (totalBelanja > 500000 && totalBelanja <= 1000000) {
        // Diskon 20%
        hargaBayar = totalBelanja * 0.8;
    } else {
        // Diskon 30%
        hargaBayar = totalBelanja * 0.7;
    }

    // Mengecek apakah pembeli berhak mendapatkan diskon tambahan
    if (jumlahTransaksi >= 4) {
        // Diskon tambahan 20%
        hargaBayar *= 0.8;
    }

    // Menampilkan harga yang harus dibayar setelah diskon
    printf("Harga yang harus dibayar setelah diskon: Rp %.2lf\n", hargaBayar);

    return 0;
}
