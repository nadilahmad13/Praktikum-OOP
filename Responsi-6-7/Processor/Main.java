public class Main {
    public static void main(String[] args){
        Processor pA = new ImplementorA();
        pA.check();
        pA.run();

        Processor pB = new ImplementorB();
        pB.check();
        pB.run();

        Processor pC = new ImplementorC();
        pC.check();
        pC.run();
    }
}