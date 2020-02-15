package method;

import java.util.Arrays;

class Method {

    public static void main(String[] args) {
        int[] b = { 1, 2, 3 };
        hashCode(b);
    }

    static Boolean hashCode(int[] b) {
        int[] a = { 1, 2, 3, 4 };

        int hashA = Arrays.hashCode(a);
        int hashB = Arrays.hashCode(b);
        System.out.println(hashA + "////" + hashB);

        System.out.println(Arrays.equals(a, b));

        return Arrays.equals(a, b);
    }

}