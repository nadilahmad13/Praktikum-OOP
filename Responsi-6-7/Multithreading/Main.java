import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Task task1 = new Task(4000, "Task 1", "not started");
        Task task2 = new Task(2000, "Task 2", "not started");
        Task task3 = new Task(7000, "Task 3", "not started");

        Client c1 = new Client(task1);
        new Thread(c1, "c1").start();
        // Worker w1 = new Worker(task1);
        // new Thread(w1, "w1").start();

        Client c2 = new Client(task2);
        new Thread(c2, "c2").start();
        // Worker w2 = new Worker(task2);
        // new Thread(w2, "w2").start();

        Client c3 = new Client(task3);
        new Thread(c3, "c3").start();
        // Worker w3 = new Worker(task3);
        // new Thread(w3, "w3").start();

        WorkerV2 w = new WorkerV2();
        w.addTask(task1);
        w.addTask(task3);
        w.addTask(task2);
        new Thread(w, "WorkerV2").start();
    }
}