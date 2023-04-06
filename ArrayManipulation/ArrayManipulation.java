/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 5   : Generic & Java API
 * File         : ArrayManipulation.java
*/

import java.util.Arrays;
import java.util.function.Function;
import java.util.function.Predicate;

/**
 * Note:
 * Anda bebas menggunakan metode apa pun dari kelas yang diimport dan kelas bawaan Java seperti
 * {@link System} untuk melakukan manipulasi array seperti copy, sort, dan lain-lain.
 * misalnya: 
 *  {@link Arrays#copyOf(Object[], int)}
 *  https://docs.oracle.com/javase/7/docs/api/java/util/Arrays.html#copyOf(T[],%20int)
 *  {@link System#arraycopy(Object[] source, int, Object, int, int)}}
 *  https://docs.oracle.com/javase/7/docs/api/java/lang/System.html#arraycopy(java.lang.Object,%20int,%20java.lang.Object,%20int,%20int)       
 */

/**
 * Kelas ini berisi metode untuk memanipulasi array.
 */
class ArrayManipulation {
    /**
     * Menggabungkan dan mengurutkan dua array berisikan elemen yang "comparable".
     * Anda dapat menggunakan {@link Arrays#sort(Object [])} untuk mengurutkan array, tidak perlu 
     * mengimplementasikan algoritma pengurutan sendiri. 
     * Array masukan tidak mungkin null.
     * Pastikan isi dari array input tidak berubah.
     * 
     * @param arr1 array pertama untuk digabungkan dan diurutkan
     * @param arr2 array kedua untuk digabungkan dan diurutkan
     * @param <T> tipe elemen yang dapat dibandingkan
     * @return array yang diurutkan yang merupakan gabungan dari arr1 dan arr2
     */
    public static <T extends Comparable<T>> T[] mergeAndSortArrays(T[] arr1, T[] arr2) {
        T[] mergedArray = Arrays.copyOf(arr1, arr1.length + arr2.length);
        System.arraycopy(arr2, 0, mergedArray, arr1.length, arr2.length);
        Arrays.sort(mergedArray);
        return mergedArray;
    }

    /**
     * Menemukan elemen maksimum dalam array berisikan elemen yang "comparable".
     * Anda dapat menggunakan {@link Comparable#compareTo(Object)} untuk membandingkan elemen.
     * Array masukan tidak mungkin null.
     * Pastikan isi dari array input tidak berubah.
     * 
     * @param arr array untuk mencari elemen maksimum
     * @param <T> tipe elemen yang dapat dibandingkan
     * @return elemen maksimum dalam array
     */
    public static <T extends Comparable<T>> T findMax(T[] arr) {
        T max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i].compareTo(max) > 0) {
                max = arr[i];
            }
        }
        return max;
        // return Arrays.stream(arr).max(Comparable::compareTo).get();
    }

    /**
     * Menerapkan fungsi mapper ke setiap elemen dalam array dan mengembalikan array hasilnya.
     * Anda dapat menggunakan {@link Function#apply(Object)} untuk menerapkan fungsi mapper ke 
     * setiap elemen. Contoh arr[0] = mapper.apply(arr[0])
     * Array masukan tidak mungkin null.
     * Pastikan isi dari array input tidak berubah.
     * 
     * @param arr array untuk menerapkan fungsi mapper
     * @param mapper fungsi yang akan diterapkan ke setiap elemen dalam array
     * @param <T> tipe elemen dalam array 
     * @return array hasil dari menerapkan fungsi mapper ke setiap elemen dalam array masukan
     */
    public static <T> T[] mapArray(T[] arr, Function<T, T> mapper) {
        T[] mappedArray = Arrays.copyOf(arr, arr.length);
        for (int i = 0; i < mappedArray.length; i++) {
            mappedArray[i] = mapper.apply(mappedArray[i]);
        }
        return mappedArray;
    }

    /**
     * Mengembalikan array baru yang berisi elemen dari array masukan yang memenuhi kondisi yang
     * ditentukan oleh predicate. Anda dapat menggunakan {@link IntPredicate#test(int)} untuk
     * menentukan apakah elemen ke-i memenuhi kondisi yang ditentukan oleh predicate. Contoh:
     * predicate.test(i). 
     * Array masukan tidak mungkin null.
     * Pastikan isi dari array input tidak berubah.
     * 
     * @param <T> tipe elemen dalam array
     * @param arr array untuk di-filter
     * @param predicate kondisi yang harus dipenuhi oleh elemen dalam array
     * @return array baru yang berisi elemen dari array masukan yang memenuhi kondisi yang
     */

    public static <T> T[] filterArray(T[] arr, Predicate<T> predicate) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (predicate.test(arr[i])) {
                count++;
            }
        }
        T[] filteredArray = Arrays.copyOf(arr, count);
        int j = 0;
        for (int i = 0; i < arr.length; i++) {
            if (predicate.test(arr[i])) {
                filteredArray[j] = arr[i];
                j++;
            }
        }
        return filteredArray;
    }

    // Anda dapat menggunakan metode main ini untuk melakukan tes.
    public static void main(String[] args) {
        Integer[] arr1 = {1, 5, 3, 4, 2};
        Integer[] arr2 = {7, 6, 8, 10, 9};
        Integer[] mergedArray = ArrayManipulation.mergeAndSortArrays(arr1, arr2);
        System.out.println(Arrays.toString(mergedArray));
        // Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
        System.out.println(Arrays.toString(arr1));
        // Output: [1, 5, 3, 4, 2]
        System.out.println(Arrays.toString(arr2));
        // Output: [7, 6, 8, 10, 9]
    
        Integer[] arr3 = {1, 4, 2, 5, 3};
        Integer max = ArrayManipulation.findMax(arr3);
        System.out.println(max);
        // Output: 5
        System.out.println(Arrays.toString(arr3));
        // Output: [1, 4, 2, 5, 3]
    
        String[] arr4 = {"apple", "banana", "cherry"};
        Function<String, String> toUpperCaseMapper = new Function<String, String>() {
            @Override
            public String apply(String s) {
                return s.toUpperCase();
            }
        };
        String[] mappedArray = ArrayManipulation.mapArray(arr4, toUpperCaseMapper);
        System.out.println(Arrays.toString(mappedArray));
        // Output: [APPLE, BANANA, CHERRY]
        System.out.println(Arrays.toString(arr4));
        // Output: [apple, banana, cherry]
    
        Integer[] arr5 = {1, 2, 3, 4, 5};
        Predicate<Integer> isEvenIndex = new Predicate<Integer>() {
            @Override
            public boolean test(Integer i) {
                return i % 2 == 0;
            }
        };
        Integer[] filteredArray = ArrayManipulation.filterArray(arr5, isEvenIndex);
        System.out.println(Arrays.toString(filteredArray));
        // Output: [1.0, 3.0, 5.0]
        System.out.println(Arrays.toString(arr5));
        // Output: [1.0, 2.0, 3.0, 4.0, 5.0]
    }
}