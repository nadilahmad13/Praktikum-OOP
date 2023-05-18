import java.util.*;

public class Main {
    public static void main(String[] args) {
        List list = new ArrayList();
        list.add(21);
        list.add(3.4f);
        list.add(true);
        list.add("TEST");
        list.add('c');
        Box box = new Box(list);
        System.out.println(BoxOperator.getContents(box, Object.class));
        
    }
}
