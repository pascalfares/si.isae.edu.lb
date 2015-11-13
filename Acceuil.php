<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Portail des applications de l'ISSAE Cnam Liban", "chan/annonces.html",1);
    $crc->addChanel("Six raisons de vous former au CNAM LIBAN","chan/six.html",1);
    $crc->addRow();
    $crc->addChanel("L'équipe Recherche et Développement", "chan/actualite.html",2);
    $crc->gen();
?>
