<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<HTML>
    <HEAD>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>ISAE Cnam liban : Portail Système d'information</title>
        <meta name="description"
              content="Cellule recherche et développement : Système d'information ISAE Cnam Liban cours et développement Open source et orienté objet java html xml sous linux à l'ISAE CNAM par Pascal Fares. Composant et j2ee" />
        <meta name="keywords"
              content="universite, cours, inscription, Fares, ISAE, CNAM, Liban, portal, informatique, Pascal, java, j2ee, j2me" />
        <meta name="robots" content="All" />
        <link rel="stylesheet" type="text/css" href="/themes/isae.css" type="text/css" />
        <link rel="stylesheet" href="/menuIsae/css3menu1/style.css" type="text/css" />
    </HEAD>
    <body>
            <div id='index-content'>
                <table  cellpadding="0" cellspacing="0" width="100%" border="0">
<tr><td colspan="2">
                <a href="/" alt="Applications ISAE Cnam Liban" title="Vers les applications de l'ISAE Cnam Liban"> <img alt="Banière ISAE Cnam Liban" src="http://si.cofares.net/images/ISAE/depinfo-header.jpg" /></a> 
</td></tr>
                    <tr>
                        <td border=1 width="119px"  valign="top">
                            <?php include "gauchep.html"; 
                             ?>
                        </td>
                        <td valign="top">
<table><tbody><tr><td>
<?php include("menuIsae.html"); ?>
</td></tr>
<tr><td valign="top">

                            <?php
                            if (isset ($_GET['page'])) {
                                include ($_GET['page']);
                            } else if (isset ($_GET['ref'])) {
                                    echo "<base href=\"$_GET[ref]\" />";
                                    readfile ($_GET[ref]);
                                } else include ("Acceuil.php");
                            ?>
                        </td>
</tr></tbody></table>
                    </tr>
                </table>
                <?php include "footer.htm" ?>
            </div>
    </body>
</html>
