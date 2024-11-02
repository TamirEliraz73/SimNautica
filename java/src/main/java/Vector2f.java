import lombok.Getter;
import lombok.Setter;
import lombok.experimental.Accessors;
import org.jetbrains.annotations.NotNull;

@Accessors(chain = true)
@Getter
@Setter
public class Vector2f {
    private float x, y;
    
    public Vector2f() { this(0); }
    
    public Vector2f(float xy) { this(xy, xy); }
    
    public Vector2f(@NotNull Vector2f vector2f) { this(vector2f.getX(), vector2f.getY()); }
    
    public Vector2f(float x, float y) { setXY(x, y); }
    
    public Vector2f setXY(float x, float y) { return setX(x).setY(y); }
    
    public Vector2f add(@NotNull Vector2f vector2f) { return add(vector2f, false); }
    
    public Vector2f add(@NotNull Vector2f vector2f, boolean replace) {
        if (replace) {
            setXY(getX() + vector2f.getX(), getY() + vector2f.getY()); return this;
        } else {
            return new Vector2f(getX() + vector2f.getX(), getY() + vector2f.getY());
        }
    }
    
    public Vector2f sub(@NotNull Vector2f vector2f) { return add(vector2f, false); }
    
    public Vector2f sub(@NotNull Vector2f vector2f, boolean replace) {
        if (replace) {
            setXY(getX() - vector2f.getX(), getY() - vector2f.getY()); return this;
        } else {
            return new Vector2f(getX() + vector2f.getX(), getY() + vector2f.getY());
        }
    }
    
    public Vector2f addX(float x) { setX(getX() + x); return this; }
    
    public Vector2f addX(@NotNull Vector2f vector2f) { setX(getX() + vector2f.getX()); return this; }
    
    public Vector2f addY(float y) { setY(getY() + y); return this; }
    
    public Vector2f addY(@NotNull Vector2f vector2f) { setY(getY() + vector2f.getY()); return this; }
    
    @Override
    public String toString() {
        return String.format("(%.2f, %.2f)", getX(), getY());
    }
}
