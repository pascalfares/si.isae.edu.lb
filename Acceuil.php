<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Portail des applications)", "chan/annonces.html",1);
    $crc->addChanel("Qui sommes nous?", "chan/tic.html",1);
    $crc->addRow();
    $crc->addChanel("Le Système d'information de l'ISAE","chan/enSavoirPlus.html",1);
    $crc->addChanel("L'équipe Recherche et Développement", "chan/actualite.html",1);
    $crc->gen();
?>
