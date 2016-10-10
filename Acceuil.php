<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Annonces / informations", "chan/annonces.html",1);
    $crc->addChanel("Vous former au Cnam Liban","chan/six.html",1);
    $crc->addRow();
    $crc->addChanel("L'équipe Environnement Numérique de Travail ENT", "chan/actualite.html",2);
    $crc->gen();
?>
