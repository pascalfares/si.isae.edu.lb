#!/usr/bin/php
<?
require_once ("autochanel.inc");
$res=new OutilRep("..","html");
$rep=$res->strategieTab(3);
$rep->gen();
?>
