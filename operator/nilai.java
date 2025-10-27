imporrt java.util.Scanner;

public class nilai{
    public stasic void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Masukan nilai tugas:");
        double tugas=sc.nextDouble();
        System.out.print("Masukan nilai UTS:");
        double UTS=sc.nextDouble();
        System.out.print("Masukan nilai UAS:");
        double UAS=sc.nextDouble();

        double nilai_akhir=(0.3*tugas)+(0.3*UTS)+(0.4*UAS);
        System.out.print("Nilai akhir="+nilai_akhir);
        if(nilai_akhir>=60){
            System.out.println("Status:LULUS");
        }
        else{
            System.out.println("Status:TIDAK LULUS");
        }
    }
}