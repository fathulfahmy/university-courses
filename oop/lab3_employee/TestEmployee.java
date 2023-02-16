public class TestEmployee {
    public static void main(String[] args) {
        Employee worker1 = new Employee();
        System.out.println("Id: " + worker1.getId());
        System.out.println("Name: " + worker1.getName());
        System.out.println("Department: " + worker1.getDepartment());
        worker1.setId(1798);
        worker1.setName("Fathul");
        worker1.setDepartment("Java Programming");
        System.out.println("Id: " + worker1.getId());
        System.out.println("Name: " + worker1.getName());
        System.out.println("Department: " + worker1.getDepartment());
        System.out.println(worker1.toString());

    }

}
