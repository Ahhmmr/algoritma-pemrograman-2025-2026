package per10;

import java.util.Scanner;

public class ifelse {

    static Scanner input = new Scanner(System.in);

    static String getname() {

        System.out.print("Masukan Nama :");
        String nama = input.nextLine();
        boolean benar = nama.equalsIgnoreCase("Ahmar");

        if (!benar) {
            System.out.println("nama salah, masukan ulang!");
            return getname();
        }
        return nama;
    }

    public static void main(String[] args) {

        String nama = getname();
        System.out.print("masukan NIM : ");
        int nim = input.nextInt();
        System.out.println("Nama : " + nama);
        System.out.println("Saldo : Rp." + nim);

        System.out.println("=====Menu ATM=====");
        System.out.println("1. Cek Saldo");
        System.out.println("2. Tarik Tunai");
        System.out.println("3. Setor Tunsi");
        System.out.println("4. Transfer");
        System.out.println("5. Keluar");

        System.out.print("Pilih Menu : ");
        int menu = input.nextInt();

        switch (menu) {
            case 1:
                System.out.println("Saldo kamu adalah Rp." + nim);
                break;
            case 2:
                System.out.println("Penarikan dana sedang bermasalah, mohon coba lagi nanti");
            case 3:
                System.out.println("jaringan bermasalah, coba lagi nanti");
            case 4:
                System.out.println("Transfer bermasalah");
            case 5:
                System.out.println("Keluar dari sistem");

            default:
                System.out.println("Pilihan tidak tersedia");
                break;
        }

    }

}
