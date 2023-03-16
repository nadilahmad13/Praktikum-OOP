/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 4   : Java
 * File         : BlueCard.java
*/
public class BlueCard extends Card {
    
    public BlueCard(Double number) {
        super(number);
    }

    @Override
    public void printInfo() {
        System.out.println("Kartu Biru: " + number);
    }

    @Override
    public Double value() {
        return number + 0.2;
    }
}
