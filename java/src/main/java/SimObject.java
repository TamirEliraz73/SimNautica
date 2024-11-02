import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

@Getter
public abstract class SimObject {
    private final @NotNull String name;
    private @Nullable Vector2f location;
    
    protected SimObject(@NotNull String name) { this(name, null); }
    
    protected SimObject(@NotNull String name, @Nullable Vector2f location) {
        this.name = name;
        this.location = location;
    }
    
    public abstract void update();
}
