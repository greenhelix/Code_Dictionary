package javamethod;

import java.nio.charset.StandardCharsets;
import java.util.Base64;

class base64 {
    public static void main(String[] args) {
        byte[] message = Base64.getDecoder().decode("Ewa1RaKdrGgUEzszm8616V6Ph0s=");
        System.out.println(new String(message, StandardCharsets.UTF_8));

        String base64data = "Ewa1RaKdrGgUEzszm8616V6Ph0s=";
        byte[] binary = Base64.getDecoder().decode(base64data);
        System.out.println(new String(binary));

        byte[] message2 = "hello world".getBytes(StandardCharsets.UTF_8);
        String encoded = Base64.getEncoder().encodeToString(message2);
        System.out.println(encoded);
    }
}
