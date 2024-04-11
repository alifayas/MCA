import java.util.Scanner;
class NegInputException extends Exception {
	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	NegInputException(String s){
		super(s);
	}

}
public class avgException {

	public static void main(String[] args) {
		
	      int N,l=0;
	      float Sum = 0,avg;
	      Scanner sc=new Scanner(System.in);
	      System.out.println("Enter the number of inputs required:");
	      N = sc.nextInt();
	      float[] numbers = new float[N];
	      System.out.println("Start inputting the data:");
		for( int i=0; i < N ; i++)
	      { 
	    	  numbers[i]=sc.nextInt();
		}
	      try{
	      for( int i=0; i < N ; i++)
	      { 
	                if(numbers[i]<0)
	                 {
	                    throw new NegInputException("Negative inputs not allowed!");
	                 }
	        }
		}catch(NegInputException e)
	                  {
	                    System.out.println("Exception Occurred. . "+e);
	                    System.exit(0);
	                 }finally{
		for( int i=0; i < N ; i++){
			if(numbers[i]>=0){
				Sum += numbers[i];
				l=l+1;
			}
		}
	       avg = Sum / l;     
	       System.out.println("Average = "+avg);
}
	          
	   }
	         	
				
	}
           
