import java.util.Scanner;
public class No_4 {
    public static void main(String[] args) {
        int WithinRange, banyak_mahasiswa = 0, banyak_lulus = 0, banyak_tidak_lulus = 0;
        float min = 0, max = 4, IP_rata_rata = 0, jumlah = 0, A, mark = -999;
        Scanner input = new Scanner(System.in);
        A = input.nextFloat();
        if (A == mark) {
            System.out.print("Tidak ada data");
            System.out.println("");
        }
        while (A != mark) {
            No_4 no4 = new No_4();
            WithinRange = no4.IsWithinRange(A, min, max);
            if (WithinRange == 1) {
                jumlah = jumlah + A;
                banyak_mahasiswa++;
                if (A >= 2.75) {
                    banyak_lulus++;
                } else {
                    banyak_tidak_lulus++;
                }
            }
            A = input.nextFloat();
        }
        IP_rata_rata = jumlah / banyak_mahasiswa;
        System.out.println(banyak_mahasiswa);
        System.out.println(banyak_lulus);
        System.out.println(banyak_tidak_lulus);
        System.out.printf("%.2f",IP_rata_rata);
        System.out.println("");

    }

    int IsWithinRange(float X, float min, float max) {
        if (X >= min && X <= max) {
            return 1;
        }
        return 0;
    }

}
