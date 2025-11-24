nama=input("Nama Barang: ")
harga=float(input("Harga Barang : "))
jumlah=int(input("Jumlah Barang : "))


total=harga*jumlah  
if total > 53100:
    diskon = total * 0.01
else:
    diskon = 0

bayar = total - diskon

print("=====struk pembelian Jokomart=====")
print("Nama Pembeli :", nama)
print("Harga Barang : Rp.", harga)
print("Jumlah Barang :", jumlah)
print("Total Harga : Rp.", total)
print("Diskon : Rp.", diskon)
print("Total Bayar : Rp.", bayar)
print("=====================================")