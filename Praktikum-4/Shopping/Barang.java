/**
 * Barang.java
 * Implementasi class Barang
 * @author 13521024 Ahmad Nadil
 */

public class Barang {
    private String nama;
    private int jumlah;

    public Barang(String nama, int jumlah) {
        this.nama = nama;
        this.jumlah = jumlah;
    }

    @Override
    public String toString() {
        return jumlah + " " + nama;
    }
}