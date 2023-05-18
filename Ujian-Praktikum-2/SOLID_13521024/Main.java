public class Main {
    public static void main(String[] args) {
        // Pembuatan Produk
        ElectronicProduct hp = new ElectronicProduct("HP", 100);
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 200);
        ElectronicProduct tv = new ElectronicProduct("TV", 300);
        FoodProduct apel = new FoodProduct("Apel", 10);
        FoodProduct aqua = new FoodProduct("Aqua", 5);

        // Pembuatan Cart
        ShoppingCart cart = new ShoppingCart();
        cart.addProductToShoppingCart(hp);
        cart.addProductToShoppingCart(laptop);
        cart.addProductToShoppingCart(tv);
        cart.addProductToShoppingCart(apel);
        cart.addProductToShoppingCart(aqua);
        System.out.println("Before remove : " + cart.calculateTotalPrice());

        // Tes Remove
        cart.removeProductFromShoppingCart(tv);
        System.out.println("After remove : " + cart.calculateTotalPrice());

        // Pembuatan Order
        DebitCard debit = new DebitCard();
        Order order = new Order(cart, debit);
        order.checkout();
    }
}
