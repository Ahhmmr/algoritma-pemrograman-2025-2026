<?php
echo "Masukan NIM: ";
$nim = intval(trim(fgets(STDIN)));

$arru = [];

for ($i = 0; i < $nim; $i++) {
    $arru[$i] =
        intval(trim(fgets(STDIN)));
}

$total = array_sum($arru);
$maks = max($arru);
$min = min($arru);

$mean = $total / $nim;

$reverse
    = array_reverse($arru);
echo "Total: $total\n";
echo "Mean: $mean\n";
echo "Max: $maks\n";
echo "Min: $min\n";
echo "Reverse: ";
foreach ($reverse as $value) {
    echo $value . "";
}
echo "\n";
