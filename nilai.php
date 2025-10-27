<?PHP
$tugas=readline("Masukan nilai Tugas:");
$uts=readline("Masukan nilai UTS:");
$uas=readline("Masukan nilai UAS:");

$nilai_akhir=(0.3*$tugas)+(0.3*$uts)+(0.4*$uas);
echo"Nilai akhir=$nilai_akhir\n";
if($nilai_akhir>=60){
    echo"status:LULUS\n"
}
else{
    echo"status:TIDAK LULUS\n"
}

?>