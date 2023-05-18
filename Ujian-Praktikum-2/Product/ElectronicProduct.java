/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
public class ElectronicProduct extends Product {
    private String warrantyPeriod;

    public ElectronicProduct(int id, String name, int price, String description, String warrantyPeriod) {
        super(id, name, price, description);
        this.warrantyPeriod = warrantyPeriod;
    }

    public String getWarrantyPeriod() {
        return this.warrantyPeriod;
    }

    // public void setWarrantyPeriod(String warrantyPeriod){
    //     this.warrantyPeriod = warrantyPeriod;
    // }

    @Override
    public String getInfo() {
        return getId() + ": " + getName() + " - " + getPrice() + " - " + getWarrantyPeriod() + " - " + getDescription();
    }
}
