public class Client implements Runnable {
    private Task trackedTask;

    public Client(Task task){
        this.trackedTask = task;
    }

    @Override
    public void run() {
        String name = Thread.currentThread().getName();
        synchronized (trackedTask) {
            try{
                trackedTask.wait();
                System.out.println(name + " notified that task: " + trackedTask.getName() + " is " + trackedTask.getStatus() + "." );
            }catch(InterruptedException e){
                System.out.println("Client Error!");
            }
        }
    }
    
}