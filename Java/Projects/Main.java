import java.util.*;
import java.io.*;
import java.nio.file.Path;
import java.nio.file.Paths;


public class Main {
    static final Path currRelativePath = Paths.get("");
    static final String subFile = "\\Login\\login.txt";
    public static void main(String[] args){
        
        String currAbsolutePathString = currRelativePath.toAbsolutePath().toString();
        System.out.println("Current absolute path is - " + currAbsolutePathString);

        currAbsolutePathString += subFile;

        System.out.println(currAbsolutePathString);

        List<String> Uinfo = new ArrayList<String>();
        int length = Uinfo.size();
        System.out.println(length);
        String name, un, pswd, email;
        // CreateFile f = new CreateFile();
        // System.out.print(f.getName());
        // Scanner s = new Scanner(System.in);  
        // System.out.print("\nWhat is your name? " );
        // name = s.nextLine();
        // System.out.print(name);
        

    }
}
