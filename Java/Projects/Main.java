import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args){
        String name;
        CreateFile f = new CreateFile();
        System.out.print(f.getName());
        Scanner s = new Scanner(System.in);  
        System.out.print("\nWhat is your name? " );
        name = s.nextLine();
        System.out.print(name);
        

    }
}
