public class Main {
    public static void main(String[] args){
        Enclosure enc1 = new Enclosure();
        Panda panda1 = new Panda("po", 5);
        Panda panda2 = new Panda("po2", 5);
        enc1.addAnimal(panda1);
        enc1.addAnimal(panda2);
        enc1.describe();

        Enclosure enc2 = new Enclosure();
        enc2.describe();
    }
}