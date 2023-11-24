package dependency_injection;
// dependeny injetion example

public class Computer {
    // Processor processor = new Processor("intel");
    // MOBO mobo = new MOBO("X340");
    Processor processor;
    MOBO mobo;

    public Computer(Processor p1, MOBO mobo) {
        this.processor = p1;
        this.mobo = mobo;
    }

    public void printSpects() {
        System.out.println("processor : " + this.processor + "mobo : " + this.mobo);
    }
}
