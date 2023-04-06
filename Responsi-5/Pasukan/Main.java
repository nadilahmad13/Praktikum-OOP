import java.util.ArrayList;
import java.util.LinkedList;

public class Main {
  public static void main(String[] args) {
    int n = 100000; // bereksperimenlah dengan ini!
    Pasukan array = new Pasukan(new ArrayList<Integer>(), n);
    Pasukan linked = new Pasukan(new LinkedList<Integer>(), n);

    System.out.println("Get linked: " + linked.get(n / 2));
    System.out.println("Get array: " + array.get(n / 2));

    System.out.println("Del1 linked: " + linked.del(0, n));
    System.out.println("Del1 array: " + array.del(0, n));

    System.out.println("Del2 linked: " + linked.del(n / 2, n / 4));
    System.out.println("Del2 array: " + array.del(n / 2, n / 4));
  }
}