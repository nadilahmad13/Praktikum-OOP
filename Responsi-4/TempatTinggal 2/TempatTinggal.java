
class TempatTinggal {
    private int luas;
    private double hargaBahanBangunan;
    
    public TempatTinggal(int luas, double hargaBahanBangunan) {
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
    
    public TempatTinggal(int lebar, int panjang, double hargaBahanBangunan) {
        this.luas = lebar * panjang;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
    
    public int getLuas() {
        return luas;
    }
    
    public void setLuas(int luas) {
        this.luas = luas;
    }
    
    public void setLuas(int lebar, int panjang) {
        this.luas = lebar * panjang;
    }
    
    public double getHargaBahanBangunan() {
        return hargaBahanBangunan;
    }
    
    public void setHargaBahanBangunan(double hargaBahanBangunan) {
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
    
    public double hitungBiayaBangun() {
        return luas * hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    public Rumah(int luas, double hargaBahanBangunan) {
        super(luas, hargaBahanBangunan);
    }
    
    public Rumah(int lebar, int panjang, double hargaBahanBangunan) {
        super(lebar, panjang, hargaBahanBangunan);
    }
    
    public double hitungBiayaBangun(double biayaOrmas) {
        return getLuas() * getHargaBahanBangunan() + biayaOrmas;
    }
}

interface Kendaraan {
    double hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan {
    private float bensin;
    private float pemakaianBensin;

    public Karavan(){
        super(0, 0);
        this.bensin = 0;
        this.pemakaianBensin = 0;
    }
    
    public Karavan(int luas, double hargaBahanBangunan, float bensin, float pemakaianBensin) {
        super(luas, hargaBahanBangunan);
        this.bensin = bensin;
        this.pemakaianBensin = pemakaianBensin;
    }

    public double hitungBiayaBangun() {
        return super.hitungBiayaBangun() * 3;
    }

    public double hitungJarakTempuh() {
        return bensin * pemakaianBensin;
    }

    public float getBensin() {
        return bensin;
    }

    public void setBensin(float bensin) {
        this.bensin = bensin;
    }

    public float getPemakaianBensin() {
        return pemakaianBensin;
    }

    public void setPemakaianBensin(float pemakaianBensin) {
        this.pemakaianBensin = pemakaianBensin;
    }
}
