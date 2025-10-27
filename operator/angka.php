<?php
$a=readline("masukan angka pertama:");
$b=readline("masukan angka kedua");

if($a>$b){
    echo"$a lebih besar dari $b";
}
else if ($a<$b){
    echo "$a lebih kecil dari $b";
}
else{
    echo "keduanya sama besar";
    echo "apakah keduanya sam besar? $a==$b\n";
}
?>