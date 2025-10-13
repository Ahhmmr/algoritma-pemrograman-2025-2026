<?php
    $nim="I.2510531";
    $nama='Ibnu Ahmar Ihsanudin';
    $umur=20;
    $nilai=98,5;
    $status=true;

    echo"NIM: <b>$nim</b>","<br>";
    echo"NAMA: <b>$nama</b>","<br>";
    echo"UMUR: <b>$umur</b>","<br>";
    echo"NILAI: <b>$nilai</b>","<br>";
    
    if ($status){
        echo"Status:Aktif";
    }
    else{
        echo"Status:Tidak Aktif"
    }

?>