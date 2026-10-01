#include <stdio.h>
#include <string.h>

int main() {
    int jumlahSiswa;

    // 1. Input Jumlah Siswa
    printf("Masukkan jumlah siswa: ");
    scanf("%d", &jumlahSiswa);

    // Deklarasi Array untuk menyimpan data
    // Menggunakan array 2 dimensi untuk nama (maksimal 50 karakter per nama)
    char namaSiswa[jumlahSiswa][50];
    int nilaiSiswa[jumlahSiswa];

    float totalNilai = 0;

    // 2. Input Data Siswa
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("\nSiswa ke-%d\n", i + 1);

        // Input Nama Siswa
        printf("Nama: ");
        // Menggunakan scanf dengan spasi atau %[^\n] untuk membaca string dengan spasi
        scanf(" %[^\n]s", namaSiswa[i]);

        // Input Nilai Siswa
        printf("Nilai: ");
        scanf("%d", &nilaiSiswa[i]);

        // 4. Akumulasi Total Nilai
        totalNilai += nilaiSiswa[i];
    }

    // Perhitungan Rata-rata Kelas
    float rataRata = totalNilai / jumlahSiswa;

    // 5. Output / Tampilan Hasil Laporan
    printf("\n=== HASIL ===\n");
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("%s - %d - ", namaSiswa[i], nilaiSiswa[i]);

        // 3. Proses Data: Penentuan Status Kelulusan (>= 75 Lulus, < 75 Tidak Lulus)
        if (nilaiSiswa[i] >= 75) {
            printf("Lulus\n");
        } else {
            printf("Tidak Lulus\n");
        }
    }

    // Menampilkan Rata-rata Kelas (dengan 2 angka di belakang koma)
    printf("\nRata-rata kelas: %.2f\n", rataRata);

    return 0;
}
