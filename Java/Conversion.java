public class Conversion {
    private static double klMult = 2.205;
    private double kilo;
    private double pounds;
    public Conversion(double kg){
        kilo = kg;
    }
    public void setK(double kg){
        kilo = kg;
    }
    public double getPounds(){
        pounds = kilo*klMult;
        return pounds;
    }
}
