class Addition implements Function {
    public int f(int x, int y) {
        return x + y;
    }
}

interface Function {
    public int f(int x, int y);
}

public class PassFunction {

    public static void evaluate(Function fobj,
                                int x, int y) {

        System.out.println(fobj.f(x,y) );
    }
    
    public static void main(String[] args) {

        evaluate(new Addition(), 5, 3);

        // anonymous inner class
        evaluate(new Function() {
            public int f(int x, int y) {
                return x - y;
            }}
            , 5, 3);

        // lambda expression. Java 8
        evaluate( (x,y) -> x * y, 5, 3);
        
    }
}











