#include <stdio.h>

// Fungsi untuk menghitung hasil operasi perkalian atau pembagian
double calculateMultiplicationDivision(double operand1, char operator, double operand2) {
    if (operator == '*') {
        return operand1 * operand2;
    } else if (operator == '/') {
        return operand1 / operand2;
    } else {
        // Handle operator tidak valid
        printf("Operator tidak valid.\n");
        return 0;
    }
}

// Fungsi untuk menghitung hasil ekspresi
double calculateExpression() {
    double result;
    char operator;
    char c;

    // Meminta pengguna untuk memasukkan ekspresi
    printf("Masukkan ekspresi (misal: 3 + 4 * 2): ");

    // Membaca operand pertama
    scanf("%lf", &result);

    // Membaca operator dan operand berikutnya secara berulang
    while (1) {
        printf("pilih operator contoh (*+-/). apabila sudah tidak mau memilih operator dan ingin hasil pilih '='\n");
        scanf(" %c", &operator);  // Spasi sebelum %c untuk mengabaikan spasi tambahan
        if (operator == '+' || operator == '-') {
            double nextOperand;
            printf("pilih angka : \n");
            scanf("%lf", &nextOperand);
            if (operator == '+') {
                result = result + nextOperand;
            } else {
                result = result - nextOperand;
            }
        } else if (operator == '*' || operator == '/') {
            double nextOperand;
            printf("pilih angka : \n");
            scanf("%lf", &nextOperand);
            result = calculateMultiplicationDivision(result, operator, nextOperand);
        } else if (operator == '=') {
            break;  // Keluar dari loop jika operator adalah '='
        } else {
            // Handle operator tidak valid
            printf("Operator tidak valid.\n");
            return 0;
        }
        
    }

    return result;
}

int main() {
    // Memanggil fungsi untuk menghitung ekspresi dan menampilkan hasilnya
    double result = calculateExpression();
    printf("Hasil perhitungan: %lf\n", result);

    return 0;
}
