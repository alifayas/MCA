public class SORTSTRING {
	public static void main(String []args){
        String temp;
        int i,j;
        String str[] = new String[5];
        str[0] = "Brian";
        str[1] = "Ali";
        str[2] = "Fayas";
        str[3] = "Nissam";
        str[4] = "Goku";
         System.out.println("The strings before sorting:");
        for(i=0;i<5;i++)
         {
             System.out.println(str[i]);
         }
        
        for (i=0; i<5; i++)
          {
              for(j=i+1;j<5;j++)
                {
                    if((str[i].compareTo(str[j]))>0)
                      {
                          temp=str[i];
                          str[i]=str[j];
                          str[j]=temp;
                      }
                }
              
          }
        System.out.println("\nThe strings after sorting:");
        for(i=0;i<5;i++)
         {
             System.out.println(str[i]);
         }
	}
}
