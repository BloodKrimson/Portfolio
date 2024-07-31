import java.util.*;
public class PhoneNumber{
    public static void main(String [] args){
        long phoneNumber;
        Scanner i = new Scanner(System.in);
        System.out.print("Enter a 10 digit phone number: ");
        phoneNumber = i.nextLong();
        String pn = "(";
        pn += phoneNumber/10000000 + ") " + (phoneNumber/10000)%1000 
            + "-" + phoneNumber%10000;
        System.out.println(pn);
    }
}