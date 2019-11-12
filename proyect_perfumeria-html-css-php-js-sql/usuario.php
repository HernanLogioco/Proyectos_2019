	<!DOCTYPE html>
	<html lang="es">
	<head>
		<meta charset="UTF-8">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<link rel="stylesheet" href=""/>
		<title></title>
	</head>
	<body>
			<?php 
			session_start();
			$usuario=$_SESSION['usuario'];

			if (isset($usuario)) {
				echo "Bienvenido $usuario";
			}else{
			
			header('location: ../bootstrap/login.php');
			exit();
			}?>
		<a href="cerrarsesion.php">Cerrar sesion</a>
	</body>
	</html>








