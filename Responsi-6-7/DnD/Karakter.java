/**
 * Note:
 * 1. Tab pada komentar hanya untuk mempermudah pembacaan, tidak ada tab pada saat melakukan print
 * suatu pesan.
 */

public class Karakter {
    private String name;
    private int health;
    private int mana;
    private boolean hidup;
    private Kelas kelas;
    
    // Konstruktor
    public Karakter(String name, Kelas kelas) {
        this.name = name;
        this.health = 100;
        this.mana = 100;
        this.hidup = true;
        this.kelas = kelas;
    }

    // Getter and setter
    public void setKelas(Kelas kelas) {
        this.kelas = kelas;
    }

    public String getName() {
        return name;
    }

    public int getHealth() {
        return health;
    }

    public int getMana() {
        return mana;
    }

    public boolean isHidup() {
        return hidup;
    }

    public Kelas getKelas() {
        return kelas;
    }

    public void addMana(int mana) {
        this.mana += mana;
    }

    public void reduceMana(int mana) {
        this.mana -= mana;
    }

    public void addHealth(int health) {
        this.health += health;
    }

    // Melakukan serangan dengan menggunakan serangan dari kelas yang dimiliki karakter.
    // Jika karakter sudah mati, serangan tidak dilakukan dan menampilkan pesan
    //      "[nama karakter] sudah mati, tidak bisa menyerang"
    public void serang(Karakter target) {
        if (!this.hidup) {
            System.out.println(this.name + " sudah mati, tidak bisa menyerang");
            return;
        }
        this.kelas.serang(this, target);
    }

    // Menggunakan kemampuan dari kelas yang dimiliki karakter.
    // Mengurangi mana karakter sebesar 10.
    // Cek apakah karakter masih hidup terlebih dahulu baru kemudian cek apakah mana cukup.
    // Jika karakter sudah mati, tidak terjadi apa-apa dan menampilkan pesan
    //      "[nama karakter] sudah mati, tidak bisa menggunakan kemampuan"
    // Jika karakter tidak mempunyai mana yang cukup, tidak terjadi apa-apa dan menampilkan pesan
    //      "Mana [nama karakter] tidak cukup, tidak bisa menggunakan kemampuan"
    public void gunakanKemampuan(Karakter target) {
        if (!this.hidup) {
            System.out.println(this.name + " sudah mati, tidak bisa menggunakan kemampuan");
            return;
        }
        if (this.mana < 10) {
            System.out.println("Mana " + this.name + " tidak cukup, tidak bisa menggunakan kemampuan");
            return;
        }
        this.mana -= 10;
        this.kelas.gunakanKemampuan(this, target);
    }

    // Menggunakan ultimate dari kelas yang dimiliki karakter.
    // Mengurangi mana karakter sebesar 40.
    // Cek apakah karakter masih hidup terlebih dahulu baru kemudian cek apakah mana cukup.
    // Jika karakter sudah mati, ultimate tidak digunakan dan menampilkan pesan
    //      "[nama karakter] sudah mati, tidak bisa menggunakan ultimate"
    // Jika karakter tidak mempunyai mana yang cukup, ultimate tidak digunakan dan menampilkan pesan
    //      "Mana [nama karakter] tidak cukup, tidak bisa menggunakan ultimate"
    public void gunakanUltimate(Karakter target) {
        if (!this.hidup) {
            System.out.println(this.name + " sudah mati, tidak bisa menggunakan ultimate");
            return;
        }
        if (this.mana < 40) {
            System.out.println("Mana " + this.name + " tidak cukup, tidak bisa menggunakan ultimate");
            return;
        }
        this.mana -= 40;
        this.kelas.gunakanUltimate(this, target);
    }

    // Menerima serangan dan mengurangi health karakter sebesar damage apabila karakter masih hidup.
    // Apabila damage lebih besar dari health, health karakter menjadi 0.
    // Apabila masih hidup, menampilkan pesan
    //      "[nama karakter] menerima serangan sebesar [damage]"
    //      "Sisa health [nama karakter] adalah [health]"
    //      Jika health karakter <= 0, karakter mati dan menampilkan pesan
    //          "[nama karakter] telah mati"
    // Apabila sudah mati, menampilkan pesan
    //      "[nama karakter] sudah mati"
    //      "Serangan tidak berpengaruh"
    public void terimaSerangan(int damage) {
        if (this.hidup) {
            this.health = (damage > this.health) ? 0 : this.health - damage;
            System.out.println(this.name + " menerima serangan sebesar " + damage);
            System.out.println("Sisa health " + this.name + " adalah " + this.health);
            if (this.health <= 0) {
                this.hidup = false;
                System.out.println(this.name + " telah mati");
            }
        } else {
            System.out.println(this.name + " sudah mati");
            System.out.println("Serangan tidak berpengaruh");
        }
    }
}