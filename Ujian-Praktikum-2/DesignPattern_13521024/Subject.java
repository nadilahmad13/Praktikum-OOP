/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2 : Design Pattern
 * 
 * Kelas Subject sebagai kelas yang memberikan notifikasi ke para observer
 */

import java.util.*;

public class Subject {
    private List<Observer> subscribers = new ArrayList<>();
    private String mainState;

    public void subscribe(Observer observer) {
        this.subscribers.add(observer);
    }

    public void unsubscribe(Observer observer) {
        this.subscribers.remove(observer);
    }

    public void notifySubscribers() {
        for (Observer o : this.subscribers) {
            o.update(this.mainState);
        }
    }

    public void mainBusinessLogic() {
        this.mainState = "New product available!";
        notifySubscribers();
    }
}