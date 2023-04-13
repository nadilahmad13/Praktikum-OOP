/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Praktikum 5  : Generic & Java API
 * File         : Zoo.java
*/

import java.io.*;
import java.util.*;

public class Zoo {
    private ArrayList<Enclosure<? extends Animal>> enclosures;
    private float ticketPrice;

    public Zoo() {
        // Inisialisasi this.enclosures dan this.ticketPrice
        this.enclosures = new ArrayList<Enclosure<? extends Animal>>();
        this.ticketPrice = 0;
    }

    public void addEnclosure(Enclosure<? extends Animal> enc) {
        // Menambahkan Enclosure enc ke dalam this.enclosures apabila enc tidak kosong
        if(!enc.isEmpty()){
            this.enclosures.add(enc);
        }
    }

    public void updateTicketPrice() {
        // Melakukan update terhadap this.ticketPrice dengan rumus sebagai berikut
        // harga tiket baru = 0
        // Untuk setiap Enclosure dalam this.enclosures:
            // Apabila Enclosure bersifat safeForPetting:
            //     harga tiket baru += 1.5 * jumlah animal dalam enclosure
            // else:
            //     harga tiket baru += 1 * jumlah animal dalam enclosure
        float newTicketPrice = 0; 
        for (Enclosure<? extends Animal> enc : this.enclosures){
            if(enc.safeForPetting()){
                newTicketPrice += 1.5 * enc.getAnimalCount();
            } else{
                newTicketPrice += 1 * enc.getAnimalCount();
            }
        }
        this.ticketPrice = newTicketPrice;
    }

    public float getTicketPrice() {
        // getter untuk this.ticketPrice
        return this.ticketPrice;
    }

    public int getTotalAnimalCount() {
        // Mengembalikan jumlah total semua hewan yang ada pada semua enclosure dalam this.enclosures
        int totalAnimalCount = 0;
        for (Enclosure<? extends Animal> enc : this.enclosures){
            totalAnimalCount += enc.getAnimalCount();
        }
        return totalAnimalCount;
    }

    public int getEnclosureCount() {
        // Mengembalikan jumlah enclosures dalam this.enclosures
        return this.enclosures.size();
    }
}