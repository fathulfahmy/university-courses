package lab7;

public class Contact {

    // name (String),
    private String name = new String();
    // phone number (String) and
    private String phoneNum = new String();
    // category (String – value can be “Friend”, “Family” and “Work” only).
    private String category = new String();

    public void setName(String name) {
        this.name = name;
    }

    public void setPhoneNum(String phoneNum) {
        this.phoneNum = phoneNum;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public String getName() {
        return name;
    }

    public String getPhoneNum() {
        return phoneNum;
    }

    public String getCategory() {
        return category;
    }

    public Contact() {
        this.name = "unassigned";
        this.phoneNum = "unassigned";
        this.category = "unassigned";
    }
}