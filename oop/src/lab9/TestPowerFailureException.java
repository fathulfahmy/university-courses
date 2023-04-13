package lab9;

public class TestPowerFailureException {

    public static void main(String[] args) {
        try {
            // no argument
            throw new PowerFailureException();
        } catch (PowerFailureException e) {
            System.out.println(e.getMessage());
        }

        try {
            // with argument
            throw new PowerFailureException("Oh no!");
        } catch (PowerFailureException e) {
            System.out.println(e.getMessage());
        }
    }
}
