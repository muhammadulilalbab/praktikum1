import java.util.Scanner;
public class No_6 {
public static void main(String[] args) {
        int N, i, bilangan, pembanding, counter = 1;
        char pil;
        Scanner input = new Scanner(System.in);
        N = input.nextInt();
        pil = input.next().charAt(0);
        bilangan = input.nextInt();
        pembanding = bilangan;
        for (i = 1; i < N; i++) {
            bilangan = input.nextInt();
            if (pil == 'A') {
                if (pembanding == bilangan) {
                    counter++;
                } else {
                    No_6 no6 = new No_6();
                    pembanding = no6.min(pembanding, bilangan);
                    if(bilangan == pembanding){
                        counter =1;
                    }
                }
            } else if (pil == 'B') {
                if (pembanding == bilangan) {
                    counter++;
                } else {
                    No_6 no6 = new No_6();
                    pembanding = no6.max(pembanding, bilangan);
                    if(bilangan == pembanding){
                        counter =1;
                    }
                }
            }
        }
        System.out.println(pembanding);
        System.out.println(counter);
        System.out.println("");
    }

    int max(int a, int b) {
        if (a > b) {
            return a;
        }
        return b;
    }

    int min(int a, int b) {
        if (a < b) {
            return a;
        }
        return b;
    }

}
