import java.util.Scanner;
public class switchcase{
 public static void main(String[] args){
  int choice;
  System.out.println("choose one: 1. Yellow\t 2. Blue\t 3. Purple");
  Scanner s= new Scanner(System.in);
  choice = s.nextInt();
  switch(choice)
  {
    case 1 : System.out.println("You choose Yellow");
              break;
    case 2 : System.out.println("You choose Blue");
              break;
    case 3 : System.out.println("You choose Purple");
              break;
    default : System.out.println("Invalid choice");
    }
  }
 } 
