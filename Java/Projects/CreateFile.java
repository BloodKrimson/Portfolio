import java.io.*;

public class CreateFile {
    String name;
    public CreateFile(){
        name = "file.txt";
        createFile(name);
    }
    public CreateFile(String n){
        name = n;
        createFile(n);
    }

    public String getName(){
        return name;
    }
    public void createFile(String n){
        try {
            File myObj = new File(n);
            if (myObj.createNewFile()) {
              System.out.println("File created: " + myObj.getName());
            } else {
              System.out.println("File already exists.");
            }
          } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
          }
    }
}
