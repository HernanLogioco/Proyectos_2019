<?php
	$Servidor = "127.0.0.1";
	$Usuario = "root";
	$Password = "";
	$BaseDatos = "perfumeria";


	$enlace = mysqli_connect($Servidor,$Usuario,$Password) or die("Error en la conexion");
	$enlace->set_charset('utf8');
	$bd = mysqli_select_db($enlace,$BaseDatos) or die ("Error de acceso a la base de datos");
?>