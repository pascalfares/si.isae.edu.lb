<?php
/*****************************************************************************/
/* autochanel.inc : Génération automatique de caneau a partir d'un repertoire
/*****************************************************************************/
/* Copyright (C) 2001 cofares
 *
 * Authors: Pascal Fares \<pfares@isae.edu.lb\>
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
 * $Log: autochanel.inc,v $
 * Revision 1.1.1.1  2007/05/07 08:16:20  pfares
 * nit
 *
 * Revision 1.5  2001/05/24 09:44:14  pfares
 * *** empty log message ***
 *
 * Revision 1.4  2001/05/22 07:22:56  pfares
 * starategieMenu
 *
 * Revision 1.3  2001/05/20 12:29:05  pfares
 * avec $root
 *
 * Revision 1.2  2001/05/09 18:14:54  pfares
 * Commentaires (pas de tests serieux)
 *
 */
/*****************************************************************************/
$root=getenv ("DOCUMENT_ROOT");
include_once("Chanel.inc");
include_once("ChanelCol.inc");
include_once("ChanelRow.inc");
/**
  * Utilitaire pour la création automatique de pages
  * Basé sur les caneaux
  */
class OutilRep {
    var $dir;
    var $ext;
    var $liste;
    function listfiles () {
        $d = dir($this->dir);
  	while($entry=$d->read()) {
            /* on récupère tous les fichiers dans le répartoire qui ont
             * L'extention voulue
             */
    	    if (ereg(".".$this->ext."$",$entry)) {
      	    $this->liste[count($this->liste)]="$d->path/$entry";
    	}
    }
    return $this->liste;
  }

    function OutilRep($d,$e) {
	$this->dir=$d;
	$this->ext=$e;
        $this->listfiles ();

    }
/**
  * TODO: Le titre du canal doit provenir du fichier lui m^eme
  */
function strategieTab($nbcpl) {/*nb de canal par lignes*/
  $crc = new ChanelRow;
  $l=0;$c=0;
  while ($l*$nbcpl+$c < count($this->liste)) {
    if ($c==0) $cc = new ChanelCol;
    $cc->addChanel("Ligne=".$l."Col=".$c.$this->liste[$l*$nbcpl+$c],
                    $this->liste[$l*$nbcpl+$c]);
    $c=$c+1;

    if($c==$nbcpl) {$l=$l+1;$c=0;$crc->addRow($cc);}

  }
  if ($c > 0) $crc->addRow($cc); 
  return $crc;
}
 function strategieMenu($page) {
     $i=0;
     echo "<ul>";
     while ($i < count($this->liste)) {
        echo "<li><a href=$page?ref=".$this->liste[$i].">";       
        echo $this->liste[$i]."</a></li>";
        $i +=1;
     }
     echo "</ul>";
  }
     
}
?>
