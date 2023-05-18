public class CreditCard implements PaymentProcessor {
    @Override
    public void processPayment(double amount){
        // Proses pembayaran dengan kartu kredit
        System.out.println("Payment processed successfully with credit card: $" + amount);
    }
}
