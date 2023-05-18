/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
import java.util.*;

public class ProductCatalog implements ProductManagement {
    private List<Product> productList;

    public ProductCatalog(List<Product> productList) {
        this.productList = productList;
    }

    @Override
    public void addProduct(Product product) {
        this.productList.add(product);
    }

    @Override
    public Product removeProduct(int id) {
        for (Product product : productList) {
            if (product.getId() == id) {
                this.productList.remove(product);
                return product;
            }
        }
        return null;
    }

    @Override
    public void updateProduct(int id, String name, int price, String description) {
        boolean productFound = false;
        for (Product product : productList) {
            if (product.getId() == id) {
                product.setName(name);
                product.setPrice(price);
                product.setDescription(description);
                productFound = true;
                break;
            }
        }
        if (!productFound) {
            System.out.println("Produk dengan id " + id + " tidak ditemukan.");
        }
    }

    @Override
    public List<Product> getAllProduct() {
        return this.productList;
    }

    @Override
    public Product getProduct(int id) {
        for (Product product : this.productList) {
            if (product.getId() == id) {
                return product;
            }
        }
        return null;
    }
}
