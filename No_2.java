import java.util.Scanner;
public class No_2 {
    public static void main(String[] args) {
        int N, i, j;
        char C1, C2;
        Scanner input = new Scanner(System.in);
        N = input.nextInt();
        C1 = input.next().charAt(0);
        C2 = input.next().charAt(0);
        if (N < 0 || C1 == C2) {
            System.out.print("Masukan tidak valid");
        } else {
            for (i = 0; i < N; i++) {
                for (j = 0; j < N; j++) {
                    if (i == 0 || j == 0 || i == (N - 1) || j == (N - 1)) {
                        System.out.print(C1);
                    } else {
                        System.out.print(C2);
                    }
                }
                System.out.println("");
            }
        }
        System.out.println("");
    }
}

