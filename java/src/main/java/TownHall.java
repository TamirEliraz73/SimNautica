import org.jetbrains.annotations.NotNull;

public class TownHall extends Structure {
    
    protected TownHall(@NotNull String name, @NotNull Vector2f location) {
        super(name, location, 0.0f);
    }
    
    @Override
    public void deposit(float supply) { amount += supply; }
    
    @Override
    public float withdraw(float request) {
        amount *= 0.9f;
        if (getAmount() < 1.0f) amount = 0.0f;
        return withdrawHelper(request);
    }
}
