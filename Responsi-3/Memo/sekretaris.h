#ifndef SEKRETARIS_H
#define SEKRETARIS_H

#include <string>
#include "memo.h"
#include "exception.h"
using namespace std;

class Sekretaris {
	public:
		/*
			Membuat objek Sekretaris dengan nilai kertas dan tinta
			default. Besar energi awal adalah ENERGI_MAX
		*/
		Sekretaris();
		/*
			Membuat objek Sekretaris dengan nilai kertas dan tinta
			sesuai yang diberikan. Besar energi awal adalah ENERGI_MAX
		*/
		Sekretaris(int kertas, int tinta);
		/*
			Dealokasi variabel-variabel yang perlu didealokasi.
			Jika tidak perlu, hapus metode ini.
		*/
		~Sekretaris();

		/*
			Membuat memo dengan isi sesuai yang diberikan. Metode ini
			menggunakan metode pakaiKertas, pakaiTinta, dan pakaiEnergi.
			Untuk membuat 1 memo akan menghabiskan 1 kertas, 1 energi,
			dan tinta sebanyak jumlah karakter pesan.

			Ada beberapa penyebab memo gagal dibuat, yaitu:
			- Jika kertas habis, akan mengeluarkan pesan dari exception,
			  ditambah dengan ", segera isi kertas"
			- Jika tinta kurang, akan mengeluarkan pesan dari exception,
			  ditambah dengan ", segera isi tinta"
			- Jika energi habis, akan mengeluarkan pesan dari exception,
			  ditambah dengan ", segera istirahat"
			- Jika pesan terlalu panjang, akan mengeluarkan pesan dari
			  exception, ditambah dengan ", perpendek pesannya"

			Jika memo gagal dibuat, maka tinta, kertas, dan energi tidak
			berkurang. Gunakan metode batalPakaiKertas, batalPakaiTinta,
			dan batalPakaiEnergi.

			Jika berhasil, maka memo akan dimasukkan ke daftar memo serta
			menampilkan pesan "Memo [<nomor_memo>] untuk <untuk> berhasil
			dibuat"

			Keterangan:
			<...> -> ganti dengan nilai yang sesuai.
		*/
		void buatMemo(string pesan, string untuk);
		/*
			Menggunakan 1 kertas.

			Jika kertas tidak cukup, maka metode ini akan melemparkan
			KertasHabisException dan tidak ada kertas yang digunakan.
		*/
		void pakaiKertas();
		/*
			Menggunakan tinta sebanyak num.

			Jika tinta tidak cukup, maka metode ini akan melemparkan
			TintaKurangException dan tidak ada tinta yang digunakan.
		*/
		void pakaiTinta(int num);
		/*
			Menggunakan 1 energi.

			Jika energi tidak cukup, maka metode ini akan melemparkan
			EnergiHabisException dan tidak ada energi yang digunakan.
		*/
		void pakaiEnergi();
		/*
			Membatalkan penggunaan 1 kertas.
		*/
		void batalPakaiKertas();
		/*
			Membatalkan penggunaan tinta sebanyak num.
		*/
		void batalPakaiTinta(int num);
		/*
			Membatalkan penggunaan 1 energi.
		*/
		void batalPakaiEnergi();
		/*
			Menambahkan jumlah tinta sebanyak num.
		*/
		void isiTinta(int num);
		/*
			Menambahkan jumlah kertas sebanyak num.
		*/
		void isiKertas(int num);
		/*
			Istirahat mengembalikan energi menjadi maksimum.
		*/
		void istirahat();
		/*
			Menampilkan status dari sekretaris. Berikut adalah format tampilan:
			<...> -> tampilkan nilai yang sesuai
			(...) -> komentar, tidak termasuk output

			--------------
			Status
			  Energi : <jumlah_energi>
			  Tinta : <jumlah_tinta>
			  Kertas : <jumlah_kertas>
			  Memo : <jumlah_memo>
			  	(untuk setiap memo ke-i, mulai dari 1)
			    Memo [<i>]
			      Pesan : <pesan_memo_i>
			      Untuk : <untuk_memo_i>
			--------------

			(Output tidak termasuk ---------- di awal dan akhir)
		*/
		void printStatus();

	private:
		/*
			Nilai maksimum energi.
		*/
		const int ENERGI_MAX = 10;
		/*
			Nilai default kertas.
		*/
		const int KERTAS_DEFAULT = 5;
		/*
			Nilai default tinta.
		*/
		const int TINTA_DEFAULT = 100;
		int energi;
		int tinta;
		int kertas;
		/*
			Jumlah memo yang berhasil dibuat.
		*/
		int memoLength;
		/*
			Daftar memo.
		*/
		Memo* memo;
};

#endif