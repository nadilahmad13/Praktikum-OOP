/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : Domba.java
*/

public class Domba implements Kelas {
    // Menampilkan pesan
    //      "Moooooo"
    public void serang(Karakter self, Karakter target) {
        System.out.println("Moooooo");
    }

    // Menampilkan pesan
    //     "Mbeeeeeeekk"
    public void gunakanKemampuan(Karakter self, Karakter target) {
        System.out.println("Mbeeeeeeekk");
    }

    // Menampilkan pesan
    //      "Mbeeekkk mbeeekkk mbeeekkk"
    public void gunakanUltimate(Karakter self, Karakter target) {
        System.out.println("Mbeeekkk mbeeekkk mbeeekkk");
    }
}
