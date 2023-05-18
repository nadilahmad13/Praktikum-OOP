/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
public abstract class Product{
    private int id;
    private String name;
    private int price;
    private String description;

    public Product(int id, String name, int price, String description){
        this.id = id;
        this.name = name;
        this.price = price;
        this.description = description;
    }

    public int getId(){
        return this.id;
    }

    public void setId(int id){
        this.id = id;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getPrice(){
        return this.price;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public String getDescription(){
        return this.description;
    }

    public void setDescription(String description){
        this.description = description;
    }

    public abstract String getInfo();
}