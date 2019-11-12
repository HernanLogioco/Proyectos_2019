<?php include('./include/encabezado.php');
include('./include/conexion1.php');
if (!isset($_SESSION['admin'])) {
 header("location: ./index.php");
}
 ?>
  <h2 class="text-center display-4 font-weight-bold text-danger">Nuevo Producto</h2>
<form class="container font-weight-bold mt-5" method="post" enctype="multipart/form-data">

    <div class=" form-group"> <!-- Full Name -->
        <label>Nombre</label>
        <input type="text" class="form-control" name="nombre" required>
    </div>    

    <div class=" form-group"> <!-- Full Name -->
        <label>Marca</label>
        <input type="text" class="form-control" name="marca" required>
    </div>      
    <p>El archivo debe ser menor a 200kb [jpg, jpeg, gif, bmp, png].</p>   
    <div class="custom-file my-4">
        <input type="file" class="custom-file-input" lang="es" name="imagen">
        <label class="custom-file-label font-weight-bold">Seleccionar Imagen</label>
    </div>

    <div class="form-group"> <!-- City-->
        <label>Descripción</label>
        <input type="textarea" class="form-control" name="descripcion" required>
    </div>

    <div class="form-group"> <!-- City-->
        <label>Precio</label>
        <input type="number" class="form-control" name="precio" required>
    </div>

    <div class="form-group"> <!-- City-->
        <label>Vencimiento</label>
        <input type="date" class="form-control" name="vencimiento" required>
    </div>

    <div class="form-group"> <!-- City-->
        <label>Stock</label>
        <input type="number" class="form-control" name="stock" required>
    </div>                                    
                            
    <div class="form-group"> <!-- State Button -->
        <label>Proveedor</label>
        <select class="form-control" name="proveedor" required>
            <option value="13213">All Star</option>
            <option value="32322">Big Fragancy</option>
            <option value="41221">Arizona</option>
           
        </select>                    
    </div>     
    
    <div class="form-group-inline"> <!-- Submit Button -->
        <button type="submit" name="submit" class="btn btn-primary">Aceptar</button>
        <button type="button" class="btn btn-primary" onclick="window.location.href='/bootstrap/modif_tienda.php'">Cancelar</button>
         <button type="reset" class="btn btn-primary">Reestablecer</button>
         <input type="hidden" name="id_producto">
    </div>     
</form>


<?php 
//ya que todos los campos son obligatorios con required
if (isset($_REQUEST['submit']) ){
$tipo = $_FILES["imagen"]["type"];
$admitidos = ["image/jpg", "image/jpeg", "image/gif", "image/bmp", "image/png"];
$tamanio_img=$_FILES["imagen"]["size"];
$limite_kb=200;



if (array_search(strtolower($tipo), $admitidos) && $tamanio_img<=$limite_kb*1024 ) {

$nombre_img=$_FILES['imagen']['name'];//obtiene nombre de la imagen + la extension
 $archivo=$_FILES['imagen']['tmp_name'];//contiene el archivo subido
 $direccion="img_productos";
 $direccion=$direccion."/".$nombre_img;
 //concateno la ruta de la carpeta + el nombre de la img, por ejemplo ...img_productos/fotodeproducto1.jpg
 //muevo el archivo subido a la carpeta img_productos
move_uploaded_file($archivo, $direccion);

//guardo los datos del formulario en bd
    $nombre_producto = $_REQUEST['nombre'];
    $marca_producto = $_REQUEST['marca'];
    $descripcion_producto = $_REQUEST['descripcion'];
    $precio_producto = $_REQUEST['precio'];
    $vencimiento_producto= $_REQUEST['vencimiento'];
    $stock_producto= $_REQUEST['stock'];
    $proveedor= $_REQUEST['proveedor'];
    

    $sql = "INSERT INTO productos VALUES ('','$nombre_producto','$marca_producto','$direccion','$descripcion_producto','$precio_producto','$vencimiento_producto','$stock_producto','$proveedor')";


    mysqli_query($enlace,$sql) or die('No se insertó el registro');
    
    
    




    echo "<script type='text/javascript'>
    alert('Ha sido Ingresado con Exito!');
    window.location.href='modif_tienda.php';</script>";
}else{
  echo "<script type='text/javascript'>
    alert('Archivo no Válido o Excede el Tamaño..');
    window.location.href='alta.php';</script>";
}
}
mysqli_close($enlace);
include('./include/pie.php');
  ?>

