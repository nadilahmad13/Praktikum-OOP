import java.util.*;
public class Main {
    public static void main(String[] args) {
        ElectronicProduct tv = new ElectronicProduct(1, "TV", 10000000, "TV 32 inch", "1 tahun");
        ElectronicProduct hp = new ElectronicProduct(2, "HP", 5000000, "HP Samsung", "2 tahun");
        FoodProduct sosis = new FoodProduct(3, "Sosis", 10000, "Sosis ayam", "1 minggu");
        FoodProduct roti = new FoodProduct(4, "Roti", 5000, "Roti tawar", "1 minggu");
        FashionProduct baju = new FashionProduct(5, "Baju", 100000, "Baju kemeja", "L");
        FashionProduct celana = new FashionProduct(6, "Celana", 150000, "Celana jeans", "32");

        System.out.println(tv.getInfo());
        System.out.println(hp.getInfo());
        System.out.println(sosis.getInfo());
        System.out.println(roti.getInfo());
        System.out.println(baju.getInfo());
        System.out.println(celana.getInfo());

        ProductCatalog pc = new ProductCatalog(new ArrayList<Product>());
        pc.addProduct(tv);
        pc.addProduct(hp);
        pc.addProduct(sosis);
        pc.addProduct(roti);
        pc.addProduct(baju);
        pc.addProduct(celana);

        System.out.println(pc.removeProduct(1).getInfo());


        System.out.println(pc.getProduct(2).getInfo());
        pc.updateProduct(2, "HP BARU BOS", 6969, "wetetetete");
        System.out.println(pc.getProduct(2).getInfo());

        System.out.println("==========================");
        List<Product> list = pc.getAllProduct();
        for (Product product : list) {
            System.out.println(product.getInfo());
        }
    }
}
