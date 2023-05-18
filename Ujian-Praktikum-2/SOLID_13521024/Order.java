public class Order {
    private ShoppingCart shoppingCart;
    private PaymentProcessor paymentProcessor;

    public Order(ShoppingCart shoppingCart, PaymentProcessor paymentProcessor) {
        this.shoppingCart = shoppingCart;
        this.paymentProcessor = paymentProcessor;
    }

    public void checkout() {
        double totalPrice = shoppingCart.calculateTotalPrice();
        shoppingCart.printInfo();
        paymentProcessor.processPayment(totalPrice);
    }
}