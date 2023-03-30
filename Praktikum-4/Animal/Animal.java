/**
 * Animal.java
 * Parent Class Animal
 * @author 13521024 Ahmad Nadil
 */

public abstract class Animal implements Comparable<Animal> {
    protected int numberOfLegs;
    protected int children;

    public Animal(int numberOfLegs) {
        this.numberOfLegs = numberOfLegs;
        this.children = 0;
    }

    public int getNumberOfLegs() {
        return numberOfLegs;
    }

    public int getNumberOfChildren() {
        return children;
    }

    public void increaseChild(int inc) {
        children += inc;
    }

    public abstract int getAnimalPower();

    @Override
    public int compareTo(Animal a) {
        if (this.getAnimalPower() == a.getAnimalPower()) {
            return 0;
        } else if (this.getAnimalPower() > a.getAnimalPower()) {
            return 1;
        } else {
            return -1;
        }
    }
}
