public class Fraction {
    private int numerator;
    private int denominator;

    public Fraction() {
        this(0, 1);
    }

    public Fraction(int number) {
        this(number, 1);
    }

    public Fraction(Fraction frac) {
        this(frac.getNumerator(), frac.getDenominator());
    }

    public Fraction(int num, int denom) {
        if (denom < 0) {
            num = -num;
            denom = -denom;
        }
        if (num == 0) {
            denom = 1;
        }
        setNumerator(num);
        setDenominator(denom);
    }

    public static int gcd(int m, int n) {
        int r = n % m;

        while (r != 0) {
            n = m;
            m = r;
            r = n % m;
        }
        return m;
    }

    public static Fraction min(Fraction f1, Fraction f2) {
        // convert to decimals and then compare
        double f1_dec = f1.decimal();
        double f2_dec = f2.decimal();

        if (f1_dec <= f2_dec) {
            return f1;
        } else {
            return f2;
        }
    }

    public void add(Fraction frac) {
        int a, b, c, d;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        // set this to sum
        this.setNumerator(a * d + b * c);
        this.setDenominator(b * d);
    }

    public Fraction divide(Fraction frac) {
        int a, b, c, d;
        Fraction quotient;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        quotient = new Fraction(a * d, b * c);
        return quotient;
    }

    public boolean equals(Fraction frac) {
        Fraction f1 = simplify(); // simplify itself
        Fraction f2 = frac.simplify(); // simplify frac
        return (f1.getNumerator() == f2.getNumerator() &&
                f1.getDenominator() == f2.getDenominator());
    }

    public int getDenominator() {
        return denominator;
    }

    public int getNumerator() {
        return numerator;
    }

    public Fraction multiply(Fraction frac) {
        int a, b, c, d;
        Fraction product;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        product = new Fraction(a * c, b * d);
        return product;
    }

    public void setDenominator(int denom) {
        if (denom == 0) {
            // Fatal error
            System.out.println("Fatal Error");
            System.exit(1);
        }
        denominator = denom;
    }

    public void setNumerator(int num) {
        numerator = num;
    }

    public Fraction simplify() {
        int num = getNumerator();
        int denom = getDenominator();
        int divisor = 1;
        if (num != 0) {
            divisor = gcd(Math.abs(num), denom);
        }
        return new Fraction(num / divisor, denom / divisor);
    }

    public Fraction subtract(Fraction frac) {
        int a, b, c, d;
        Fraction diff;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        diff = new Fraction(a * d - b * c, b * d);
        return diff;
    }

    public String toString() {
        return getNumerator() + "/" + getDenominator();
    }

    private double decimal() {
        // returns the decimal equivalent
        return (double) getNumerator() / getDenominator();
    }

}
