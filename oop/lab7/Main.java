import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /*
         * (a) Create an array objects from the Contact class. The size of the array
         * determined by the user.
         */
        Scanner sc = new Scanner(System.in);
        int size = 0;
        System.out.print("Enter size: ");
        size = sc.nextInt();
        Contact contactArr[] = new Contact[size];
        /*
         * (b) Initialize the array using user input data (remember to accept category
         * with the values stated above only)
         */

        // string buffer
        sc.nextLine();
        // category input buffer
        String inputCategory = new String();

        for (int i = 0; i < size; i++) {
            contactArr[i] = new Contact();

            System.out.print("\nEnter name: ");
            contactArr[i].setName(sc.nextLine());

            System.out.print("Enter phone number: ");
            contactArr[i].setPhoneNum(sc.nextLine());

            System.out.print("Enter category (Friend - Family - Work): ");
            inputCategory = sc.nextLine();
            if (inputCategory.equalsIgnoreCase("friend"))
                contactArr[i].setCategory("Friend");

            if (inputCategory.equalsIgnoreCase("family"))
                contactArr[i].setCategory("Family");

            if (inputCategory.equalsIgnoreCase("work"))
                contactArr[i].setCategory("Work");
        }

        /* (c) Allow the user to search a contact’s phone number using his/her name. */
        String inputName = new String();
        while (true) {
            System.out.print("\nSearch name (-1 to stop): ");
            inputName = sc.nextLine();

            if (inputName.equals("-1"))
                break;
            else {
                for (int i = 0; i < size; i++) {
                    if (inputName.equalsIgnoreCase(contactArr[i].getName())) {
                        System.out.println("Phone number: " + contactArr[i].getPhoneNum());
                        System.out.println("Category: " + contactArr[i].getCategory());
                    }
                }
            }
        }
        sc.close();

    }
}