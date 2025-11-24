<?php
    $nama_barang=readline("Masukkan nama barang: ");
    $jumlah_barang=readline("Masukkan jumlah barang: ");
    $harga_barang=readline("Masukkan harga barang: ");   
    
    $total=$jumlah_barang*$harga_barang;
    if ($total>53100){
        $diskon=$total*0.1;
    } else {
        $diskon=0;
    }

    $total_bayar=$total-$diskon;
    echo "====struk pembelian jokomart====\n";
    echo "Nama barang: $nama_barang\n";
    echo "Harga barang: Rp. $harga_barang\n";
    echo "Jumlah barang: $jumlah_barang\n";
    echo "Total harga: Rp. $total\n";
    echo "Diskon: Rp. $diskon\n";
    echo "Total bayar: $total_bayar\n";
    echo "===============================\n";



