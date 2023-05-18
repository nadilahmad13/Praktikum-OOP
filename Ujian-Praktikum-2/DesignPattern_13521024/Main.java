/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2 : Design Pattern
 * 
 * Kelas Main untuk menjalankan program dan melakukan testing
 */

public class Main {
    public static void main(String[] args) {
        // Membuat Sistem Notifikasi / Sebuah Subject
        Subject notificationSystem = new Subject();

        // Membuat para observers / subscribers
        Observer sms = new SMS();
        Observer email = new Email();
        Observer pushNotification = new PushNotification();
        Observer sms2 = new SMS();

        // Subscribe para observers ke subject
        notificationSystem.subscribe(sms);
        notificationSystem.subscribe(email);
        notificationSystem.subscribe(pushNotification);
        notificationSystem.subscribe(sms2);

        // memberikan notifikasi ke para observers
        notificationSystem.mainBusinessLogic();
    }
}