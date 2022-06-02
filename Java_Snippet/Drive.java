import java.util.HashMap;
import java.util.Scanner;

public class Drive {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Driver driver = new Driver(1);
        Car car2 = new Car(driver);
        int speed = 0;

        if(car2.inPerson){
            driver.licenseKind();
            car2.engineStart();
            String wantGear = "";
            String wantBrake = "";
            while(car2.state){

                speed = car2.accelerator(speed);

                System.out.println("speed: "+speed+"km/h");

                switch(speed)
                {
                    case 30:
                        wantGear = input.nextLine();
                        car2.mGearChange(car2.speed, car2.gear, wantGear);
                        break;
                    case 60:
                        wantGear = input.nextLine();
                        car2.mGearChange(car2.speed, car2.gear, wantGear);
                        break;
                    case 80:
                        wantGear = input.nextLine();
                        car2.mGearChange(car2.speed, car2.gear, wantGear);
                        break;
                    case 110:
                        wantGear = input.nextLine();
                        car2.mGearChange(car2.speed, car2.gear, wantGear);
                        break;
                    case 160:
                        wantGear = input.nextLine();
                        car2.mGearChange(car2.speed, car2.gear, wantGear);
                        break;
                }
                if(speed == 160){
                    System.out.println("Maximum Speed, Speed down please!");
                    System.out.println("Brake? yes or no");

                    wantBrake = input.nextLine();

                    if(wantBrake.equals("yes")){
                        speed = car2.brake(speed);
                    }else{
                        System.out.println("Crash!!!! Accident!!!");
                        car2.engineEnd();
                        break;
                    }
                }
            }
        }
        input.close();
	}
}

class Driver  {
	int kind = 0;

	Driver(int licenseKind){
        this.kind = licenseKind;
    }
	
	public String licenseKind()
	{
		switch(kind){
			case 1: return "Manual";
			case 2: return "Auto";
			default: return "no license!";
		}
	}

	

}

interface Ratio{
    HashMap<String, Integer> gearRatio = new HashMap<String, Integer>(){{
        put("1", 0);
        put("2", 30);
        put("3", 60);
        put("4", 80);
        put("5", 110);
    }};
    

}


class Car implements Ratio{
	int gear = 0;
    boolean inPerson = false;
	boolean state = false;
    int driveKind = 0;
    int speed = 0;

	Car() {
	    System.out.println("No person in the car");
	}
	
	Car(Driver person){
	    System.out.println("Person in the car");
        inPerson = true;
	}

	public void engineStart() 
	{

        if(inPerson){
		    state = true;
		    System.out.println("Engine Start!!!");
            System.out.println("Brrrrrr...!!");
        }else{
		    System.out.println("Person not in the car");
        }

	}

    public void engineEnd(){
        state = false;
        System.out.println("Engine End...");
    }

    public int mGearChange(int sp, int gearState, String wantGear)
	{
		for(int ratio : gearRatio.values()){
            if(sp < ratio){
                System.out.println("not shift gear");
                return gearState;
            }
        }

        if(sp < 30){
            System.out.println("Gear 1");
            gear = 1;
        }
        else if(sp<60){
            System.out.println("Gear 2");
            gear = 2;
        }
        else if(sp<80){
            System.out.println("Gear 3");
            gear = 3;
        }
        else if(sp<110){
            System.out.println("Gear 4");
            gear = 4;
        }else if(sp<160){
            System.out.println("Gear 5");
            gear = 5;
        }
			
		return gear;
	}

    public int accelerator(int nowSpeed)
	{
        nowSpeed++;
        
        return nowSpeed;
	}
    public int brake(int nowSpeed)
    {
        nowSpeed-=5;
        
        return nowSpeed;
    }

}
