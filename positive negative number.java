import java.util.*; 

class PositiveNegative { 

    public static void main(String[] args) { 

        char c='y'; 

        while(c=='y'){ 

            System.out.println("Enter a number-"); 

            double n; 

            Scanner sc= new Scanner(System.in); 

            n=sc.nextDouble(); 

            if(n>=0){ 

                System.out.println("Positive Number!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else{ 

                System.out.println("Negative Number!!!"); 

                 System.out.println("-----------------------------------------"); 

            } 

            System.out.println("Do you want to check more numbers? enter y for yes and n for NO."); 

            c=sc.next().charAt(0); 

            System.out.println("____________________________________________"); 

        } 

    } 

} 
