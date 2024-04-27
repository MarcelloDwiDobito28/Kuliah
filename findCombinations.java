import java.util.ArrayList;
import java.util.List;

public class findCombinations {
    static void findCombinations(int[] coins, int index, int target, List<Integer> combination, List<List<Integer>> result) {
        if (target == 0) {
            // Menyalin kombinasi saat ini ke hasil
            result.add(new ArrayList<>(combination));
            return;
        }

        if (index >= coins.length || target < 0)
            return;

        // Pertimbangkan untuk menggunakan koin pada posisi index saat ini
        combination.add(coins[index]);
        findCombinations(coins, index, target - coins[index], combination, result);

        // Kemudian coba tanpa menggunakan koin pada posisi index saat ini
        combination.remove(combination.size() - 1);
        findCombinations(coins, index + 1, target, combination, result);
    }

    public static void main(String[] args) {
        int[] coins = {1, 5, 10, 25, 50, 100};
        int m = coins.length;
        int V = 269;

        List<List<Integer>> result = new ArrayList<>();
        findCombinations(coins, 0, V, new ArrayList<>(), result);
        System.out.println("----------------------------------------------------");
        System.out.println("Kombinasi koin untuk membentuk " + V + " adalah: "+result.size());

//        for (List<Integer> combination : result) {
//            System.out.println(combination);
//        }
    }
}
