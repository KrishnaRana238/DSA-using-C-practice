import java.util.Random;

public class CoinToss {
    public static void main(String[] args) {
        Random rand = new Random();
        int coinToss = rand.nextInt(2);

        if (coinToss == 0) {
            System.out.println("Heads");
        } else {
            System.out.println("Tails");
        }
    }
}