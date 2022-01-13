import java.util.*;

class area {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String fig = sc.next();

		if (fig.equals("Triangle") || fig.equals("triangle")) {
			System.out.print("Enter The Side of Triangle: ");
			double s = sc.nextDouble();
			System.out.print("Enter The Hegith of Triangle: ");
			double h = sc.nextDouble();
			System.out.print("Area of The Traingle: ");
			System.out.print(s * h);

		} else if (fig.equals("Square") || fig.equals("square")) {
			System.out.print("Enter The Side of Square: ");
			double s = sc.nextDouble();
			System.out.print(s * s);

		} else if (fig.equals("Rectangle") || fig.equals("ectangle")) {
			System.out.print("Enter The Width of Rectangle: ");
			double w = sc.nextDouble();
			System.out.print("Enter The Height of Rectangle: ");
			double h = sc.nextDouble();
			System.out.print("Area of Rectangle: ");
			System.out.print(w * h);

		} else if (fig.equals("Circle") || fig.equals("circle")) {
			System.out.print("Enter The Radius of Circle: ");
			double s = sc.nextDouble();
			System.out.print("Area of Circle: ");
			System.out.print(3.14 * s);

		} else {
			System.out.print("Undefined Figure");
		}

	}
}