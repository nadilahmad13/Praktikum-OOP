public abstract class Card implements Calculable {
    protected Double number;

    public Card(){
        number = 0.0;
    }

    public Card(Double number){
        this.number = number;
    }
    
    public Double getNumber(){
        return number;
    }

    public void setNumber(Double number){
        this.number = number;
    }

    public abstract void printInfo();
}