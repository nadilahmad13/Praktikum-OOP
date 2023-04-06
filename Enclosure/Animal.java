import java.io.*;
import java.util.*;

public abstract class Animal {
    protected String name;
    protected int age;
    
    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return this.name;
    }

    public int getAge() {
        return this.age;
    }

    abstract public void eat();

    abstract public String getSpecies();

    abstract public boolean isFriendly();
}