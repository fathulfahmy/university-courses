package pastyears.pyp2122_2;

public class Employee {
    private String first_name, last_name;
    private double monthly_salary;

    // constructor
    public Employee() {
        first_name = "Unassigned";
        last_name = "Unassigned";
        monthly_salary = 0;
    }

    public Employee(String first_name, String last_name, double monthly_salary) {
        this.first_name = first_name;
        this.last_name = last_name;
        this.monthly_salary = monthly_salary;
    }

    // set
    public void setFirst_name(String first_name) {
        this.first_name = first_name;
    }

    public void setLast_name(String last_name) {
        this.last_name = last_name;
    }

    // monthly salary < 0, set to 0
    public void setMonthly_salary(double monthly_salary) {
        if (monthly_salary < 0)
            this.monthly_salary = 0;
        else
            this.monthly_salary = monthly_salary;
    }

    // get
    public String getFirst_name() {
        return first_name;
    }

    public String getLast_name() {
        return last_name;
    }

    public double getMonthly_salary() {
        return monthly_salary;
    }

}
