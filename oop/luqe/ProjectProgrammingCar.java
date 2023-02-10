import java.util.*;
// import java.util.Arrays;

public class ProjectProgrammingCar {
    static int size = 4;
    public static Scanner sc = new Scanner(System.in);

    // MAIN program
    public static void main(String[] Args) {

        // declare array
        double[] price = new double[size];
        String[] name = new String[size];

        // call mainMenu
        mainMenu(name, price);
    }

    // METHOD 1: select between [Admin] or [User] interface
    public static void mainMenu(String[] name, double[] price) {
        System.out.println("\nSelect interface");
        System.out.println("0 - Administrator");
        System.out.println("1 - User");
        System.out.print("Please input the number: ");
        int mode = sc.nextInt();

        // Admin mode
        if (mode == 0) {
            // call adminSelect to display admin selection menu
            adminSelect(name, price);
        }

        // User mode
        if (mode == 1) {
            if (name[0] != null) {
                // call viewData to display name and price of car
                viewData(name, price);

                // user select which car to rent
                int selection = inputSelection();

                // user enter hour usage
                double hour = inputHour();

                // calculate price to be paid
                double payment = price[selection] * hour;

                // call calculatePayment to input user money and display balance
                calculatePayment(payment);

                // return to main menu
                mainMenu(name, price);

            } else {
                System.out.println("No output available in array");
                mainMenu(name, price);
            }
        }

    }

    // METHOD 2: display options for admin
    public static void printAdminMenu() {
        System.out.println("\n-------------------------------------");
        System.out.println("0 - View Data");
        System.out.println("1 - Add Data");
        System.out.println("2 - Delete Data");
        System.out.println("3 - Search Data");
        System.out.println("4 - Edit Data");
        System.out.println("5 - Exit to Main Menu");
        System.out.println("-------------------------------------");

    }

    // METHOD 3: admin selection function
    public static void adminSelect(String[] name, double[] price) {
        printAdminMenu();
        System.out.println("Please input the number: ");
        int adminSelection = sc.nextInt();

        switch (adminSelection) {
            // view data in array
            case 0:
                viewData(name, price);
                adminSelect(name, price);
                break;

            // add data in array
            case 1:
                addData(name, price);
                break;
            // delete an element from array
            case 2:
                deleteData(name, price);
                break;
            // search an element in array
            case 3:
                // searchData(name, price);
                break;
            // edit an element in array
            case 4:
                editData(name, price);
                break;
            // select between [Admin] or [User] interface
            case 5:
                mainMenu(name, price);
                break;
            default:
                System.out.println("Invalid input!");
        }

    }

    // METHOD 4: view data in array
    public static void viewData(String[] name, double[] price) {
        for (int i = 0; i < name.length; i++) {
            if (name[i] != null) {
                System.out.print("[" + i + "]" + name[i] + "\t\t");
                System.out.println("RM" + price[i] + " per hour");
            }
        }
    }

    // METHOD 5: add data in array
    public static void addData(String[] name, double[] price) {
        char choice = 'y';
        boolean repeat = true;
        while (repeat) {
            // user validation yes or no
            System.out.println("Do you want to add car? (y/n)");
            choice = sc.next().charAt(0);
            choice = Character.toLowerCase(choice);

            if (choice == 'y') {
                repeat = true;
                for (int i = 0; i < name.length; i++) {
                    // assign name for car[i]
                    System.out.println("\nPlease enter name of car " + "[" + (i + 1) + "]");
                    name[i] = sc.next();
                    // assign price for car[i]
                    System.out.println("Please enter price per hour of car " + "[" + (i + 1) + "]");
                    price[i] = sc.nextDouble();

                }
            } else if (choice == 'n') {
                repeat = false;
                adminSelect(name, price);

            } else
                System.out.println("Invalid input!");
        }

        adminSelect(name, price);

    }

    // METHOD 6: delete an element from array
    public static void deleteData(String[] name, double[] price) {
        viewData(name, price);

        // remove element at index 2
        System.out.println("Delete which one? ");
        int userDelete = sc.nextInt();

        String[] name1 = new String[name.length - 1];
        double[] price1 = new double[name.length - 1];

        int j = userDelete;
        for (int i = 0, k = 0; i < name.length; i++) {
            if (i != j) {
                name1[k] = name[i];
                price1[k] = price[i];
                k++;
            }
        }

        // display data before and after
        System.out.println("Before deletion :");
        viewData(name, price);
        System.out.println("After deletion :");
        viewData(name1, price1);

        // assign data to new array
        name = name1;
        price = price1;

        adminSelect(name, price);
    }

    // METHOD 7: search an element in array
    // public static void searchData(String[] name, double[] price) {
    //     for (int i = 0; i < name.length; i++) {
    //         System.out.println("Search for data in [Name]:");
    //         String userSearch = sc.next();
    //         System.out.println("Search for data in [Price]:");
    //         double userSearch1 = sc.nextDouble();

    //         List list = new ArrayList(Arrays.asList(name));
    //         List list2 = new ArrayList(Arrays.asList(price));

    //         if (list.contains(userSearch)) {
    //             System.out.println("Found data in [Name]:" + list.contains(userSearch));
    //             System.out.println("Found data in [Name]:" + userSearch);

    //         } else if (list2.contains(userSearch1)) {

    //             System.out.println("Found data in [Price]:" + list2.contains(userSearch1));
    //             System.out.println("Found data in [Price]:" + userSearch1);

    //         } else
    //             System.out.println("No Data Found");

    //         adminSelect(name, price);

    //     }

    // }

    // METHOD 8: edit an element in array
    public static void editData(String[] name, double[] price) {
        // user select to edit price(p) or name(n)
        System.out.println("Edit price or name? (p/n)");
        char userPoN = sc.next().charAt(0);
        userPoN = Character.toLowerCase(userPoN);

        if (userPoN == 'n') {
            // display data
            viewData(name, price);
            // select element to edit
            System.out.println("Edit which one? ");
            int userChoose = sc.nextInt();
            // enter new name
            System.out.println("Enter new name for car " + userChoose + ": ");
            String newData = sc.next();
            name[userChoose] = newData;
            // display new data
            viewData(name, price);

        }

        else if (userPoN == 'p') {
            // display data
            viewData(name, price);
            // select element to edit
            System.out.println("Edit which one? ");
            int userChoose = sc.nextInt();
            // enter new price
            System.out.println("Enter new price for car " + userChoose + ": ");
            double newData = sc.nextDouble();
            price[userChoose] = newData;
            // display new data
            viewData(name, price);

        } else {
            System.out.println("Invalid Input!");
        }
        adminSelect(name, price);

    }

    // METHOD 9: user select car to rent
    public static int inputSelection() {
        int selection = -1;
        while (selection < 0 || selection > size) {
            if (selection < 0 || selection > size) {
                System.out.print("Please input the number :");
                selection = sc.nextInt();
            } else
                System.out.println("Invalid Input!");

        }
        return selection;

    }

    // METHOD 10: input usage hour
    public static double inputHour() {
        double hour = 0;

        while (hour <= 0) {
            System.out.print("Please input usage hours :");
            hour = sc.nextDouble();
            if (hour <= 0)
                System.out.println("Invalid Input!");
        }

        return hour;
    }

    // METHOD 11: calculate payment and return balance
    public static void calculatePayment(double payment) {
        double money = 0, remaining = 0, balance = 0;
        System.out.println("\nPlease pay RM" + payment);

        while (money < payment) {
            // input money
            System.out.print("Please input money :RM");
            money += sc.nextDouble();

            // insufficient amount
            if (money < payment) {
                System.out.println("\nCurrent amount :RM" + money);
                remaining = payment - money;
                System.out.println("Remaining amount :RM" + remaining);
                System.out.println("Insufficient amount, add more");
            }

        }
        // display balance
        balance = money - payment;
        System.out.println("\nYour balance is RM" + balance);
        System.out.print("Thank you for using our service!");
    }
}