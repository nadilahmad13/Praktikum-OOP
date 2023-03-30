/**
 * CreditCard.java
 * Implementasi class CreditCard
 * @author 13521024 Ahmad Nadil
 */

class CreditCard implements IPaymentMethod {
    public static final double defaultLimit = 2500;
    public static final double defaultInterest = 0.0005;

    private double monthlyBalance;
    private double monthlyLimit;
    private double unpaidBalance;
    private double dailyInterest;

    // TODO
    // Default constructor, inisialisasi monthlyBalance dan unpaidBalance menjadi 0
    // Inisialisasi monthlyLimit dan dailyInterest menjadi defaultLimit dan defaultInterest
    public CreditCard() {
        this.monthlyBalance = 0;
        this.unpaidBalance = 0;
        this.monthlyLimit = defaultLimit;
        this.dailyInterest = defaultInterest;
    }
    // TODO
    // inisialisasi monthlyBalance dan unpaidBalance menjadi 0
    // Inisialisasi monthlyLimit dan dailyInterest sesuai parameter
    public CreditCard(double limit, double interest) {
        this.monthlyBalance = 0;
        this.unpaidBalance = 0;
        this.monthlyLimit = limit;
        this.dailyInterest = interest;
    }

    // TODO
    // Getter
    public double getMonthlyBalance() {
        return this.monthlyBalance;
    }
    public double getMonthlyLimit() {
        return this.monthlyLimit;
    }
    public double getUnpaidBalance() {
        return this.unpaidBalance;
    }
    public double getDailyInterest() {
        return this.dailyInterest;
    }

    // TODO
    // Memindahkan monthlyBalance ke unpaidBalance
    // I.S. sembarang
    // F.S.
    // unpaidBalance = unpaidBalance awal + monthlyBalance awal
    // monthlyBalance = 0
    public void endBillingCycle() {
        this.unpaidBalance += monthlyBalance;
        this.monthlyBalance = 0;
    }
    // TODO
    // Menerapkan dailyInterest terhadap unpaidBalance
    // I.S. sembarang
    // F.S. unpaidBalance = unpaidBalance + unpaidBalance * dailyInterest
    public void applyInterest() {
        this.unpaidBalance = this.unpaidBalance + (this.unpaidBalance * this.dailyInterest);
    }
    // TODO
    // Melakukan pembayaran dengan kartu kredit
    // Apabila monthlyBalance + price melebihi monthlyLimit, 
    // mengembalikan false dan semua atribut sesuai kondisi awal
    // Apabila tidak melebihi monthlyLimit, price ditambahkan ke monthlyBalance dan mengembalikan true
    public boolean pay(double price) {
        if (monthlyBalance + price > monthlyLimit)
        {
            return false;
        }
        this.monthlyBalance += price;
        return true;
    }
    // TODO
    // Mencicil/melunaskan kartu kredit
    // Apabila amount melebih monthlyBalance + unpaidBalance, mengembalikan false dan
    // semua atribut sesuai kondisi awal
    // Apabila amount tidak melebihi monthlyBalance + unpaidBalance,
    // melunaskan monthlyBalance terlebih dahulu kemudian unpaidBalance
    // Contoh:
    // I.S.
    // monthlyBalance = 50
    // unpaidBalance = 50

    // payOffBalance(49)

    // F.S.
    // monthlyBalance = 1
    // unpaidBalance = 50

    // I.S.
    // monthlyBalance = 50
    // unpaidBalance = 50

    // payOffBalance(75)

    // F.S.
    // monthlyBalance = 0
    // unpaidBalance = 25
    public boolean payOffBalance(double amount) {
        if (amount > monthlyBalance + unpaidBalance){
            return false;
        }
        if (amount <= monthlyBalance){
            monthlyBalance -= amount;
        }
        else if (amount > monthlyBalance){
            amount -= monthlyBalance;
            monthlyBalance = 0;
            unpaidBalance -= amount;
        }
        return true;
    }
}