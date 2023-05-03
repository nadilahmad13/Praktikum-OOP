/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : WorkerV2.java
*/

import java.util.*;

public class WorkerV2 implements Runnable {

    private List<Task> tasks;

    public WorkerV2(){
        //TODO: Fill with the default constructor of this class.
        this.tasks = new ArrayList<Task>();
    };

    public void addTask(Task newTask){
        //TODO: Fill with the operation that will add new task to tasks.
        this.tasks.add(newTask);
    }

    @Override
    public void run() {
        try {
            //TODO: Fill with the operation that will process the tasks. Hint: the operation is exactly
            // the same with the operation that exist on Worker.java with a little improvement;)
            for (Task task : tasks) {
                Thread.sleep(task.getTime());
                synchronized (task) {
                    task.setStatus("done");
                    task.notify();
                }
            }
        } catch (InterruptedException e) {
            //TODO: Fill with the same error message on the Worker.java
            System.out.println("Worker Error!");
        }
    }
    
}