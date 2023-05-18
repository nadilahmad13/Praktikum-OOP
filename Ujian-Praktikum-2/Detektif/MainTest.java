public class MainTest {
    public static void printIfnEmpty(String str) {
        if (str != null && !str.isEmpty()) {
            System.out.println(str);
        }
    }
    public static void main(String[] args) {
        Detective detective = new Detective();
        MysteriousCase1 mysteriousCase1 = new MysteriousCase1();
        
        printIfnEmpty("Investigate secret attribute:");
        // Should print "0"
        printIfnEmpty(detective.investigateSecretAttribute("mysteryA1", true, mysteriousCase1));
        // Should print "Illegal Access Exception"
        printIfnEmpty(detective.investigateSecretAttribute("mysteryA3", false,  mysteriousCase1));
        
        
        System.out.println();
        printIfnEmpty("Investigate secret method:");
        // Should print "1"
        printIfnEmpty(detective.investigateSecretMethod("mysteryM1", false, mysteriousCase1));
        // Should print "2"
        printIfnEmpty(detective.investigateSecretMethod("mysteryM2",false,  mysteriousCase1));

        System.out.println();
        printIfnEmpty("Investigate secret method with parameter:");
        // Should print "No such method exception"
        printIfnEmpty(
            detective.investigateSecretMethodWithParam(
                "mysteryM3", 
                false, 
                mysteriousCase1,
                0, 
                Integer.class
            )
        );
        // Should print {random number}
        printIfnEmpty(
            detective.investigateSecretMethodWithParam(
                "mysteryM4", 
                true, 
                mysteriousCase1, 
                2, 
                Integer.class
            )
        );

        // For the following cases, print are specified in the comments below the code
        System.out.println();
        printIfnEmpty("Print all attribute signature:");
        detective.printAllAttributeSignature(mysteriousCase1);

        System.out.println();
        printIfnEmpty("Print all method signature:");
        detective.printAllMethodSignature(mysteriousCase1);

    }
}

////==== Start of expected output
// Investigate secret attribute:
// 0
// Illegal Access Exception
// 
// Investigate secret method:
// 1
// 2
// 
// Investigate secret method with parameter:
// No Such Method Exception
// {random_number}
// 
// Print all attribute signature:
// public class java.lang.Integer mysteryA1
// public static class java.lang.Integer mysteryA2
// private static class java.lang.Integer mysteryA3
// private final class java.lang.String mysteryA4
// 
// Print all method signature:
// public static class java.lang.Integer mysteryM2()
// public class java.lang.Integer mysteryM1()
// private static class java.lang.Integer mysteryM3(class java.lang.Integer)
// private static class java.lang.Integer mysteryM4(class java.lang.Integer, class java.lang.Integer)
// private final class java.lang.String mysteryM5()
// 
////==== End of expected output

////==== Start of additional explanation
// Integer Parameter: 10
// 3 sebagai attribute (MysteryA1, MysteryA2, MysteryA3)
// 3 sebagai parameter dari method (MysteryM3(1), MysteryM4(2))
// 4 sebagai return value dari method (MysteryM1, MysteryM2, MysteryM3, MysteryM4)
// String Parameter: 2
// 1 sebagai attribute dan 1 sebagai return value dari method mysteryM5
////==== End of additional explanation