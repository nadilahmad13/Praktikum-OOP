public class Comparator {
    public static boolean isObj1BiggerThanObj2(Calculable c1, Calculable c2){
        return c1.value() > c2.value();
    }

    public static boolean isObj1LowerThanObj2(Calculable c1, Calculable c2){
        return c1.value() < c2.value();
    }

    public static boolean isObj1EqualToObj2(Calculable c1, Calculable c2){
        return c1.value().equals(c2.value());
    }
}