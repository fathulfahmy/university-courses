public class Cuboid {
    private double length, width, height;

    // Constructor no arg
    public Cuboid() {
        this.length = 0;
        this.height = 0;
        this.width = 0;
    }

    // Constructor arg
    public Cuboid(double length, double height, double width) {
        this.length = length;
        this.height = height;
        this.width = width;
    }

    // Set
    public void setLength(double length) {
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    // Get
    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public double getHeight() {
        return height;
    }

    // Compute
    public double perimeter() {
        return 4 * (length * width * height);
    }

    public double area() {
        return 2 * ((length * width) + (width * height) + (height * length));
    }

    public double volume() {
        return length * width * height;
    }
}
