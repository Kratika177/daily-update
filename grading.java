import java.util.*; 

class Remarks { 

    public static void main(String[] args) { 

        char c='y'; 

        while(c=='y'){ 

            System.out.println("Enter your percentage of last year-"); 

            double n; 

            Scanner sc= new Scanner(System.in); 

            n=sc.nextDouble(); 

            if(n>90 && n<=100 ){ 

                System.out.println("You remarked as A+ grade student!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else if(n>70 && n<=90 ){ 

                System.out.println("You remarked as A grade student!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else if(n>50 && n<=70 ){ 

                System.out.println("You remarked as B+ grade student!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            else if(n<=50 ){ 

                System.out.println("You remarked as B grade student!!!"); 

                System.out.println("-----------------------------------------"); 

            } 

            System.out.println("Do you want to check for more students? enter y for yes and n for NO."); 

            c=sc.next().charAt(0); 

            System.out.println("____________________________________________"); 

        } 

    } 

} 
