/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Praktikum 5  : Generic & Java API
 * File         : Couple.java
*/

public class Couple<K,V>{
    private K key;
    private V value;

    public Couple(K k, V v){
        this.key = k;
        this.value = v;
    }
  
    public K getKey(){
        return this.key;
    }

    public V getVal(){
        return this.value;
    }

    public void setKey(K k){
        this.key = k;
    }

    public void setVal(V v){
        this.value = v;
    }

    public boolean isEqual(Couple c){
        return this.key == c.getKey() && this.value == c.getVal();
    }

    public int nearEQ(Couple c){
        if(this.isEqual(c)){
           return 3;
        } else if (this.value==c.getVal()){
           return 2;
        } else if (this.key==c.getKey()){
           return 1;
        } else {
           return 0;
        }
    }
}
