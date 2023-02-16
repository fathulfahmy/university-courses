public class Employee {
    private int id;
    private String name;
    private String department;

    public Employee() {
        this.id = 0000;
        this.name = "Unassigned";
        this.department = "Unassigned";
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getDepartment() {
        return department;
    }
}
