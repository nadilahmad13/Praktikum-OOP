public class Worker implements Runnable {
    private Task executedTask;

    public Worker(Task task){
        this.executedTask = task;
    }

    @Override
    public void run() {
        try {
            Thread.sleep(executedTask.getTime());
            synchronized (executedTask) {
                executedTask.setStatus("done");
                executedTask.notify();
            }
        } catch (InterruptedException e) {
            System.out.println("Worker Error!");
        }
    }
}