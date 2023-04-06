import java.io.*;
import java.util.*;

public class Lion extends Animal {
    protected static final String species = "Lionus Maximus";
    public Lion(String name, int age) {
        super(name, age);
    }

    @Override
    public void eat() {
        System.out.println("nyam nyam makan ayam");
    }

    @Override
    public String getSpecies() {
        return species;
    }

    @Override
    public boolean isFriendly() {
        if (this.age <= 1) {
            return true;
        }
        
        return false;
    }
}