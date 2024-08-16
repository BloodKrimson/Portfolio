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
        System.out.print("Would you like to enter a card? ");
        String suitName = "", cardIdentity = "", userInput = scan.next();
        int cardNumber;
        char userChoice = userInput.charAt(0);
        if(userChoice == 'Y'){
            System.out.print("Enter a card number: ");
            cardNumber = scan.nextInt();
        }else{
            cardNumber = (int)(Math.random()*52);
            System.out.println("Random Number: " + cardNumber);
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

        sid = cardNumber%13;
        switch(sid){
            case 0:
            cardIdentity = "Ace";
            break;
            case 1:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 2:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 3:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 4:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 5:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 6:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 7:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 8:
            sid++;
            cardIdentity = Integer.toString(sid);
            break;
            case 10:
            cardIdentity = "Jack";
            break;
            case 11:
            cardIdentity = "Queen";
            break;
            case 12:
            cardIdentity = "King";
            break;
        }

        System.out.println("You picked the " + cardIdentity + " of " + suitName + "!");
    }
}