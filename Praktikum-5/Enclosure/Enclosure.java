/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Praktikum 5  : Generic & Java API
 * File         : Enclosure.java
*/

import java.io.*;
import java.util.*;

public class Enclosure<T extends Animal>{
    private ArrayList<T> animals;

    public Enclosure() {
        // Inisialisasi ArrayList animals kosong
        animals = new ArrayList<T>();
    } 

    public int getAnimalCount() {
        // Mengembalikan jumlah hewan dalam this.animals
        return animals.size();
    }

    public void addAnimal(T animal) {
        // menambahkan seekor hewan ke dalam this.animals
        animals.add(animal);
    }

    public Animal getAnimalAt(int i) {
        // mengembalikan hewan dalam this.animals pada index i (tidak mengubah this.animals)
        return animals.get(i);
    }

    public void removeAnimalAt(int i) {
        // menghapus hewan pada this.animals pada index i
        animals.remove(i);
    }

    public boolean isEmpty() {
        // mengembalikan boolean yang menyatakan apakah this.animals kosong atau tidak
        return animals.isEmpty();
    }

    public void describe() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong menuliskan output serupa dengan output berikut:
        // Kandang berisi 2 ekor hewan:
        // 1. po, spesies Pandamus Maximus, umur 5 tahun
        // 2. po2, spesies Pandamus Maximus, umur 5 tahun
        if (isEmpty()){
            System.out.println("Kandang ini kosong...");
        }else{
            System.out.println("Kandang berisi " + getAnimalCount() + " ekor hewan:");
            for (int i = 0; i < getAnimalCount(); i++){
                System.out.println((i+1) + ". " + getAnimalAt(i).getName() + ", spesies " + getAnimalAt(i).getSpecies() + ", umur " + getAnimalAt(i).getAge() + " tahun");
            }
        }
    }

    public void feed() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong maka akan memanggil method eat pada tiap animal dalam this.animals
        if (isEmpty()){
            System.out.println("Kandang ini kosong...");
        }else{
            for (int i = 0; i < getAnimalCount(); i++){
                getAnimalAt(i).eat();
            }
        }
    }

    public boolean safeForPetting() {
        // mengembalikan true apabila semua hewan dalam this.animals bersifat friendly
        for (int i = 0; i < getAnimalCount(); i++){
            if (!getAnimalAt(i).isFriendly()){
                return false;
            }
        }
        return true;
    }
}