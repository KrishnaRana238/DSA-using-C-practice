public class HelloWorld {

    public static void main(String[] args) {

        int num1 = 5;
        int num2 = 10;

        int sum = addTwoNumbers(num1, num2);

        System.out.println("The sum of " + num1 + " and " + num2 + " is " + sum);
    }

    public static int addTwoNumbers(int a, int b) {
        return a + b;
    }
}