import java.util.*;

interface FizzBuzz {
	void print(int from, int to);
}

class ConsoleBasedFizzBuzz implements FizzBuzz {	
	public void print(int from, int to) {
		for(int i = from; i <= to; i++) {
			String str = "";
			if (i % 3 == 0)
				str += "Fizz";
			if (i % 5 == 0)
				str += "Buzz";
			if (str.equals(""))
				str += i;
			
			System.out.println(str);
		}
	}
}

class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int max = s.nextInt();
		ConsoleBasedFizzBuzz c = new ConsoleBasedFizzBuzz();
		c.print(1, max);
		s.close();
	}
}
