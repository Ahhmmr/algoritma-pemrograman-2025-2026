
import java.util.Scanner;
import java.util.Arrays;

public class arrayloop {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukan NIM: ");
        int nim = input.nextInt();
        int[] arru = new int[7];
        for (int i=0; i<nim; i++){
                arru[i]= input.nextInt();

            }
        }

        int total=0;
        for (int X : arr) total += X;

        int maks=arru[0];
        int min=arru[0];

        for (int i = 1; i<nim; i++){
        
            if (arru[i]>maks) maks = 
            arru[i];
            if (arru[i]<min) min = arru[i];
        }
        double mean = (double) total / nim;

        for (int i=0; i<nim/2; i++){
            int temp = arru[i];
            arru[i] = arru[nim - i - 1];
            arru[nim - i - 1] = temp;
        }

        System.out.println("Total: " + total);
        System.out.println("Maksimum: " + maks);    
        System.out.println("Minimum: " + min);
        System.out.println("Mean: " + mean);
        System.out.println("Array Terbalik: ");

        for (int X : arru) {
            System.out.print(X + " ");
        }
}

