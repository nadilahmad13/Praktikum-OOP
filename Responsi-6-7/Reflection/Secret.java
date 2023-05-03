public class Secret{
    private String email;
    private String nama;
    public static Integer counter = 0;
    private String uniqueId;

    //KELAS SUDAH PATEN, TIDAK BOLEH DIEDIT EDIT

    public Secret(String email, String nama){
        //MAGIC HAPPENED THERE.
        //Intinya konstruktor biasa, cuma ada randomisasi buat uniqueId, dan jangan lupa
        //counter++ pada bagan akhir konstruktor ini.
        this.email = email;
        this.nama = nama;
        this.uniqueId = "SECRET" + counter.toString();
        counter++;
    }

    public boolean isThis(String email){
        //GUNAKAN FUNGSI INI UNTUK MENCOCOKAN EMAIL DENGAN EMAIL YANG DIMILIKI KELAS
        return this.email.equalsIgnoreCase(email);
    }

}