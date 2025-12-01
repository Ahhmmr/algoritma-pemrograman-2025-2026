<?php
    function nama(){
        
        $nama = readline("Masukan Nama :");
        $isAhmar = true;
        if ($nama != "Ahmar"){
            $isAhmar = false;
            echo $isAhmar . "\n";
            echo "nama salah, tolong masukan ulang nama!";
            return nama();
            
        }  
        return $nama;
    }
    
    $n = nama();
    $NIM = readline("Masukan NIM :");
    echo "nama : $n \n";
    echo "saldo : RP.$NIM \n";

    
    echo "=====Menu ATM===== \n";
    echo "1. Cek saldo \n";
    echo "2. Tarik tunai \n";
    echo "3. Setor tunai \n";
    echo "4. Transfer \n";
    echo "5. Keluar \n";
    
    $menu = readline("Pilih Menu : ");
    switch($menu){
        case 1: echo "Saldo anda adalah RP.$NIM \n"; break;
        case 2: echo "Fitur belum tersedia \n"; break;
        case 3: echo "Fitur belum tersedia \n"; break;
        case 4: echo "Fitur belum tersedia \n"; break;
        case 5: echo "Keluar dari program \n"; break;
        default: echo "Menu tidak tersedia \n"; break;
    }


?>