/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2 : Design Pattern
 * 
 * Kelas PushNotification sebagai salah satu kelas yang mengimplementasikan Observer
 */

public class PushNotification implements Observer {
    @Override
    public void update(String context) {
        System.out.println("Sending push notification: " + context);
    }
}