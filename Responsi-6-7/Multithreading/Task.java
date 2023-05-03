public class Task {
    private int time;
    private String status;
    private String name;

    public Task(int time, String name, String status){
        this.time = time;
        this.status = status;
        this.name = name;
    }

    public void setTime(int time){
        this.time = time;
    }

    public int getTime(){
        return this.time;
    }

    public void setStatus(String status){
        this.status = status;
    }

    public String getStatus(){
        return this.status;
    }

    public String getName(){
        return this.name;
    }
}