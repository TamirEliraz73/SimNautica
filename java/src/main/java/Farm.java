import lombok.Getter;
import org.jetbrains.annotations.NotNull;

@Getter
public class Farm extends Structure {
    private final float rate;
    
    public Farm(@NotNull String name, @NotNull Vector2f location) {
        super(name, location, 50.0f);
        this.rate = 2;
    }
    
    @Override
    public void update() {
        amount += getRate();
    }
    
    @Override
    public float withdraw(float request) { return withdrawHelper(request); }
    
    @Override
    public String toString() {
        return super.toString() + ". current amount: " + getAmount();
    }
}
