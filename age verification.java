import java.util.*; 

class AgeVerification { 

    public static void main(String[] args) { 

        char c='y'; 

        while(c=='y'){ 

            System.out.println("Enter your age-"); 

            int n; 

            Scanner sc= new Scanner(System.in); 

            n=sc.nextInt(); 

            if(n<18){ 

                System.out.println("You cannot vote as you are not an adult."); 

                System.out.println("-----------------------------------------"); 

            } 

            else{ 

                System.out.println("You can vote as you are an adult."); 

                 System.out.println("-----------------------------------------"); 

            } 

            System.out.println("Do you want to verify more ages? enter y for yes and n for NO."); 

            c=sc.next().charAt(0); 

            System.out.println("____________________________________________"); 

        } 

    } 

}
