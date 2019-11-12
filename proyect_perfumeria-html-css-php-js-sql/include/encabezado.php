<!DOCTYPE html>
<html lang="es">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.min.css">
    <link rel="stylesheet" href="css/miEstilo.css">
	<link rel="stylesheet" href="css/fonts.css">
    <title>Perfumes ★★ＡしіᏟ℮★★</title>
  </head>
  <body>

  	<!-- Estilo iconos -->
  	<style>
  		.bigicon {
		font-size: 35px;
		color: lime;
		}
	</style>
 
   <!-- <section class="container-fluid slider d-flex justify-content-center align-items-center">
   	<h1 class="display-3 font-weight-bold " style=" color: #172B83;" >Alice</h1>
   </section>
    />-->
  
  <div id="carouselExampleIndicators" class="carousel slide " style="margin-top: 83px;margin-bottom: 0px;" data-ride="carousel">
  <ol class="carousel-indicators">
    <li data-target="#carouselExampleIndicators" data-slide-to="0" class="active"></li>
    <li data-target="#carouselExampleIndicators" data-slide-to="1"></li>
    <li data-target="#carouselExampleIndicators" data-slide-to="2"></li>
  </ol>
  <div class="carousel-inner ">
    <div class="carousel-item active " >
      <img class="d-block w-100 img-fluid slider img-thumbnail" src="./img/slider/slider6.jpg" alt="primer slide">
    </div>
    <div class="carousel-item">
      <img class="d-block w-100 img-fluid slider img-thumbnail" src="./img/slider/slider3.jpg" alt="segunda slide">
    </div> 
    <div class="carousel-item">
      <img class="d-block w-100 img-fluid slider img-thumbnail" src="./img/slider/slider1.jpg" alt="tercera slide">
    </div>
  </div>
  <a class="carousel-control-prev" href="#carouselExampleIndicators" role="button" data-slide="prev">
    <span class="carousel-control-prev-icon " aria-hidden="true"></span>
    <span class="sr-only">Anterior</span>
  </a>
  <a class="carousel-control-next" href="#carouselExampleIndicators" role="button" data-slide="next">
    <span class="carousel-control-next-icon" aria-hidden="true"></span>
    <span class="sr-only">Siguiente</span>
  </a>
</div>





	<!--barra de navegacion -->


	<nav class="fixed-top navbar navbar-expand-lg navbar-light font-weight-bold p-1" style="background-color: #A9F5E1;	 ">
			<!-- logo barra de navegacion -->
		<a class="navbar-brand" href="./index.php"><img src="img/logo1.jpg" width="40" height="40" alt="logo"></a>

			<!--hace q barra de navegacion sea expansible en resoluciones pequeñas agregando un botton q la expande -->
		<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
			<span class="navbar-toggler-icon"></span>
		</button>


		<div class="collapse navbar-collapse text-center" id="navbarSupportedContent">
			<ul class ="navbar-nav mr-auto">
				<li class="nav-item">
					<a class="nav-link" href="./index.php">Inicio</a></li>
				<li class="nav-item">
					<a class="nav-link" href="./nosotros.php">Nosotros</a></li>
				<li class="nav-item">
					<a class="nav-link" href="./contacto.php">Contacto</a>
				</li>
				<li class="nav-item">
					<a class="nav-link" href="tienda.php">Tienda</a>
				</li>
				<?php
						session_start();
						$Tienda="Tienda";
						if (isset($_SESSION['admin'])){
						echo "<li class='nav-item'>
					<a class='nav-link' href='modif_tienda.php'>Modificar Tienda</a>
				</li>";
						}
						?> 
			</ul>
			<!--BUSQUEDAD DE NAVBAR -->
		<form class="form-inline">
		<input class="form-control " type="search" placeholder="Buscar..." aria-label="Search">	
		<button class="btn btn-outline-dark bg-info my-1" type="submit">Buscar</button>
			
			<div>
				<a class="nav-link text-success" href="./login.php">
					<i class="fa fa-user bigicon mr-2"></i>
					<span class="text-dark d-inline-block text-truncate text-capitalize">
						<?php
						$MiCuenta="Mi Cuenta";
						if (isset($_SESSION['usuario'])){
							$MiCuenta=$_SESSION['usuario'];
						echo $MiCuenta."<a href='./cerrarsesion.php'>Salir</a>";
						}else if (isset($_SESSION['admin'])){
							$MiCuenta=$_SESSION['admin'];
							echo $MiCuenta."<a href='./cerrarsesion.php'>Salir</a>";
						}else echo "Mi Cuenta</a></span>";
						?>
		
			</div>
			
		</form>

		</div>

	</nav>
