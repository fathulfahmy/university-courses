package lab9;

public class PowerFailureException extends Exception {
   // no argument
   public PowerFailureException() {
      super("Power Failure!");
   }

   // with argument
   public PowerFailureException(String message) {
      super(message);
   }
}
