<?php include('./include/encabezado.php');
include('./include/conexion1.php');
 ?>

<div class="navbar mb-3 " style="background-color: #A9F5E1;">
    <marquee direction="left" height="85px" width=100% BEHAVIOR=alternate SCROLLAMOUNT=15>
      <div class="navbar-brand d-inline-block">
       <img src="./img/generatedtext1.png"   class="d-inline-block align-top" alt="">
      </div>
    </marquee>
</div>

 <?php 
  echo "<div class='container'>
  <div class='row'>";

$sql="SELECT* FROM productos";
$consulta=mysqli_query($enlace,$sql);
while ($columna=mysqli_fetch_array($consulta)) {
echo "

    <div class='col-lg-4'>
      <div class='card'>
          <div class='m-2'>
            <img src=".$columna['imagen_producto']." class='card-img-top img-fluid img-thumbnail' alt='...'>
          </div>
          <div class='card-body'>
            <h5 class='card-title'>".$columna['nombre_producto']."</h5>
            <div><p class='btn btn-danger btn-sm'>Stock: ".$columna['stock_producto']."</p></div>
            <p class='card-text'>".$columna['descripcion_producto']."</p>
            <a href='carrito.php' class='btn btn-primary'>Comprar</a>
            <a href='#' class='btn btn-primary pull-right'>$".$columna['precio_producto']."</a>
            
        </div>
      </div>
    </div>  
 
";}?>
 </div>
 </div>
 <?php include('./include/pie.php');
 mysqli_close($enlace);
 ?>