/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : ImplementorB.java
*/

public class ImplementorB extends Processor {

    @Override
    public boolean process1() {
        return false;
    }

    @Override
    public boolean process2() {
        return true;
    }

    @Override
    public void process3() {
        System.out.println("Implementor B running process 2.");
        process1();
    }

    @Override
    public void process4() {
        System.out.println("Implementor B running process 3.");
        process2();
    }

    @Override
    public void process5() {
        System.out.println("Implementor B running process 4.");
    }
}