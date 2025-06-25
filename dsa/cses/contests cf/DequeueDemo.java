import java.util.ArrayDeque;

import java.util.Deque;

public class DequeueDemo {

public static void main(String[] args) {

Deque<String> d = new ArrayDeque<>();

// Adding elements from both ends

d.addFirst("Apple"); // Head

d.addLast("Banana");

d.addFirst("Orange");

d.addLast("Mango");

System.out.println("d elements: " + d);

// Retrieving elements without removal

String first = d.peekFirst(); // Get head without removing

String last = d.peekLast(); // Get tail without removing

System.out.println("First element: " + first);

System.out.println("Last element: " + last);

// Removing elements from both ends

String removedFirst = d.pollFirst(); // Remove and get head

String removedLast = d.pollLast(); // Remove and get tail

System.out.println("Removed first: " + removedFirst);

System.out.println("Removed last: " + removedLast);

System.out.println("Deque after removals: " + d);

}

}