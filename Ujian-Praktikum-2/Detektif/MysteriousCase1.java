public class MysteriousCase1 {
    public Integer mysteryA1 = 0;
    public static Integer mysteryA2 = 1;
    private static Integer mysteryA3 = 0;
    private final String mysteryA4 = "0";

    public Integer mysteryM1() {
        return mysteryA1 + 1;
    }

    public static Integer mysteryM2() {
        return mysteryA2 + 1;
    }

    private static Integer mysteryM3(Integer a) {
        return a;
    }

    private static Integer mysteryM4(Integer a, Integer b) {
        return a + b;
    }

    private final String mysteryM5() {
        return mysteryA4 + "1";
    }   
}