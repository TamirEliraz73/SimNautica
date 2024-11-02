import lombok.Getter;
import org.jetbrains.annotations.NotNull;

@Getter
public abstract class Structure extends SimObject {
    protected float amount;
    private final @NotNull Vector2f location;
    
    protected Structure(@NotNull String name, @NotNull Vector2f location, float amount) {
        super(name);
        this.location = location;
        this.amount = amount;
    }
    
    @Override
    public void update() { }
    
    public void deposit(float supply) { }
    
    public float withdraw(float request) { return 0.0f; }
    
    protected float withdrawHelper(float request) {
        float res;
        if (request > getAmount()) {
            res = getAmount();
            amount = 0;
        } else {
            res = request;
            amount -= request;
        }
        return res;
    }
}
