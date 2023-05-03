import java.util.*;
public class Main {
    public static void main(String[] args) {
        Reflection reflection = new Reflection();
        try {
            System.out.println(reflection.ghostMethods());
            System.out.println(reflection.sumGhost());
            System.out.println(reflection.letterGhost());
            List<Secret> sl = new ArrayList<Secret>();
            sl.add(new Secret("a", "b"));
            sl.add(new Secret("c", "d"));

            System.out.println(reflection.findSecretId(sl, "a"));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
