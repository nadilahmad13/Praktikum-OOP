abstract class Processor {
    public abstract boolean process1();
    public abstract boolean process2();
    public abstract void process3();
    public abstract void process4();
    public abstract void process5();

    public void check(){
        this.process3();
        this.process4();
        this.process5();
    }
    
    public void run(){
        if (this.process1()){
            this.process3();
        }

        if (this.process2()){
            this.process4();
        }

        if (!this.process1() && !this.process2()){
            this.process5();
        }
    }
}