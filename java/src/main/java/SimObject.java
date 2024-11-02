import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

@Getter
public abstract class SimObject {
    private final @NotNull String name;
    
    protected SimObject(@NotNull String name) {
        this.name = name;
    }
    
    public abstract void update();
    
    public abstract Vector2f getLocation();
    
    @Override
    public String toString() {
        return getClass().getSimpleName() + getName() + " at " + getLocation();
    }
}
