import java.time.Instant;

public class Util {
  public static long getTime() {
    // mengembalikan waktu sekarang dalam milisekon
    return Instant.now().toEpochMilli();
  }
}