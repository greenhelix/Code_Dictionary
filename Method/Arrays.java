package method;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

class Method {

    public static void main(String[] args) {
        int[] b = { 1, 2, 3 };
        hashCode(b);
        sort(b);

    }

    static Boolean hashCode(int[] b) {
        int[] a = { 1, 2, 3, 4 };

        int hashA = Arrays.hashCode(a);
        int hashB = Arrays.hashCode(b);
        System.out.println(hashA + "////" + hashB);

        System.out.println(Arrays.equals(a, b));

        return Arrays.equals(a, b);
    }

    static String sort(int[] c) {
        int[] e = { 1, 2, 3, 4, 5 };
        int[][] d = { { 2, 1 }, { 3, 3, 3 } };

        System.out.println(Arrays.toString(e));
        System.out.println(Arrays.deepToString(d));

        // sort() - comparator
        Integer sArr[] = new Integer[] { 3, 13, 1, 9, 21 };
        for (Integer number : sArr) {
            System.out.println("Number = " + number);
        }
        Comparator<Integer> comp = Collections.reverseOrder();
        Arrays.sort(sArr, comp);

        System.out.println("Integer array with some sorted values(1 to 4) is:");
        for (Integer number : sArr) {
            System.out.println("Number = " + number);
        }

        return "";
    }

}