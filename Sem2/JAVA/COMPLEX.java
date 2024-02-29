public class COMPLEX {
		   double real, img;
		
		   add_complex(double r, double i){
			this.real = r;
			this.img = i;
		   }
			
		   public static add_complex sum(add_complex c1, add_complex c2)
		   {
		        add_complex temp = new add_complex(0, 0);

		        temp.real = c1.real + c2.real;
		        temp.img = c1.img + c2.img;
		        return temp;
		    }
		    public static void main(String args[]) {
			add_complex c1 = new add_complex(8, 2);
			add_complex c2 = new add_complex(5.8, 1.3);
		        add_complex temp = sum(c1, c2);
		        System.out.printf("Sum is: "+ temp.real+" + "+ temp.img +"i");
		    }
		}
