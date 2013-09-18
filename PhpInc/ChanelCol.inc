<?php
/*****************************************************************************
 * chanelCol.php : ligne de Caneaux Web
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
 * $Log: ChanelCol.inc,v $
 * Revision 1.2  2007/05/12 07:49:21  pfares
 * Progress toward milestone.
 * Adding some content
 * Modifiying the styles
 *
 * Revision 1.1.1.1  2007/05/07 08:16:20  pfares
 * nit
 *
 * Revision 1.4  2001/05/20 12:29:05  pfares
 * avec $root
 *
 * Revision 1.3  2001/05/09 18:30:50  pfares
 * *** empty log message ***
 *
 * Revision 1.2  2001/05/09 18:14:54  pfares
 * Commentaires (pas de tests serieux)
 *
 *****************************************************************************/

 $root=getenv ("DOCUMENT_ROOT");
 include_once("Chanel.inc");
/**
* une ligne de caneaux
*/
class ChanelCol {
  var $chan;/* Le tableau des caneaux représentant une ligne */
  function ChanelCol() {
     $this->chan=array();
  }
  /**
    * ajout d'un canal
    */
  function addChanel($t,$f,$c=1, $s=1) {
    $this->chan[count($this->chan)]=new Chanel($t,$f,$c,$s);
  }
 
  function addFlux($t,$f,$c=1, $s=0) {
    $this->chan[count($this->chan)]=new Chanel($t,"http://feed2js.isae.edu.lb/feed2js.php?src=".$f."&chan=y&date=n&utf=y&targ=y&html=y&desc=1",$c,$s);
  }
  /**
    */
  function gen() {
    echo "<tr>";
    $i=0;
    $w=100/count($this->chan);
    while ($i < count($this->chan)) {
echo "<TD class=intro valign=top width=\"$w"."%\" colspan=".$this->chan[$i]->getColspan().">";
      $this->chan[$i]->gen();
echo "</TD>";
      $i = $i+1;
    }
    //reset ($this->chan);
    echo "</tr>";
  }
};
?>
