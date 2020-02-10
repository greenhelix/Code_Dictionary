
class method {

    public static void main(String[] args) {
        insert("hello");
    }

    static String insert(String in) {
        StringBuilder hello = new StringBuilder("hello");

        // insert - int, boolean
        hello.insert(5, " " + true);

        // insert - int, charArray, str, end
        char[] charAr = { ' ', 'h', 'a', 'h', 'a' };
        hello.insert(10, charAr, 0, 5);
        System.out.println(">>>>>>>>>>>>>>>>>>" + hello + "<<<<<<<<<<<<<<<<<<<");

        return hello.toString();
    }
}