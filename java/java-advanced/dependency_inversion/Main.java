package dependency_inversion;

// Online Java Compiler
// Use this editor to write, compile and run your Java code online
interface Switchable {
    void turnOn();

    void turnOff();
}

class LightBulb implements Switchable {
    @Override
    public void turnOn() {
        System.out.println("LightBulb: ON");
    }

    @Override
    public void turnOff() {
        System.out.println("LightBulb: OFF");
    }
}

class Fan implements Switchable {
    @Override
    public void turnOn() {
        System.out.println("Fan : ON");
    }

    @Override
    public void turnOff() {
        System.out.println("Fan : OFF");
    }
}

// High-level class representing a switch that depends on the Switchable
// interface
class Switch {
    private Switchable device;

    public Switch(Switchable device) {
        this.device = device;
    }

    public void turnOn() {
        device.turnOn();
    }

    public void turnOff() {
        device.turnOff();
    }
}

class Main {
    public static void main(String[] args) {
        // Using Dependency Inversion to switch on/off a light bulb
        // Switchable lightBulb = new LightBulb();
        Switchable fan = new Fan();
        Switch switchButton = new Switch(fan);

        switchButton.turnOn(); // Output: LightBulb: ON
        switchButton.turnOff(); // Output: LightBulb: OFF
    }
}
