package Generics;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Collections;

class Main {

  public static void main(String[] args) {
    int[] numbers = { 1, 2, 3, 4 };
    String[] names = { "batman", "robin", "superman" };
    System.out.println("hello,there\n");

    for (int n : numbers) {
      System.out.println(n);
    }

    for (String name : names) {
      System.out.println(name);
    }

    Printer<Integer> printer = new Printer<>(23);
    printer.print();

    
    Printer <Double> printer2 = new Printer<Double>(45.4);
    printer2.print();

    ArrayList<Integer> grades = new ArrayList<>();
    grades.add(200);
    grades.add(90);
    grades.add(100);
    System.out.println(grades);
    for (int grade : grades) {
        System.out.println(grade);
    }
    Collections.sort(grades);
    System.out.println(grades);
    Collections.reverse(grades);
    System.out.println(grades);

    HashMap<String, String> heroes = new HashMap<>();
    heroes.put("batman", "bruce wayne");
    heroes.put("superman", "clark kent");
    heroes.put("wonderwoman", "diana prince");
    System.out.println(heroes);
    System.out.println(heroes.get("superman"));

    HashMap<String, Integer> cities = new HashMap<>();

    cities.put("new york", 100);
    cities.put("santana", 101);
    cities.put("black", 102);

    System.out.println(cities);

    List<Integer> citiesByPopulation = new ArrayList<>(cities.values());
    Collections.sort(citiesByPopulation);
    System.out.println(citiesByPopulation);

  }
}
