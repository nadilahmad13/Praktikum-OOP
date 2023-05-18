public class DebitCard implements PaymentProcessor {
    @Override
    public void processPayment(double amount){
        // Proses pembayaran dengan kartu debit
        System.out.println("Payment processed successfully with debit card: $" + amount);
    }
}
