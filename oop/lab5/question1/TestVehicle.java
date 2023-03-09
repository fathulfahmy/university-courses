public class TestVehicle {
    public static void main(String[] args) {
        Person p = new Person();
        Vehicle v = new Vehicle();
        v.setOwner(p);
        p.setName("fathul");
        System.out.println(v.getOwner().getName());
    }
}