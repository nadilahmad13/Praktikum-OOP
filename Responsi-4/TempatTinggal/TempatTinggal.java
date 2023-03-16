class TempatTinggal {
    private int luas;
    private double hargaBahanBangunan;

    public TempatTinggal(int luas, double hargaBahanBangunan){
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public int getLuas(){
        return this.luas;
    }

    public double getHargaBahanBangunan(){
        return this.hargaBahanBangunan;
    }

    public void setLuas(int luas){
        this.luas = luas;
    }

    public void setHargaBahanBangunan(double hargaBahanBangunan){
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    public Rumah(int luas, double hargaBahanBangunan){
        super(luas, hargaBahanBangunan);
    }

    public Rumah(int lebar, int panjang, double hargaBahanBangunan){
        super(lebar*panjang, hargaBahanBangunan);
    }

    public void setLuas(int lebar, int panjang){
        super.setLuas(lebar*panjang);
    }

    public double hitungBiayaBangun(){
        return this.getLuas()*this.getHargaBahanBangunan();
    }
    
    public double hitungBiayaBangun(double biayaOrmas){
        return (this.getLuas()*this.getHargaBahanBangunan()) + biayaOrmas;
    }
}

interface Kendaraan{
    public double hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan{
    private float bensin;
    private float pemakaianBensin;

    public Karavan(){
        super(0, 0);
        this.bensin = 0;
        this.pemakaianBensin = 0;
    }

    public float getBensin(){
        return this.bensin;
    }

    public float getPemakaianBensin(){
        return this.pemakaianBensin;
    }

    public void setBensin(float bensin){
        this.bensin = bensin;
    }

    public void setPemakaianBensin(float pemakaianBensin){
        this.pemakaianBensin = pemakaianBensin;
    }

    public double hitungBiayaBangun(){
        return this.getLuas()*this.getHargaBahanBangunan()*3;
    }

    public double hitungJarakTempuh(){
        return this.bensin*this.pemakaianBensin;
    }
}