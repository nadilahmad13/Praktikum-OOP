import java.util.*;

class Mahasiswa {
    private int NIM;
    private double IPK;
    private List matkul;

    Mahasiswa(int NIM, double IPK) {
        this.NIM = NIM;
        this.IPK = IPK;
        this.matkul = new ArrayList();
    }

    private void addMatkul(String matkul) {
        this.matkul.add(matkul);
    }
}