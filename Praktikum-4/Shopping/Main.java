public class Main {
    public static void main(String[] args){
DaftarBelanja daftarBelanja = new DaftarBelanja(5);

daftarBelanja.belanja(10, "kotak merah tulisannya tailor kalau ga salah");
daftarBelanja.belanja(25, 5, "kotak merah tulisannya tailor kalau ga salah");
daftarBelanja.belanja("shampo heri", 100);
daftarBelanja.belanja("sabun mandi", 2);
daftarBelanja.belanja("sikat gigi");

daftarBelanja.print();
    }
}