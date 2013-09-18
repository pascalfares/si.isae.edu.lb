<?php
/*****************************************************************************
 * chanelRow.php : colonne de Caneau Web
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
 * $Log: ChanelRow.inc,v $
 * Revision 1.1.1.1  2007/05/07 08:16:20  pfares
 * nit
 *
 * Revision 1.4  2001/05/20 12:29:05  pfares
 * avec $root
 *
 * Revision 1.3  2001/05/09 18:30:28  pfares
 * *** empty log message ***
 *
 * Revision 1.2  2001/05/09 18:14:54  pfares
 * Commentaires (pas de tests serieux)
 *
 *****************************************************************************/
include_once("ChanelCol.inc");
/**
* une colonne de ligne de caneaux
*/
class ChanelRow {
  var $rowi;
  function addRow() { 
    $this->rowi[count($this->rowi)]=new ChanelCol;
    return $this->rowi[count($this->rowi)-1];
  }

  function addChanel($t,$f,$c=1,$s=1) {
    $this->rowi[count($this->rowi)-1]->addChanel($t,$f,$c,$s);
  }
  function addFlux($f,$c=1) {
    $this->rowi[count($this->rowi)-1]->addFlux("<a href=$f> visiter!</a>",$f,$c);
  }
   
  function gen() {
	echo "<table border='0' width=\"100%\">";
        $i=0;
        while($i < count($this->rowi)) {
                $c=$this->rowi[$i];
		$c->gen();
		$i=$i+1;
	}
        echo "</table>";
    }
}


