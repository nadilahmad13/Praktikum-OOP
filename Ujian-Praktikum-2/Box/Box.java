import java.util.List;

public class Box<T> {
    private List<T> contents;

    public Box(List<T> contents) {
        this.contents = contents;
    }

    public List<T> getContents(){
        return contents;
    }
}