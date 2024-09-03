public class ExerciseLoop{
    public static void main(String[] args){
        for(int i=1;i<11;i++){
            System.out.print(i + " ");
        }
        System.out.print("\n");
        int x = 1;
        while(x < 11){
            System.out.print(x + " ");
            x++;
        }
        System.out.print("\n");
        x = 1;
        do{
            System.out.print(x + " ");
            x++;
        }while(x < 11);
    }
}