import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public class Farm extends Structure {
    protected float rate;
    
    public Farm(@NotNull String name, @Nullable Vector2f location) {
        super(name, location);
    }
    
    @Override
    public void update() {
    
    }
    
    @Override
    public void withdraw() {
    
    }
}
