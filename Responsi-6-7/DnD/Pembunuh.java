/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : Pembunuh.java
*/

/**
 * Note:
 * 1. Tab pada komentar hanya untuk mempermudah pembacaan, tidak ada tab pada saat melakukan print
 * suatu pesan.
 * 2. Self adalah karakter yang melakukan aksi, target adalah karakter yang menjadi target aksi.
 * 3. Pastikan segala aksi yang mengurangi darah target memanggil method terimaSerangan(), dipanggil
 * setelah menampilkan pesan yang berkaitan dengan aksi (serangan, kemampuan, ultimate).
 */

public class Pembunuh implements Kelas {
    private String senjata;

    public Pembunuh(String senjata) {
        this.senjata = senjata;
    }

    // Getter and setter
    public String getSenjata() {
        return senjata;
    }

    public void setSenjata(String senjata) {
        this.senjata = senjata;
    }

    /**
     * Implementasikan method-method yang ada pada interface Kelas
     */
    
    // Menyerang target dan mengurangi health target sebesar 20.
    // Menampilkan pesan
    //      "[nama karakter], sang pembunuh, menyerang [nama target] dengan [senjata]"
    public void serang(Karakter self, Karakter target) {
        System.out.println(self.getName() + ", sang pembunuh, menyerang " + target.getName() + " dengan " + this.senjata);
        target.terimaSerangan(20);
    }

    // Menyerap health target sebesar 20 (tentunya sembari mengurangi health target).
    // Target harus hidup. Apabila darah target kurang dari 20, maka darah target akan diserap 
    // hingga mati. Jika target sudah mati, tidak melakukan apa-apa.
    // Jika target masih hidup, menampilkan pesan
    //      "[nama karakter] menyerap health [nama target] sebesar [jumlah health yang diserap]"
    // Jika target sudah mati, menampilkan pesan
    //      "[nama target] sudah mati, tidak bisa diserap healthnya"
    public void gunakanKemampuan(Karakter self, Karakter target) {
        if(target.isHidup()){
            if(target.getHealth() > 20){
                System.out.println(self.getName() + " menyerap health " + target.getName() + " sebesar 20");
                target.terimaSerangan(20);
                self.addHealth(20);
            } else {
                System.out.println(self.getName() + " menyerap health " + target.getName() + " sebesar " + target.getHealth());
                self.addHealth(target.getHealth());
                target.terimaSerangan(target.getHealth());
            }
        } else {
            System.out.println(target.getName() + " sudah mati, tidak bisa diserap healthnya");
        }
    }

    // Menyalin wujud target (menyalin skillnya) lalu mengisi health sebesar 40 dan mana sebesar 20.
    // Target harus sudah mati. Menyalin skill berarti mengubah kelas yang dimiliki karakter.
    // Menampilkan pesan 
    //      "[nama karakter] menyalin wujud [nama target]"
    // Jika target sudah mati (penyalinan berhasil) menampilkan pesan
    //      "[nama target] berhasil disalin wujudnya"
    //      "[nama karakter] memperoleh 40 health dan 20 mana"
    // Jika target masih hidup, tidak melakukan apa-apa, dan menampilkan pesan
    //      "[nama target] belum mati, tidak bisa disalin wujudnya"
    public void gunakanUltimate(Karakter self, Karakter target) {
        if (!target.isHidup()){
            self.setKelas(target.getKelas());
            self.addHealth(40);
            self.addMana(20);
            System.out.println(self.getName() + " menyalin wujud " + target.getName());
            System.out.println(target.getName() + " berhasil disalin wujudnya");
            System.out.println(self.getName() + " memperoleh 40 health dan 20 mana");
        } else {
            System.out.println(target.getName() + " belum mati, tidak bisa disalin wujudnya");
        }
    }
}