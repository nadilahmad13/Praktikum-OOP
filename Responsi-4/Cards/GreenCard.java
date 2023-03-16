public class GreenCard extends Card {
    
    public GreenCard(Double number) {
        super(number);
    }

    @Override
    public void printInfo() {
        System.out.println("Kartu Hijau: " + number);
    }

    @Override
    public Double value() {
        return number + 0.1;
    }
}
