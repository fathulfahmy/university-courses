
// 4. Create a class named Checkup with fields that hold a patient number, two
// blood pressure figures (systolic and diastolic), and two cholesterol figures
// (LDL and HDL).
import java.util.*;

class Checkup {
    int patientNumber, systolic, diastolic, ldl, hdl;

    // Methods:
    // i. get and set for each of the fields
    public void setPatientNumber(int patientNumber) {
        this.patientNumber = patientNumber;
    }

    public void setSystolic(int systolic) {
        this.systolic = systolic;
    }

    public void setDiastolic(int diastolic) {
        this.diastolic = diastolic;
    }

    public void setLdl(int ldl) {
        this.ldl = ldl;
    }

    public void setHdl(int hdl) {
        this.hdl = hdl;
    }

    public int getPatientNumber() {
        return patientNumber;
    }

    public int getSystolic() {
        return systolic;
    }

    public int getDiastolic() {
        return diastolic;
    }

    public int getLdl() {
        return ldl;
    }

    public int getHdl() {
        return hdl;
    }

    // ii. computeCholesterolRatio() that divides LDL cholesterol by HDL cholesterol
    // and returns the result.
    public double computeCholesterolRatio() {
        return ldl / hdl;
    }

    // iii. explainCholesterolRatio() that explains that HDL is known as “good
    // cholesterol” and that a ratio of 3.5 or lower is considered optimum.
    public void explainCholesterolRatio() {
        // output HDL is good cholesterol
        System.out.println("\nDid you know? HDL is known as good cholesterol.");
        // determine ratio optimum (<= 3.5)
        double ratio = computeCholesterolRatio();
        System.out.println("Cholesterol Ratio: " + ratio);
        if (ratio <= 3.5)
            System.out.println("Cholesterol Ratio is on optimum level");
        else
            System.out.println("Cholesterol Ratio is not on optimum level");
    }

    // iv. bloodPressure() that displays blood pressure category based on the
    // following table:
    public void bloodPressure() {
        // normal
        if (systolic < 120 && diastolic < 80)
            System.out.println("Blood Pressure is on Normal level");
        // elevated
        else if (systolic <= 129 && diastolic < 80)
            System.out.println("Blood Pressure is on Elevated level");

        // stage 1
        else {
            // stage 2
            if (systolic > 140 || diastolic > 90) {
                // stage +
                if (systolic > 180 || diastolic > 120)
                    System.out.println("Blood pressure is on Hypertensive Crisis\n(Consult your doctor immediately)");
                else
                    System.out.println("Blood pressure is on Hypertension Stage 2");
            } else
                System.out.println("Blood Pressure is on Hypertension Stage 1");
        }
    }

}

// v. Include the main() method and creates a Checkup object and demonstrate its
// methods.
public class QuestionFour {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Checkup c = new Checkup();
        System.out.println("Enter patient number: ");
        c.setPatientNumber(sc.nextInt());
        System.out.println("Enter systolic value: ");
        c.setSystolic(sc.nextInt());
        System.out.println("Enter diastolic value: ");
        c.setDiastolic(sc.nextInt());
        System.out.println("Enter LDL cholesterol level: ");
        c.setLdl(sc.nextInt());
        System.out.println("Enter HDL cholesterol level: ");
        c.setHdl(sc.nextInt());
        System.out.println("\nPatient number: " + c.patientNumber);
        System.out.println("Systolic value: " + c.systolic);
        System.out.println("Diastolic value: " + c.diastolic);
        System.out.println("LDL cholesterol level: " + c.ldl);
        System.out.println("HDL cholesterol level: " + c.hdl);
        c.explainCholesterolRatio();
        c.bloodPressure();
        sc.close();
    }
}
