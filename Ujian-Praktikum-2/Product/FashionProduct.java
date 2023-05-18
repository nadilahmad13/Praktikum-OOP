/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
public class FashionProduct extends Product {
    private String size;
    
    public FashionProduct(int id, String name, int price, String description, String size) {
        super(id, name, price, description);
        this.size = size;
    }

    public String getSize() {
        return this.size;
    }

    // public void setSize(String size){
    //     this.size = size;
    // }

    @Override
    public String getInfo() {
        return getId() + ": " + getName() + " - " + getPrice() + " - " + getSize() + " - " + getDescription();
    }
}
