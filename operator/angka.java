import java.util.Scanner;
public class angka{
    public static void main(String[]args){
        Scanner sc=newScanner(System.in);
        System.out.print("masukan angka pertama:");
        int a=sc.nextInt();
        System.out.print("masukan angka kedua:");
        int b=sc.nextInt();

    }
    if(a>b){
        System.out.println(a+"lebih besar dari"+b);
    }
    else if(a<b){
        System.out.println(a+"lebih kecil dari"+b);
    
    }
    else{
        System.out.println("keduanya sama besar");
        System.out.println("apakah keduanya sama?"+(a==b));
    }
}