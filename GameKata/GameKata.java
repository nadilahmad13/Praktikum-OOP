/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 5   : Generic & Java API
 * File         : GameKata.java
*/

import java.util.*;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        Map<String, Integer> titoWords = new HashMap<>();
        Map<String, Integer> wiwidWords = new HashMap<>();
        
        for (String word : tito) {
            titoWords.put(word, titoWords.getOrDefault(word, 0) + 1);
        }
        
        for (String word : wiwid) {
            wiwidWords.put(word, wiwidWords.getOrDefault(word, 0) + 1);
        }

        for (String word : titoWords.keySet()) {
            if (wiwidWords.containsKey(word)) {
                System.out.println(word);
            }
        }
    }
    
    // public static void main(String[] args) {
    //     String[] a = {"Viel","Adalah","Orang","Imba"};
    //     String[] b = {"Aku","Adalah","Orang","Imba"};
    //     run(a, b);

    //     System.out.println();

    //     String[] c = {"Budi","Budi","Adalah","Budi"};
    //     String[] d = {"Budi","Bermain","Bola","Adalah"};
    //     run(c,d);

    //     System.out.println();

    //     String[] e = {"Saya","Mengantuk"};
    //     String[] f = {"Ingin","Tidur"};
    //     run(e,f);
    // }
}