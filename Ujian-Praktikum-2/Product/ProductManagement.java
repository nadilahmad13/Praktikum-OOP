import java.util.*;;
/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
public interface ProductManagement {
    public void addProduct(Product product);
    public Product removeProduct(int id);
    public void updateProduct(int id, String name, int price, String description);
    public List<Product> getAllProduct();
    public Product getProduct(int id);
}
