import java.util.*; 

class PositiveNegative { 

    public static void main(String[] args) { 

        char c='y'; 

        while(c=='y'){ 

            System.out.println("Enter a year-"); 

            int n; 

            Scanner sc= new Scanner(System.in); 

            n=sc.nextInt(); 

            if(((n%4==0)&&(n%100!=0)) || (n%400==0)){ 

                System.out.println("Leap Year!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else{ 

                System.out.println("Not a Leap Year!!!"); 

                 System.out.println("-----------------------------------------"); 

            } 

            System.out.println("Do you want to check more Years? enter y for yes and n for NO."); 

            c=sc.next().charAt(0); 

            System.out.println("____________________________________________"); 

        } 

    } 

} 
