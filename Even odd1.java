import java.util.*; 

class EvenOdd { 

    public static void main(String[] args) { 

        char c='y'; 

        while(c=='y'){ 

            System.out.println("Enter an number-"); 

            int n; 

            Scanner sc= new Scanner(System.in); 

            n=sc.nextInt(); 

            if(n%2==0){ 

                System.out.println("Even Number!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else{ 

                System.out.println("Odd Number!!!"); 

                 System.out.println("-----------------------------------------"); 

            } 

            System.out.println("Do you want to check more numbers? enter y for yes and n for NO."); 

            c=sc.next().charAt(0); 

            System.out.println("____________________________________________"); 

        } 

    } 

} 
