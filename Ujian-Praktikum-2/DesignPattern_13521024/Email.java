/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2 : Design Pattern
 * 
 * Kelas Email sebagai salah satu kelas yang mengimplementasikan Observer
 */

class Email implements Observer {
    @Override
    public void update(String context) {
        System.out.println("Sending email notification: " + context);
    }
}