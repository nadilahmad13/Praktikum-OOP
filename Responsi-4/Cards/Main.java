public class Main {
    public static void main(String[] args){
        Comparator comparator = new Comparator();
        RedCard redCard9 = new RedCard(9.0);
        YellowCard yellowCard10 = new YellowCard(10.0);
        YellowCard yellowCard9 = new YellowCard(9.0);
        System.out.println(comparator.isObj1BiggerThanObj2(redCard9, yellowCard10));
        System.out.println(comparator.isObj1EqualToObj2(redCard9, yellowCard9));
        System.out.println(comparator.isObj1LowerThanObj2(redCard9, yellowCard9));
        yellowCard10.printInfo();

        GreenCard green15 = new GreenCard(15.0);
        YellowCard yellow7  = new YellowCard(7.0);
        RedCard red15 = new RedCard(15.0);

        System.out.println(comparator.isObj1BiggerThanObj2(green15, yellow7));
        System.out.println(comparator.isObj1BiggerThanObj2(green15, red15));
    }
}
