<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<HTML>
    <HEAD>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>ISAE Cnam liban : Portail Système d'information</title>
        <meta name="description"
              content="Cellule recherche et développement TIC TICE : Système d'information ISAE Cnam Liban cours et développement Open source et orienté objet java html xml sous linux à l'ISAE CNAM par Pascal Fares. Composant et j2ee" />
        <meta name="keywords"
              content="universite, cours, inscription, Fares, ISAE, CNAM, Liban, portal, informatique, Pascal, java, j2ee, j2me, stic" />
        <meta name="robots" content="All" />
        <link rel="stylesheet" type="text/css" href="/themes/isae.css" type="text/css" />
        <link rel="stylesheet" href="/menuIsae/css3menu1/style.css" type="text/css" />
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-29708002-2', 'auto');
  ga('send', 'pageview');

</script>
    </HEAD>
    <body>
            <div id='index-content'>
                <table  cellpadding="0" cellspacing="0" width="100%" border="0">
<tr><td colspan="2">
                <a href="http://depinfo.isae.edu.lb" alt="Applications ISAE Cnam Liban" title="Département informaitque ISSAE Cnam Liban"> <img alt="Banière ISAE Cnam Liban" src="http://si.cofares.net/images/ISAE/depinfo-header.jpg" /></a> 
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
