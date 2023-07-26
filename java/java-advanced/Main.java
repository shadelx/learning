import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

class Main{

  public static void main(String[] args){
    int [] numbers = {1,2 ,3 ,4};
    String[] names = {"batman", "robin", "superman"};
    System.out.println("hello,there\n");

    for (int n : numbers) {
      System.out.println(n);
    }

    for (String name : names) {
      System.out.println(name);
    }

    Printer<Integer> printer = new Printer<>(23);
    printer.print();

    List<Integer> grades = new ArrayList<>();
    grades.add(74);
    grades.add(90);
    grades.add(100);
    System.out.println(grades);

    HashMap<String, String> heroes = new HashMap<>();
    heroes.put("batman", "bruce wayne");
    heroes.put("superman", "clark kent");
    heroes.put("wonderwoman", "diana prince");
    System.out.println(heroes);
    System.out.println(heroes.get("superman"));

  }
}
