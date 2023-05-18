/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
public class FoodProduct extends Product {
    private String expiryDate;

    
    public FoodProduct(int id, String name, int price, String description, String expiryDate) {
        super(id, name, price, description);
        this.expiryDate = expiryDate;
    }

    public String getExpiryDate() {
        return this.expiryDate;
    }

    // public void setExpiryDate(String expiryDate){
    //     this.expiryDate = expiryDate;
    // }

    @Override
    public String getInfo() {
        return getId() + ": " + getName() + " - " + getPrice() + " - " + getExpiryDate() + " - " + getDescription();
    }
}
