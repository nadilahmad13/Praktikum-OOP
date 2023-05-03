public class Main_Dummy {
    public static void main(String[] args) {
        Karakter pendekar = new Karakter(
            "Wiro Sableng",
            new Pendekar("Kapak Maut Naga Geni", "Perisai Matahari")
        );
        Karakter pembunuh = new Karakter(
            "Jack The Ripper",
            new Pembunuh("Liston Knife")
        );
        Karakter penyihir = new Karakter(
            "Merlin",
            new Penyihir("Ohnyalei", "Fireball")
        );
        Karakter domba = new Karakter(
            "Domba",
            new Domba()
        );

    
        pendekar.serang(pembunuh);
        // Wiro Sableng, sang pendekar, menyerang Jack The Ripper dengan Kapak Maut Naga Geni
        // Jack The Ripper menerima serangan sebesar 15
        // Sisa health Jack The Ripper adalah 85
        domba.serang(penyihir);
        // Moooooo

        penyihir.gunakanKemampuan(domba);
        // Merlin menyerap 40 mana dari Domba
        // Domba memiliki 60 mana yang tersisa
        penyihir.gunakanUltimate(domba);
        // Merlin menyihir Domba menjadi domba
        penyihir.reduceMana(80);
        System.out.println(penyihir.getMana());
        // 10
        penyihir.serang(domba);
        // Merlin, memukul Domba dengan Ohnyalei
        // Domba menerima serangan sebesar 5
        // Sisa health Domba adalah 95
        
        // Menggunakan kemampuan.
        pendekar.gunakanKemampuan(pembunuh);
        // Wiro Sableng memukul mundur Jack The Ripper dengan Perisai Matahari
        // Jack The Ripper menerima serangan sebesar 40
        // Sisa health Jack The Ripper adalah 45
        pembunuh.gunakanKemampuan(penyihir);
        // Jack The Ripper menyerap health Merlin sebesar 20
        // Merlin menerima serangan sebesar 20
        // Sisa health Merlin adalah 80
        penyihir.gunakanKemampuan(pendekar);
        // Merlin menyerap 40 mana dari Wiro Sableng
        // Wiro Sableng memiliki 50 mana yang tersisa
        domba.gunakanKemampuan(penyihir);
        // Mbeeeeeeekk

        pendekar.gunakanUltimate(pembunuh);
        // Wiro Sableng menyerukan nada peperangan
        // Wiro Sableng mendapatkan 30 health dan 20 mana
        // Wiro Sableng menyerang Jack The Ripper dengan Kapak Maut Naga Geni dan Perisai Matahari
        // Jack The Ripper menerima serangan sebesar 55
        // Sisa health Jack The Ripper adalah 10
        System.out.println(pendekar.getHealth());
        // 130
        System.out.println(pendekar.getMana());
        // 30
        pendekar.terimaSerangan(130);
        // Wiro Sableng menerima serangan sebesar 130
        // Sisa health Wiro Sableng adalah 0
        // Wiro Sableng telah mati
        pembunuh.gunakanUltimate(pendekar);
        // Jack The Ripper menyalin wujud Wiro Sableng
        // Wiro Sableng berhasil disalin wujudnya
        // Jack The Ripper memperoleh 40 health dan 20 mana
        pembunuh.gunakanUltimate(penyihir);
        // Jack The Ripper menyerukan nada peperangan
        // Jack The Ripper mendapatkan 30 health dan 20 mana
        // Jack The Ripper menyerang Merlin dengan Kapak Maut Naga Geni dan Perisai Matahari
        // Merlin menerima serangan sebesar 55
        // Sisa health Merlin adalah 25
        penyihir.gunakanUltimate(pembunuh);
        // Merlin menyihir Jack The Ripper menjadi domba
        pembunuh.gunakanUltimate(penyihir);
        // Mbeeekkk mbeeekkk mbeeekkk
  }
}

// FULL EXPECTED OUTPUT
/**
 * 
Wiro Sableng, sang pendekar, menyerang Jack The Ripper dengan Kapak Maut Naga Geni
Jack The Ripper menerima serangan sebesar 15
Sisa health Jack The Ripper adalah 85
Moooooo
Merlin menyerap 40 mana dari Domba
Domba memiliki 60 mana yang tersisa
Merlin menyihir Domba menjadi domba
10
Merlin, memukul Domba dengan Ohnyalei
Domba menerima serangan sebesar 5
Sisa health Domba adalah 95
Wiro Sableng memukul mundur Jack The Ripper dengan Perisai Matahari
Jack The Ripper menerima serangan sebesar 40
Sisa health Jack The Ripper adalah 45
Jack The Ripper menyerap health Merlin sebesar 20
Merlin menerima serangan sebesar 20
Sisa health Merlin adalah 80
Merlin menyerap 40 mana dari Wiro Sableng
Wiro Sableng memiliki 50 mana yang tersisa
Mbeeeeeeekk
Wiro Sableng menyerukan nada peperangan
Wiro Sableng mendapatkan 30 health dan 20 mana
Wiro Sableng menyerang Jack The Ripper dengan Kapak Maut Naga Geni dan Perisai Matahari
Jack The Ripper menerima serangan sebesar 55
Sisa health Jack The Ripper adalah 10
130
30
Wiro Sableng menerima serangan sebesar 130
Sisa health Wiro Sableng adalah 0
Wiro Sableng telah mati
Jack The Ripper menyalin wujud Wiro Sableng
Wiro Sableng berhasil disalin wujudnya
Jack The Ripper memperoleh 40 health dan 20 mana
Jack The Ripper menyerukan nada peperangan
Jack The Ripper mendapatkan 30 health dan 20 mana
Jack The Ripper menyerang Merlin dengan Kapak Maut Naga Geni dan Perisai Matahari
Merlin menerima serangan sebesar 55
Sisa health Merlin adalah 25
Merlin menyihir Jack The Ripper menjadi domba
Mbeeekkk mbeeekkk mbeeekkk
 */