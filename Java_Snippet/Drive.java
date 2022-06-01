public class Drive {
    public static void main(String[] args) {
        Car car = new Car();

    }
}

interface Engine {

}

interface Driver {
    public void licenseKind();

    public void changeGear();

    public void accelerator();

}

class Car implements Engine, Driver {
    int gear = 0;
    int speed = 0;

    Car() {
    }

    public void engineStart() {
        System.out.println("Engine Start");
    }

    public int gearChange(int gearState) {

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

    @Override
    public void licenseKind() {

    }

    @Override
    public void changeGear() {
        // TODO Auto-generated method stub

    }

    @Override
    public void accelerator() {
        // TODO Auto-generated method stub

    }

}
