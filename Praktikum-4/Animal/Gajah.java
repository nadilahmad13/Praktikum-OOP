/**
 * Gajah.java
 * Inheritance dari class Animal bernama Gajah
 * @author 13521024 Ahmad Nadil
 */
 
public class Gajah extends Animal {
    private int basePower;
    private int age;

    public Gajah(int basePower, int age) {
        super(4);
        this.basePower = basePower;
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public int getAnimalPower() {
        return 3 * (basePower + age + getNumberOfChildren());
    }
}
