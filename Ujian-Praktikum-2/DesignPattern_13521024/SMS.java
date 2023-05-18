/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2 : Design Pattern
 * 
 * Kelas SMS sebagai salah satu kelas yang mengimplementasikan Observer
 */

public class SMS implements Observer {
    @Override
    public void update(String context) {
        System.out.println("Sending SMS notification: " + context);
    }
}