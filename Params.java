public class Params {
    public static void doit1(int a) {
        a = 19;
    }
    
    public static void doit2(int[] arr) {
        arr[0] = 47;
    }

    public static void doit3(int[] arr) {
        arr = new int[5];
    }

    public static void main(String[] args) {
        int x = 12;
        doit1(x);
        System.out.println(x);

        int[] array = {1,2,3};
        doit2(array);
        for (int i=0; i < array.length; i++)
            System.out.println(array[i]);
    }
}
