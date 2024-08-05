/**
 * Brandon Angos
 * 8/4/2024
 * CSE7 Lab 7 
 */

import java.util.*;
import java.lang.Math;

public class Cards{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter 'Y' to manually enter a card from the deck or 'N' to randomly generate a card: ");
        String suitName, cardIdentity, userInput = scan.next();
        int cardNumber;
        char userChoice = userInput.charAt(0);
        if(userChoice == 'Y'){
            System.out.print("Enter an integer between 0 to 51: ");
            cardNumber = scan.nextInt();
        }else{
            cardNumber = (int)(Math.random()*52);
        }
        int sid = cardNumber/13;
        if(sid == 0){
            suitName = "diamonds";
        }else if(sid == 1){
            suitName = "clubs";
        }else if(sid == 2){
            suitName = "hearts";
        }else{
            suitName = "spades";
        }

    }
}