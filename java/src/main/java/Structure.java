import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public abstract class Structure extends SimObject {
    protected float amount;
    protected Structure(@NotNull String name, @Nullable Vector2f location) {
        super(name, location);
    }
    
    @Override
    public void update() { }
    
    public void deposit() { }
    
    public void withdraw() { }
}
