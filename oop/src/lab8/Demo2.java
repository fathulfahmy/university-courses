package lab8;

public class Demo2 {

    public static void main(String[] args) {

        final int SIZE = 5;

        Human[] human = new Human[SIZE];

        for (int i = 0; i < SIZE; i++)
            human[i] = new Human(123456780 + i);

        for (int i = 0; i < SIZE; i++)
            System.out.println(human[i].toString());
    }

}
