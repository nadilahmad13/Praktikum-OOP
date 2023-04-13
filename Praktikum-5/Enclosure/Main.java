public class Main{
    public static void main(String[] args){
        Zoo myZoo = new Zoo();
        Enclosure lions = new Enclosure();
        System.out.println(myZoo.getTotalAnimalCount());
        Lion a = new Lion("haidar",10);
        lions.addAnimal(a);
        myZoo.addEnclosure(lions);
        System.out.println(myZoo.getEnclosureCount());
        System.out.println(myZoo.getTicketPrice());
        myZoo.updateTicketPrice();
        System.out.println(myZoo.getTicketPrice());
        System.out.println(myZoo.getTotalAnimalCount());
        Enclosure pandas = new Enclosure();
        Panda b = new Panda("asi",10);
        Panda c = new Panda("asd",10);
        pandas.addAnimal(b);
        pandas.addAnimal(c);
        myZoo.addEnclosure(pandas);
        System.out.println(myZoo.getEnclosureCount());
        System.out.println(myZoo.getTicketPrice());
        myZoo.updateTicketPrice();
        System.out.println(myZoo.getTicketPrice());
        System.out.println(myZoo.getTotalAnimalCount());
        System.out.println(myZoo.getEnclosureCount());
    }
}