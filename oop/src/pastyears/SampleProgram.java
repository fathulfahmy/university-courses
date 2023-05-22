package pastyears;

import java.text.DecimalFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;

public class SampleProgram {
    public static void main(String[] args) {
        Date today = new Date();
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
        System.out.println(sdf.format(today));
        DecimalFormat df = new DecimalFormat("0.00");
        Double num = 123.456789;
        System.out.println(df.format(num));
        GregorianCalendar today2 = new GregorianCalendar();

        System.out.println(
                (today2.get(Calendar.MONTH) + 1) + " " + today2.get(Calendar.DATE) + " " + today2.get(Calendar.YEAR));

    }
}
