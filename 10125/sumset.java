import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class sumset {	
	
	public static void main(String[] args) throws IOException {
		int n,tmp,result;
		boolean found;
		BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			found = false;
			n = 0;
			tmp = 0; 
			result = 0;
			
			ArrayList<Integer> nums = new ArrayList<Integer>(1010);
			n = Integer.parseInt(sc.readLine());
			if (n == 0)
				break;
			
			for (int i = 0; i < n; i++ ){
				nums.add(Integer.parseInt(sc.readLine()));
			}
			
			Collections.sort(nums, Collections.reverseOrder());
			
			
outer:		for (Integer i : nums) {
				for (Integer j : nums) {
					if (i == j)
						continue;
					for (Integer k : nums) {
						if (k == i || k == j)
							continue;
						tmp = i - j - k;
						if (nums.contains(tmp) && tmp != i && tmp != j && tmp != k) {
							found = true;
							result = i;
							break outer;
						}
					}
				}
			}
			System.out.println(found ? result : "no solution");
		}
		sc.close();
	}
	
}
