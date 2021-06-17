public class Play {
    public static void main(String[] args) {
        CPU acpu = new A_CPU();

        Computer computer1 = new Computer(acpu);

        Computer computer2 = new Computer();
        computer2.setCPU(acpu);

        System.out.println(computer1);
        System.out.println(computer2);
    }
}
