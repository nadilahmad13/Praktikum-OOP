import java.util.*;

public class ShoppingCart {
    private List<Product> shoppingCart = new ArrayList<>();

    public void addProductToShoppingCart(Product product) {
        shoppingCart.add(product);
    }

    public void removeProductFromShoppingCart(Product product) {
        shoppingCart.remove(product);
    }

    public double calculateTotalPrice() {
        double total = 0;
        for (Product product : shoppingCart) {
            total += product.getPrice() + product.calculateTax();
        }
        return total;
    }

    public void printInfo(){
        int i = 1;
        for (Product product : shoppingCart) {
            System.out.println(i + ". " + product.getName() + " $" + product.getPrice());
            i++;
        }
    }
}