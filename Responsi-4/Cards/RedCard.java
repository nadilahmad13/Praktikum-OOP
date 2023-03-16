/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 4   : Java
 * File         : RedCard.java
*/
public class RedCard extends Card {
    
    public RedCard(Double number) {
        super(number);
    }

    @Override
    public void printInfo() {
        System.out.println("Kartu Merah: " + number);
    }

    @Override
    public Double value() {
        return number + 0.4;
    }
}
