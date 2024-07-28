public class Main{
    public static void main(String[] args){
        System.out.println("Hello World!");
        HelloWorld hw = new HelloWorld();
        hw.greet();

        Conversion test = new Conversion(2);
        System.out.println(test.getPounds());
        test.setK(42);
        System.out.println(test.getPounds());
    }
}