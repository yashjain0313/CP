
abstract class Sunstar {
	 abstract void printInfo();
}


class Employee extends Sunstar {
	void printInfo()
	{
		String name = "avinash";
		int age = 21;
		float salary = 222.2F;

		System.out.println(name);
		System.out.println(age);
		System.out.println(salary);
	}
}
class abstraction {
	public static void main(String args[])
	{
		Sunstar sww = new Employee();
		sww.printInfo();
	}
}
