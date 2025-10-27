tugas=float(input("Masukan nilai tugas:"))
uts=float(input("masukan nilai UTS:"))
uas=float(input("Masukan nilai UAS:"))

nilai_akhir=(0.3*tugas)+(0.3*uts)+(0.4*uas)

print("nilai akhir",nilai_akhir)
if nilai_akhir>=60:
    print("status:LULUS")

else:
    print("status:TIDAK LULUS")