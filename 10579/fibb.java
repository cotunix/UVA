// This one I had originally started out writing in C, but I quickly realized what the actual problem was. Given that C has no built in library for large integers, I decided that this would be a lot better to do in Java, since it has BigInteger.
// The knowledge of various programming languages libraries really helps :)

import java.math.BigInteger;
import java.util.Scanner;
public class fibb {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		BigInteger fib[] = new BigInteger[5000];
		fib[0] = BigInteger.ZERO;
		fib[1] = BigInteger.ONE;
		for (int i = 2; i < 5000; i++) {
			fib[i] = fib[i-1].add(fib[i-2]);
		}
		while (in.hasNext()){
			n = in.nextInt();
			System.out.println(fib[n]);
		}
		in.close();
	}
}
