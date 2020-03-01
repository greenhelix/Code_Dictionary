package javamethod;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

class Array {

    public static void main(String[] args) {
        int[] b = { 1, 2, 3 };
        hashCode(b);
        sort(b);
        copyOf(b);

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

    static String copyOf(int[] a) {
        int[] arr1 = new int[] { 11, 22, 33, 44 };
        int[] arr2 = Arrays.copyOf(arr1, 10);
        System.out.println("copyOf>>> " + Arrays.toString(arr2));

        int[] arr3 = Arrays.copyOfRange(arr1, 0, 6);
        System.out.println("copyOfRange>>> " + Arrays.toString(arr3));

        char[] char1 = new char[] { 'a', 'b', 'v', 'c' };
        char[] char2 = Arrays.copyOf(char1, 10);
        System.out.println("charCOPY>>> " + Arrays.toString(char2));

        Integer[] intarr1 = new Integer[] { 11, 22, 33, 44 };
        Integer[] intarr2 = Arrays.copyOf(intarr1, 8);
        System.out.println("Integer>>copyOf>>> " + Arrays.toString(intarr2));

        Integer[] intarr3 = Arrays.copyOf(intarr1, 4);
        System.out.println("Integer>>equal?? " + Arrays.equals(intarr1, intarr3));

        return "";
    }

}