public class FoodProduct extends Product {
    public FoodProduct(String name, double price) {
        super(name, price);
    }

    @Override
    public double calculateTax() {
        return 0; // Tidak ada pajak untuk produk makanan
    }
}