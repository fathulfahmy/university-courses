public class Question1 {
    public static void main(String[] args) {
        int m, n, i = 3, j = 4, k = 5;
        float v, w, x = 34.5f, y = 12.25f;

        w = Math.pow(3,Math.pow(i,j));
        // a. INVALID: w is float, RHS is double. w cannot be assigned of higher precision
        
        v = x / i;
        // b. VALID: v = 11.5
        
        w = Math.ceil(y) % k;
        // Ic. NVALID: w is float, power results double. w cannot be assigned of higher precision
        
        n = (int) x / y * i / 2;
        // d. INVALID: n is integer, RHS is float. n cannot be assigned of higher precision
        
        x = Math.sqrt(i*i - 4*j*k);
        // e. INVALID: x is float, power results double. w cannot be assigned of higher precision

        m = n + i * j;
        // f. INVALID: n is not declaared

        n = k /(j * i) * x + y
        // g. INVALID: n is int. RHS is float. n cannot be assigned of higher precision
	    
        i = i + 1;
        // h. VALID: i = 4
	    
        w = float(x + i);
        // i. INVALID: casting syntax error (float)(x + i), w is float, RHS is float no casting actually required
	    
        x = x / i / y / j;
        // j. x = 0.23469

    }
}
