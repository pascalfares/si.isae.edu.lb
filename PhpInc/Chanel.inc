<?php
/*****************************************************************************
 * chanel.php : Canal Web
 *****************************************************************************
 * Copyright (C) 2001 cofares
 *
 * Authors: Pascal Fares <pfares@isae.edu.lb>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 * $Log: Chanel.inc,v $
 * Revision 1.1.1.1  2007/05/07 08:16:20  pfares
 * nit
 *
 * Revision 1.2  2001/05/09 18:14:54  pfares
 * Commentaires (pas de tests serieux)
 *
 *****************************************************************************/
/****************************************************************************
 * Definition : Un canal
 ****************************************************************************
 * Un canal est une sorte de frame qui est représenté par dans cellule d'un
 * tableau.
 * En fait une page Web est définie par un ensemble de caneaux, et pour
 * presenter les caneaux on les place dans les cellule d'un tableau
 * <WEBPAGE> :== <LIGNEDECANEAUX> | <COLONNEDECANEAU>
 * <LIGNEDECANEAU> :== <CANAL>n
 * <COLONNEDECANEAU> :== <LIGNECANEAUX>n
 * <CANAL> :== un bloc HTML normalement contenu dans BODY
 ****************************************************************************

/**
 * La classe Chanel = un titre, 
 *                    un fichier, 
 *                    nombre de cellules contigues consomés par le canal
 * remarque: Il faut qu'un styletitre soit present dans la css de la page
 * d'apartenance du canal 
 */
class Chanel {
  var $title;
  var $file;
  var $colspan;
  var $style;
  /**
   *Constructeur de canal
   */
  function Chanel($t,$f,$col,$s=1) {
    $this->title=$t;
    $this->file=$f;
    $this->colspan=$col;
    $this->style=$s;
  }
   function getColspan() {
    return $this->colspan;
   }
  /**
   * Methode Gen
   * Génére le HTML du canal (son look)
   * input:
   *   $wid : largeur du canal
   */
  function gen() {
    /*
    */
    if ($this->style==1) {

        echo "\n<table  class='tablechanel'>\n";
        echo "<tr><td class='title'>\n";
        echo $this->title ;
        echo "</td></tr>"  ;
        echo "<tr height='100%'>\n";
        echo "<td  valign=\"top\" width='100%'> ";
        readfile("$this->file");
        echo "</td></tr>";
        echo "</table>\n";
     } else include $this->file;
    
  }
 function simple() {
   echo "<a href=".$this->file.">";
   echo $this->title ;
   echo "</a>";
 }
};
?>
