import java.util.ArrayList;
import java.util.List;

public class findMinimumCoin {

    static int minCoins(int[] coins, int m, int V) {
        int[] table = new int[V + 1];

        // Base case (If given value V is 0)
        table[0] = 0;

        // Initialize all table values as Infinite
        for (int i = 1; i <= V; i++)
            table[i] = Integer.MAX_VALUE;

        // Compute minimum coins required for all
        // values from 1 to V
        for (int i = 1; i <= V; i++) {
            // Go through all coins smaller than i
            for (int j = 0; j < m; j++)
                if (coins[j] <= i) {
                    int sub_res = table[i - coins[j]];
                    if (sub_res != Integer.MAX_VALUE && sub_res + 1 < table[i])
                        table[i] = sub_res + 1;
                }
        }
        return table[V];
    }

    public static void main(String[] args) {
        int[] coins = {1, 5, 10, 25, 50, 100};
        int m = coins.length;
        int V = 269;

        System.out.println("----------------------------------------------------");
        System.out.println("Minimum coins required is " + minCoins(coins, m, V));

    }
}
