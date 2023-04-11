package sample1;

public class Demo3 {

   public static void main(String[] args) {

      final int SIZE = 5;
      Mammal[] mammal = new Mammal[SIZE];

      for (int i = 0; i < SIZE; i++) {
         int species = (int) (Math.random() * 4);
         if (species == 0)
            mammal[i] = new Human(123456780 + i);
         else if (species == 1)
            mammal[i] = new Dog(200 + i);
         // else if (species == 2)
         // mammal[i] = new Cat("persian");
         else
            mammal[i] = new Mammal("red");
      }

      for (int i = 0; i < SIZE; i++)
         System.out.println(mammal[i].toString());
   }

}
