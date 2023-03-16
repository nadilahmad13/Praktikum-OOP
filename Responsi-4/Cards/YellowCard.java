/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Responsi 4   : Java
 * File         : YellowCard.java
*/
public class YellowCard extends Card {
    
    public YellowCard(Double number) {
        super(number);
    }

    @Override
    public void printInfo() {
        System.out.println("Kartu Kuning: " + number);
    }

    @Override
    public Double value() {
        return number + 0.3;
    }
}
