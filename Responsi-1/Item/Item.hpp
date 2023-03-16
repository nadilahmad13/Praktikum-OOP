// Item.hpp

#ifndef __ITEM_HPP__
#define __ITEM_HPP__

class Item {
private:
	int stock;						// Jumlah stok item
	int price;						// Harga item
	int sold;						// Jumlah item yang terjual. Diawali dengan 0.
	const int serialNum;			// Nomor serial item sesuai urutan pendaftaran item

public:
	static int totalRevenue;		// Total penghasilan dari penjualan semua item
	static int totalItems;			// Jumlah item yang telah didaftarkan

	Item();
	/* Ctor default: stok adalah 0 dan harga barang adalah 0 */
	
	Item(int stock, int price);
	Item(const Item&);
	/* cctor item, mengkopi seluruh atribut item, termasuk atribut sold */
	~Item();
	
	int getSerialNum() const;
	int getSold() const;
	int getPrice() const;

	void addStock(int addedStock);
	/* Menambahkan stok item. Tidak akan bernilai negatif. */
	void sell(int soldStock);
	/* Menjual item. Jika item tidak cukup, maka item terjual hanya sampai stok item habis */
	void setPrice(int newPrice);
};


#endif