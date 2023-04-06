/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 5   : Generic & Java API
 * File         : Pasukan.java
*/

import java.util.*;

public class Pasukan <T extends List<Integer>> {
    private T list;
    private int n;

    public Pasukan(T list, int n) {
        this.n = n;
        this.list = list;
    }

    public void reset(){
        list.clear();
        for (int i = 0; i < n; i++) {
            list.add(0);
        }
    }

    public long get(int idx){
        reset();
        long start = Util.getTime();
        int value = list.get(idx);
        long finish = Util.getTime();
        return finish - start;
    }

    public long del(int idx, int count){
        reset();
        long start = Util.getTime();
        for (int i = 0; i < count; i++) {
            list.remove(idx);
        }
        long finish = Util.getTime();
        return finish - start;
    }
}
