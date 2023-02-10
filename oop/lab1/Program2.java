import javax.swing.*;

public class Program2 {
    public static void main(String[] args) {
        JFrame jFrame;
        jFrame = new JFrame();

        jFrame.setSize(400, 300);
        jFrame.setVisible(true);

        String name;
        name = JOptionPane.showInputDialog(null, "What is your name?");
        JOptionPane.showMessageDialog(jFrame, "Nice to meet you, " + name + ".");
    }

}
