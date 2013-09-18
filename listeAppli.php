<!-- Include the Google Friend Connect javascript library. -->
<script type="text/javascript" src="http://www.google.com/friendconnect/script/friendconnect.js"></script>
<?php  
    include "PhpInc/autochanel.inc";
    $crc=new ChanelRow;
    $crc->addRow();
    $crc->addChanel("Les applications de l'ISAE Cnam Liban","chan/appli.html",1);
    $crc->addRow();
    $crc->addChanel("L'équipe Recherche et Développement", "chan/actualite.html",1);
    $crc->gen();
?>
