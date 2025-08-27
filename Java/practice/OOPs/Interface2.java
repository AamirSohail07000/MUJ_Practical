// Create an interface Playable with method play(). Implement it in classes Football and Cricket.

// Interface
interface Playable {
    void play();
}

// Football implements Playable
class Football implements Playable {
    public void play() {
        System.out.println("Playing Football");
    }
}

// Cricket implements Playable
class Cricket implements Playable {
    public void play() {
        System.out.println("Playing Cricket");
    }
}

// Main
public class Interface2 {
    public static void main(String[] args) {
        Playable game1 = new Football();
        Playable game2 = new Cricket();

        game1.play();
        game2.play();
    }
}
