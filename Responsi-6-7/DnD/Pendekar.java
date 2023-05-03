/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : Pendekar.java
*/

/**
 * Note:
 * 1. Tab pada komentar hanya untuk mempermudah pembacaan, tidak ada tab pada saat melakukan print
 * suatu pesan.
 * 2. Self adalah karakter yang melakukan aksi, target adalah karakter yang menjadi target aksi.
 * 3. Pastikan segala aksi yang mengurangi darah target memanggil method terimaSerangan(), dipanggil
 * setelah menampilkan pesan yang berkaitan dengan aksi (serangan, kemampuan, ultimate).
 */

public class Pendekar implements Kelas {
    private String senjata;
    private String perisai;

    public Pendekar(String senjata, String perisai) {
        this.senjata = senjata;
        this.perisai = perisai;
    }

    // Getter and setter
    public String getSenjata() {
        return senjata;
    }

    public String getPerisai() {
        return perisai;
    }

    public void setSenjata(String senjata) {
        this.senjata = senjata;
    }

    public void setPerisai(String perisai) {
        this.perisai = perisai;
    }

    /**
     * Implementasikan method-method yang ada pada interface Kelas
     */

    // Melakukan serangan dengan senjata pada target dan mengurangi health target sebesar 15.
    // Menampilkan pesan
    //      "[nama karakter], sang pendekar, menyerang [nama target] dengan [senjata]"
    public void serang(Karakter self, Karakter target) {
        System.out.println(self.getName() + ", sang pendekar, menyerang " + target.getName() + " dengan " + this.senjata);
        target.terimaSerangan(15);
    }

    // Melakukan serangan dengan perisai pada target dan mengurangi health target sebesar 40.
    // Target harus hidup. Apabila target sudah mati, tidak melakukan apa-apa.
    // Apabila target masih hidup, menampilkan pesan
    //      "[nama karakter] memukul mundur [nama target] dengan [perisai]"
    // Apabila target sudah mati, menampilkan pesan
    //      "[nama target] sudah mati, tidak bisa dipukul mundur"
    public void gunakanKemampuan(Karakter self, Karakter target) {
        if(target.isHidup()){
            System.out.println(self.getName() + " memukul mundur " + target.getName() + " dengan " + this.perisai);
            target.terimaSerangan(40);
        } else {
            System.out.println(target.getName() + " sudah mati, tidak bisa dipukul mundur");
        }
    }

    // Menyerukan nada peperangan sembari menyerang target dengan senjata dan perisai.
    // Menambahkan health sebesar 30 dan mana sebesar 20.
    // Mengurangi health target sebesar 55.
    // Target harus hidup. Apabila target sudah mati, tidak menambahkan health dan mana maupun
    // mengurangi health target.
    // Apabila target masih hidup, menampilkan pesan
    //      "[nama karakter] menyerukan nada peperangan"
    //      "[nama karakter] mendapatkan 30 health dan 20 mana"
    //      "[nama karakter] menyerang [nama target] dengan [senjata] dan [perisai]"
    // Apabila target sudah mati, menampilkan pesan
    //      "[nama target] sudah mati, tidak bisa dipukul mundur"
    public void gunakanUltimate(Karakter self, Karakter target) {
        if(target.isHidup()){
            System.out.println(self.getName() + " menyerukan nada peperangan");
            System.out.println(self.getName() + " mendapatkan 30 health dan 20 mana");
            System.out.println(self.getName() + " menyerang " + target.getName() + " dengan " + this.senjata + " dan " + this.perisai);
            self.addHealth(30);
            self.addMana(20);
            target.terimaSerangan(55);
        } else {
            System.out.println(target.getName() + " sudah mati, tidak bisa dipukul mundur");
        }
    }
}
