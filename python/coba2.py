tugas=float(input('masukan nilai tugas: '))
uts=float(input("masukan nilai uts: "))
uas=float(input('masukan nilai uas: '))

nilai_akhir=(0.15*tugas)+(0.35*uts)+(0.50*uas)

if nilai_akhir>80:
    grade='A'
elif nilai_akhir>70:
    grade='B'
elif nilai_akhir>60:
    grade='C'
elif nilai_akhir>50:
    grade='D'
else:
    grade='E'

if nilai_akhir>60:
    status="Lulus"
else:
    status="tidak lulus"

    print('Nilai akhir:',nilai_akhir)
    print('Grade:',grade)
    print("Status kelulusan: ",status)