import java.util.Arrays;

public class GFG
{
 static int twosum(int A[],int size,int sum)
 {
	 
     Arrays.sort(A);
     
     for(int i=0;i<size;i++)
     {
         for(int j=i+1;j<size;j++)
         
         {
             if(A[i]+A[j]==sum )
             {
             System.out.println("YES");
             }
             else
             {
               System.out.println("NO");
              break;
             }
         }
     
     }
     return -1;
 }

public static void main(String args[])
{
    int A[]={8,9,3,21,58};
    int sum=10;
    int size=A.length;
twosum(A,size,sum);

}
}