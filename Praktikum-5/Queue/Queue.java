/* 
 * NIM          : 13521024
 * Nama         : Ahmad Nadil
 * Praktikum 5  : Generic & Java API
 * File         : Queue.java
*/

import java.util.ArrayList;

public class Queue<T>{
	private ArrayList<T> data;
	private int lastElmIdx, size;
	private final static int DEFAULT_QUEUE_SIZE = 500;

	// Instantiate with default size
	public Queue(){
		this(DEFAULT_QUEUE_SIZE);
	}

	// Instantiate with size n
	public Queue(int n){
		data = new ArrayList<T>(n);
		size = n;
		lastElmIdx = -1;
	}

	// Copy Queue
	public Queue (final Queue<T> q){
		size = q.size;
		lastElmIdx = q.lastElmIdx;
		data = new ArrayList<T>(q.data);
	}

	public boolean push(T t){
		if(isFull()){
			return false;
		}
		data.add(t);
		lastElmIdx++;
		return true;
	}

	public T pop(){
		// if(isEmpty()){
			// throw new Exception("Queue is empty");
		// }
		T firstElement = data.get(0);
		data.remove(0);
		lastElmIdx--;
		return firstElement;
	}

	public boolean isEmpty(){
		return lastElmIdx == -1;
	}

	public boolean isFull(){
		return lastElmIdx == size - 1;
	}
}
