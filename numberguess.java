import java.util.Scanner;

public class numberguess {
    public static void main(String[] args) {

        final int min = 1;
        final int max = 100;

        final int number = (int) (Math.random() * max - min + 1) + min;

        int tries = 1;

        System.out.println("\nGuess a number between " + min + " and " + max + ".");

        Scanner Input = new Scanner(System.in);

        while (true) {

            System.out.print("\nEnter your guess: ");
            int guess = Input.nextInt();

            if (guess == number) {
                System.out.println("\nYour guess of " + guess + " was correct!");
                System.out.println("It took you " + tries + " tries.");
                break;
            } else if (guess > number) {
                System.out.println("Your guess of " + guess + " was too high...");
                tries++;
                continue;
            } else if (guess < number) {
                System.out.println("Your guess of " + guess + " was too low...");
                tries++;
                continue;
            }
        }
        Input.close();
    }
}
