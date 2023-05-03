/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : ImplementorC.java
*/

public class ImplementorC extends Processor {

    @Override
    public boolean process1() {
        return false;
    }

    @Override
    public boolean process2() {
        return false;
    }

    @Override
    public void process3() {
        System.out.println("Implementor C running process 3.");
        process1();
    }

    @Override
    public void process4() {
        System.out.println("Implementor C running process 4.");
        process2();
    }

    @Override
    public void process5() {
        System.out.println("Implementor C running process 5.");
    }
}