package com.example.demo;

import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;
// import java.text.ParseException;

// import org.json.simple.JSONArray;
// import org.json.simple.JSONObject;
// import org.json.simple.parser.JSONParser;

import java.lang.StringBuilder;

public class App 
{
    public static void main( String[] args ) throws org.json.simple.parser.ParseException{

        try{
            String url_name = "https://dummyjson.com/products/1";
            URL url = new URL(url_name);
            HttpURLConnection conn = (HttpURLConnection) url.openConnection();
            conn.setRequestMethod("GET");
            conn.connect();

            int respondeCode = conn.getResponseCode();

            if(respondeCode != 200){
                throw new RuntimeException("HttpResponseCode: " + respondeCode);
            }else {
                StringBuilder informationString = new StringBuilder();
                Scanner scanner = new Scanner(url.openStream());

                while(scanner.hasNext()){
                    informationString.append(scanner.nextLine());
                }
                scanner.close();

                System.out.println(informationString);


                //JSON sumple library
                
            }


        }catch(IOException e){
            System.err.println("Error creating HTTP connection");
            
        }
    }
}
