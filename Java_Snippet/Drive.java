import java.util.Scanner;

public class Drive {
	public static int speed = 0;
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		// System.out.println();
		
		Car car = new Car();
		Driver driver = new Driver();
		
		car.engineStart();
		int sec = 0;
		while(car.state){
			
			
			if(speed == 30) break;
		}

	}
}

interface Engine {

}

class Driver {
	
	Driver(){}
	
	public String licenseKind(int kind)
	{
		switch(kind){
			case 1: return "Manual";
			case 2: return "Auto";
			default: return "no license!";
		}
	}

	public int gearChange(int gearState)
	{
		switch (gearState) {
			case 1:
				System.out.println("Gear 1");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:

			default:
				System.out.println("Gear 0");
				break;
		}
		return gear;
	}

	public void accelerator()
	{
	   speed++;
	}

}

class Car {
	int gear = 0;
	
	boolean state = false;
	
	Car() {
	    System.out.println("no person in the car");
	}
	
	Car(Driver person){
	    System.out.println("person in the car");
	}

	public void engineStart() 
	{
		System.out.println("Engine Start");
		state = true;
		System.out.println("This car is ");
	}

}
