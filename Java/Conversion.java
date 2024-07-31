import java.util.Scanner;

public class Conversion {
   public static void main(String[] args){
    float mult = (float) 2.205;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number of kilos: ");
        float kg = s.nextFloat();
        float lbs = kg * mult;
        System.out.println(kg + " kg is " + lbs + " pounds");
   }
}
