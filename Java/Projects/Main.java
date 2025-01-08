import java.util.*;
import java.io.*;
import java.nio.file.Path;
import java.nio.file.Paths;
public class Main {
    public static void main(String[] args){
        Path currRelativePath = Paths.get("");
        String currAbsolutePathString = currRelativePath.toAbsolutePath().toString();
        System.out.println("Current absolute path is - " + currAbsolutePathString);
        // String name;
        // CreateFile f = new CreateFile();
        // System.out.print(f.getName());
        // Scanner s = new Scanner(System.in);  
        // System.out.print("\nWhat is your name? " );
        // name = s.nextLine();
        // System.out.print(name);
        

    }
}
