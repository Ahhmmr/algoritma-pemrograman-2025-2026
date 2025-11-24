package per9;

public class IO {
    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);

        System.out.print("Masukkan nama barang: ");
        String namaBarang = scanner.nextLine();

        System.out.print("Masukkan harga barang: ");
        int harga = scanner.nextInt();

        System.out.print("Masukkan jumlah barang: ");
        int jumlah = scanner.nextInt();

        int total = harga * jumlah;
        double diskon;

        if (total >= 53100) {
            diskon = total * 0.1;
        } else {
            diskon = 0;
        }

        double totalBayar = total - diskon;

        System.out.println("\n--- Struk Pembelian Jokomart---");
        System.out.println("Nama Barang: " + namaBarang);
        System.out.println("Harga Barang: " + harga);
        System.out.println("Jumlah Barang: " + jumlah);
        System.out.println("Total: " + total);
        System.out.println("Diskon: " + diskon);
        System.out.println("Total Bayar: " + totalBayar);
        System.out.println("-------------------------------");
        scanner.close();
    }
}