class Try {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            int num = scanner.nextInt();
            if (num != 0) {
                throw new Exception("Not zero");
            }
            System.out.println("I'm happy with the input.");
        } catch (InputMismatchException e) {
            System.out.println("Invalid Entry");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

    }

}