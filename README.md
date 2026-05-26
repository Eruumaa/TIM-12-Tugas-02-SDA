# 📊 Tugas 2 SDA: Sorting Algorithm Implementation

Proyek ini merupakan implementasi berbagai algoritma pengurutan (*sorting*) menggunakan bahasa C. Proyek ini dikembangkan sebagai bagian dari tugas mata kuliah **Struktur Data dan Algoritma** untuk mendalami cara kerja, efisiensi, dan implementasi algoritma pengurutan secara mendalam.

---

## 🚀 Fitur Utama
* **Input Data Fleksibel:** Pengguna dapat memasukkan data angka secara mandiri.
* **Visualisasi Proses:** Menampilkan kondisi data *sebelum* dan *sesudah* proses sorting.
* **Algoritma Terstruktur:** Implementasi modular untuk algoritma sorting dasar dan lanjutan.
* **Berbasis C:** Performa tinggi dengan manajemen memori langsung.

---

## 🛠️ Algoritma yang Digunakan
Program ini mengimplementasikan algoritma pengurutan dari nilai terkecil hingga terbesar (*ascending*) atau sebaliknya, mencakup:

| Kategori | Algoritma | Kompleksitas (Avg) |
| :--- | :--- | :--- |
| **Dasar** | Bubble Sort, Selection Sort, Insertion Sort | $O(n^2)$ |
| **Lanjutan** | Quick Sort, Merge Sort, Shell Sort | $O(n \log n)$ |

---

## 💻 Cara Kompilasi & Menjalankan
Pastikan Anda memiliki `gcc` terinstal di sistem Anda. Gunakan perintah berikut di terminal:

```bash
# Kompilasi seluruh file source. 
gcc src/main.c src/utils.c src/advanceSorting.c src/basic_sorting.c -o program

# Jalankan program
./program
```

> Compile Pada Linux, Gunakan `make` /  Pada Windows Gunakan `mingw32-make` jika Anda telah mengatur file `Makefile` untuk mempermudah kompilasi.

---

## 🎯 Tujuan Proyek
1.  **Memahami konsep sorting** secara mendalam pada struktur data.
2.  **Melatih implementasi algoritma** menggunakan bahasa pemrograman C.
3.  **Meningkatkan logika pemrograman** dasar dan efisiensi kode.

---

## 👥 Kontributor
Proyek ini dikembangkan oleh **Kelompok 12**:
* Muhammad Aqil Mubarak (Eruumaa)
* Farhan S25
* Reyan Andrea
* *(Tambahkan anggota lainnya jika ada)*

---
*Dibuat untuk tugas mata kuliah Struktur Data dan Algoritma - Universitas Syiah Kuala.*
