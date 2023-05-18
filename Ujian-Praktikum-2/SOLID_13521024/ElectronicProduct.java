public class ElectronicProduct extends Product {

    public ElectronicProduct(String name, double price) {
        super(name, price);
    }

    public double calculateTax() {
        return price * 0.2;
    }
}
