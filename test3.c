#include <stdio.h>

int main() {
    double jarakKm;
    double jarakM, jarakCm;

    printf("Masukkan jarak dalam kilometer: ");
    scanf("%lf", &jarakKm);

    // Konversi ke meter dan sentimeter
    jarakM = jarakKm * 1000;  // 1 km = 1000 m
    jarakCm = jarakM * 100;   // 1 m = 100 cm

    // Menampilkan hasil konversi dengan penekanan tombol Enter setiap kali
    printf("\nHasil Konversi:\n");
    printf("Jarak dalam meter: %.2lf m\n", jarakM);
    printf("Jarak dalam sentimeter: %.2lf cm\n", jarakCm);

    return 0;
}
