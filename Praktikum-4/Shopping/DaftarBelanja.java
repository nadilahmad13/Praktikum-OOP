/**
 * Barang.java
 * Implementasi class DaftarBelanja
 * @author 13521024 Ahmad Nadil
 */

public class DaftarBelanja {
    private Barang[] listBelanja;
    private int currentIndex;

    public DaftarBelanja(int max) {
        listBelanja = new Barang[max];
        currentIndex = 0;
    }

    public void belanja(int lorong, String keterangan) {
        belanja(lorong, 1, keterangan);
    }

    public void belanja(int lorong, int qty, String keterangan) {
        if (currentIndex >= listBelanja.length) {
            // System.out.println("Daftar belanja sudah penuh.");
            return;
        }

        String namaBarang = keterangan + " (lorong " + lorong + ")";
        Barang barang = new Barang(namaBarang, qty);
        listBelanja[currentIndex] = barang;
        currentIndex++;
    }

    public void belanja(String barang) {
        belanja(barang, 1);
    }

    public void belanja(String barang, int qty) {
        if (currentIndex >= listBelanja.length) {
            // System.out.println("Daftar belanja sudah penuh.");
            return;
        }

        Barang barangObj = new Barang(barang, qty);
        listBelanja[currentIndex] = barangObj;
        currentIndex++;
    }

    public void print() {
        for (int i = 0; i < currentIndex; i++) {
            System.out.print(i+1);
            System.out.print(". ");
            System.out.println(listBelanja[i].toString());
        }
    }
}
