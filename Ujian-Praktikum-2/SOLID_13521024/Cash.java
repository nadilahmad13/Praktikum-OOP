public class Cash implements PaymentProcessor {
    @Override
    public void processPayment(double amount){
        // Proses pembayaran dengan cash
        System.out.println("Payment processed successfully with cash: $" + amount);
    }
}
