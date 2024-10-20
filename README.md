# Repository Kelompok 9 - Praktikum Algoritma Pemrograman 2024
<div align="center">
<img src="https://user-images.githubusercontent.com/74038190/229223263-cf2e4b07-2615-4f87-9c38-e37600f8381a.gif"  width="300" height="300" />
</div>

Selamat datang di repository praktikum **kelompok 9**! Di sini, Anda akan menemukan kode program yang digunakan selama praktikum Algoritma dan Pemrograman 2024.

### 👨‍🏫 Asisten Dosen
Agus Arya Wiraguna (2305551013)

### 👨‍💻 Praktikan

- Ida Bagus Dio Gloria (2405551053)
- I Made Dwipa Raditya Dinatha (2405551028)
- Nyoman Pramita Windari (2405551050)
- Tania gracia Siwalette (2405551116)
- Ni Made Adelia Wirasanti (2405551010)
- Ignatius Valentino Purnomo (2405551084)
- I Gusti Ngurah Agung Vimala Pratista Putra (2405551083)

## ✅ **To-Do List (Harus Dilakukan)**  

- **🚀 Asistensi Minimal 1x Seminggu:**
         Jaga ritme belajarmu dengan berkonsultasi rutin bersama Asdos.
  
- **📚 Pelajari Modul & Sumber Tambahan:**
         Jangan berhenti di modul, cari pengetahuan tambahan yang akan memperkuat fondasimu dalam Algoritma dan Pemrograman.
  
- **📝 Tugas Pendahuluan:**
         Kumpulkan tepat waktu atau risiko kehilangan poin!
  
- **💻 Tugas Source Code Modul:**
         Buat kodenya sendiri!
  
- **📑 Laporkan Hasil Praktikum (LAPRAK):**
         Susun laporan praktikum dengan baik dan sesuai prosedur.
  
- **👥 Komunikasi Kelompok:**
         Jangan jadi "ninja" yang hilang tanpa jejak! Selalu berkontribusi dalam diskusi dan pengerjaan tugas.


## 🔗 **Tautan & Berkas Wajib**  
> [Tambahkan link dan file penting di sini!]

Zip Praktikum : https://bit.ly/Praktikum-Algoritma-dan-Pemrograman-2024

Drive Praktikan : https://drive.google.com/drive/folders/17ayrZZ2X2A-wZjUONCJJ7RrWTkLGEH-0

Belajar C : https://www.w3schools.com/c/index.php

Belajar Git : https://www.w3schools.com/git/


## Panduan Penggunaan Git dan GitHub
Git adalah sistem kontrol versi yang sangat populer yang digunakan untuk mengelola kode sumber, sedangkan GitHub adalah platform hosting yang memungkinkan kolaborasi dan berbagi proyek dengan orang lain.

## Daftar Isi

1. [Apa itu Git dan GitHub?](#apa-itu-git-dan-github)
2. [Instalasi Git](#instalasi-git)
3. [Git Config](#git-config)
4. [Mengelola Repository Git](#mengelola-repository-git)
   - Clone Repository
   - Menambahkan Perubahan (Git Add)
   - Membuat Commit (Git Commit)
   - Melihat Status (Git Status)
   - Mengirim Perubahan (Git Push)
   - Mendapatkan Perubahan Terbaru (Git Fetch dan Git Pull)
5. [Branching](#branching)
6. [Menggabungkan Perubahan (Merge)](#menggabungkan-perubahan-merge)
7. [Bekerja dengan Remote Repository](#bekerja-dengan-remote-repository)
8. [Mengatasi Konflik](#mengatasi-konflik)
9. [Menggunakan GitHub](#menggunakan-github)
   - Membuat Repository di GitHub
   - Push ke Repository di GitHub
   - Mengirim Pull Request
   - Menggabungkan Pull Request
10. [Catatan Penting](#catatan-penting)

## Apa itu Git dan GitHub? <a name="apa-itu-git-dan-github"></a>

**Git** adalah sistem kontrol versi yang memungkinkan Anda melacak perubahan dalam kode sumber Anda. Ini memungkinkan Anda untuk berkolaborasi dengan orang lain dan mengelola riwayat proyek Anda.

**GitHub** adalah platform hosting yang memungkinkan Anda untuk menyimpan, berbagi, dan berkolaborasi dalam proyek Git. GitHub menyediakan alat yang kuat untuk kolaborasi tim dan pengelolaan proyek.

## Instalasi Git <a name="instalasi-git"></a>

Anda dapat mengunduh dan menginstal Git dari situs web resmi [Git](https://git-scm.com/downloads) sesuai dengan sistem operasi yang Anda gunakan.

## Git Config <a name="git-config"></a>

### Konfigurasi Awal

Setelah menginstal Git, langkah pertama yang perlu Anda lakukan adalah mengatur nama dan alamat email Anda. Ini akan menjadi identitas Anda dalam riwayat commit.

### Konfigurasi Nama dan Email

```shell
git config --global user.name "Nama Anda"
git config --global user.email "email@contoh.com"
```

Pastikan Anda menggantinya dengan nama Anda dan alamat email yang sesuai. Opsi --global mengindikasikan bahwa Anda ingin mengatur ini sebagai konfigurasi global (untuk seluruh repository pada komputer Anda). Jika Anda ingin mengatur nama dan email secara lokal untuk repository tertentu, lakukan hal yang sama tanpa opsi --global.

### Mengatur Editor Default

Git membutuhkan editor teks untuk pesan commit. Jika Anda tidak mengatur editor default, Git akan menggunakan editor yang telah ditentukan dalam sistem Anda.

Jika menggunakan VS Code gunakan perintah berikut:

```shell
git config --global core.editor "code --wait"
```

### Melihat Konfigurasi

Anda dapat melihat semua konfigurasi Git dengan perintah:
Ini akan mencantumkan semua pengaturan Git yang telah Anda tentukan, baik di tingkat global maupun lokal.

```shell
git config --list
```

### Menghapus Konfigurasi

Untuk menghapus pengaturan tertentu, Anda dapat menggunakan perintah git config --unset. Misalnya, jika Anda ingin menghapus alamat email global yang telah diatur sebelumnya, gunakan:

```shell
git config --global --unset user.email
```

## Mengelola Repository Git <a name="mengelola-repository-git"></a>

### Clone Repository

Untuk mengambil salinan (clone) repository yang sudah ada, gunakan perintah:

```shell
git clone <URL-Repository>
```

### Menambahkan Perubahan (Git Add)

Tambahkan perubahan yang ingin Anda sertakan dalam commit dengan perintah:

```shell
git add <nama-file>
```

Atau bisa juga menambahkan perubahan pada semua file dengan perintah:

```shell
git add .
```

### Membuat Commit (Git Commit)

Setelah menambahkan perubahan, buat commit untuk menyimpan perubahan dengan pesan deskripsi:

```shell
git commit -m "Pesan commit Anda di sini"
```

### Melihat Status (Git Status)

Untuk melihat status perubahan di repository Anda, gunakan perintah:

```shell
git status
```

### Mengirim Perubahan (Git Push)

Kirim perubahan lokal ke repository remote dengan perintah:

```shell
git push
```

### Mendapatkan Perubahan Terbaru (Git Fetch dan Git Pull)

Untuk mendapatkan perubahan terbaru dari repository remote, gunakan:

```shell
git fetch
```

Untuk mengambil perubahan terbaru dan menggabungkannya dengan cabang lokal saat ini, gunakan:

```shell
git pull
```

## Branching <a name="branching"></a>

Branching memungkinkan Anda untuk bekerja pada fitur atau perbaikan bug dalam cabang terpisah tanpa memengaruhi cabang utama (biasanya disebut "master").

Untuk membuat cabang baru gunakan perintah berikut:

```shell
git branch <nama cabang>
```

Untuk pindah cabang gunakan perintah berikut:

```shell
git checkout <nama cabang>
```

Untuk melihat semua cabang yang ada gunakan perintah berikut:

```shell
git branch
```

## Menggabungkan Perubahan (Merge) <a name="menggabungkan-perubahan-merge"></a>

Gunakan perintah git merge untuk menggabungkan perubahan dari satu branch ke branch lain.

```shell
git merge
```

## Bekerja dengan Remote Repository <a name="bekerja-dengan-remote-repository"></a>

### Menambahkan Remote Repository

Anda dapat menambahkan remote repository dengan perintah:

```shell
git remote add origin <URL-Repository-Remote>
```

### Mengirim Perubahan ke Remote Repository

Kirim perubahan lokal ke remote repository dengan perintah:

```shell
git push -u origin <nama-branch>
```

## Mengatasi Konflik <a name="mengatasi-konflik"></a>

Konflik terjadi ketika dua perubahan bertentangan dalam file. Anda perlu memecahkan konflik secara manual dan membuat commit baru.

## Menggunakan GitHub <a name="menggunakan-github"></a>

### Membuat Repository di GitHub

Anda dapat membuat repository di GitHub dengan mengklik tombol "New" di akun GitHub Anda.

### Push ke Repository di GitHub

Untuk mengirim perubahan ke repository di GitHub, gunakan perintah git push ke remote repository GitHub.

### Mengirim Pull Request

Jika Anda ingin berkontribusi ke proyek lain di GitHub, buat Pull Request untuk mengajukan perubahan Anda.

### Menggabungkan Pull Request

Pemilik proyek dapat menggabungkan Pull Request setelah memeriksa perubahan.

## Catatan Penting <a name="catatan-penting"></a>

- Selalu gunakan pesan commit yang deskriptif.
- Jangan lupa untuk sering mengirimkan perubahan Anda ke remote repository.
- Pelajari lebih lanjut tentang Git dan GitHub dengan dokumentasi resmi dan sumber daya online lainnya.

Terima kasih sudah niat baca.



