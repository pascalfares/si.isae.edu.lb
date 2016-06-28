<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Service technologie de l'information et communication", "chan/tic.html",1); 
    $crc->addChanel("Membres ISAE Cnam Liban","chan/membres.html",1);
    $crc->addRow();
    $crc->addChanel("L'équipe Recherche et Développement", "chan/actualite.html",2);
    $crc->gen();
?>
