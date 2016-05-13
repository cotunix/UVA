import java.math.BigInteger;
import java.util.Scanner;

public class root {
	public static BigInteger sqroot(BigInteger x) {
		if (x.equals(BigInteger.ZERO) || x.equals(BigInteger.ONE)) {
			return x;
		}
		BigInteger y;
		y = x.shiftRight(1); // This is easier than dividing by 2.
		while (y.compareTo(x.divide(y)) > 0) {
			y = ((x.divide(y)).add(y)).shiftRight(1); // Apply Babylonian method
														// until we are at 0
		}
		return y;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		for (int n = sc.nextInt(); n > 0; n--) {
			BigInteger num = sc.nextBigInteger();			
			System.out.println(sqroot(num));
			if (n > 1)
				System.out.println();
		}
		sc.close();
	}
}