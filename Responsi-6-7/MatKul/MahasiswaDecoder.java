/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : MahasiswaDecoder.java
*/

import java.lang.reflect.*;

public class MahasiswaDecoder {
    private Mahasiswa mahasiswa;
    MahasiswaDecoder(Mahasiswa mahasiswa) {
        this.mahasiswa = mahasiswa;
    }

    public void addMatkul(String name) throws Exception {
        Method addMatkul = this.mahasiswa.getClass().getDeclaredMethod("addMatkul", String.class);
        addMatkul.setAccessible(true);
        addMatkul.invoke(this.mahasiswa, name);
    }

    public int getNIM() throws Exception {
        Field NIM = this.mahasiswa.getClass().getDeclaredField("NIM");
        NIM.setAccessible(true);
        return (int) NIM.get(this.mahasiswa);
    }

    public double getIPK() throws Exception {
        Field IPK = this.mahasiswa.getClass().getDeclaredField("IPK");
        IPK.setAccessible(true);
        return (double) IPK.get(this.mahasiswa);
    }
}