<?php include('./include/encabezado.php');
include('./include/conexion1.php');
if (!isset($_SESSION['admin'])) {
 header("location: ./index.php");
}
 ?>
 <h2 class="text-center display-4 font-weight-bold text-danger">Lista de Productos </h2>
	<table class="container-fluid text-center table">
  <thead class="thead-dark">
    <tr class="bg-dark">
      <th>Id</th>
      <th>Nombre</th>
      <th>Marca</th>
      <th>Imagen</th>
      <th>Descripción</th>
      <th>Precio</th>
      <th>Vencimiento</th>
      <th>Stock</th>
      <th>Proveedor</th>
      <th>Modificar</th>
      <th>Eliminar</th>
      <th><button class="btn btn-info btn-sm" type='button' onclick="window.location='alta.php'">+Nuevo</button></th>

    </tr>
  </thead>
  <tbody><?php 
$sql="SELECT* FROM productos";
$consulta=mysqli_query($enlace,$sql);
while ($columna=mysqli_fetch_array($consulta)) {
	echo"<tr>
			<th class='align-middle' scope='row'>".$columna['id_producto']."</th>
			<td class='align-middle' >".$columna['nombre_producto']."</td>
			<td class='align-middle' >".$columna['marca_producto']."</td>
			<td class='align-middle' >
        <center><div style='width: 100px; height: 100px;'>
          <img  class='img-fluid' src='".$columna['imagen_producto']."'/>
        </div></center></td>
			<td class='align-middle' >".$columna['descripcion_producto']."</td>
			<td class='align-middle' >".$columna['precio_producto']."</td>
			<td class='align-middle' >".$columna['fecha_vencimiento']."</td>
			<td class='align-middle' >".$columna['stock_producto']."</td>
			<td class='align-middle' >".$columna['proveedor']."</td>

      <td>  <a href='modificar_prod.php?id_producto=".$columna['id_producto']."'> <button class='btn btn-info btn-sm' type='button'>Modificar</button> </a> </td>

    <td>  <a href='eliminar_prod.php?id_producto=".$columna['id_producto']."'>
     <button class='btn btn-info btn-sm' type='button'>Eliminar</button> </a> </td>

		</tr>";
}echo"</tbody></table>";
mysqli_close($enlace);
include('./include/pie.php');
 ?>

