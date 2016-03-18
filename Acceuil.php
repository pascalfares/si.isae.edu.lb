<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Portail des applications", "chan/annonces.html",1);
    $crc->addChanel("Vous former au Cnam Liban","chan/six.html",1);
    $crc->addRow();
    $crc->addChanel("L'équipe Recherche et Développement", "chan/actualite.html",2);
    $crc->gen();
?>
