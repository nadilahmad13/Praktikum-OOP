/**
 * Elang.java
 * Inheritance dari class Animal bernama Elang
 * @author 13521024 Ahmad Nadil
 */
 
public class Elang extends Animal {
    private int basePower;
    private int jumlahTelur;

    public Elang(int basePower) {
        super(2);
        this.basePower = basePower;
        this.jumlahTelur = 0;
    }

    public int getJumlahTelur() {
        return jumlahTelur;
    }

    public void bertelur() {
        jumlahTelur++;
    }

    public int getAnimalPower() {
        return basePower * getNumberOfChildren() - jumlahTelur;
    }
}
