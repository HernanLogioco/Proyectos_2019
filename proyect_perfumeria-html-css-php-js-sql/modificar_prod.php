<?php include('./include/conexion1.php');
include('include/encabezado.php');  
if (!isset($_SESSION['admin'])) {
 header("location: ./index.php");
}
?>

 <?php echo"<h2 class='text-center display-4 font-weight-bold text-danger'>Modificar Producto Nro. ".$_REQUEST['id_producto']."</h2>";?>
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
        <button type="submit" name="submit" class="btn btn-primary">Guardar</button>
          <button type="button" class="btn btn-primary" onclick="window.location.href='/bootstrap/modif_tienda.php'">Cancelar</button>
         <button type="reset" class="btn btn-primary">Borrar Form.</button>
         <?php 
            if ($_REQUEST['id_producto']) {
                //RECUPERO EL VALOR DEL ID_LIBRO DESDE LA URL...RECIBO ESE DATO DESDE EL BOTON DE LA SECCION LISTADO ..."ELIMINAR"
                $producto=$_REQUEST['id_producto'];
                echo "<input type='hidden' name='idprod'  value='$producto'>";
            }
          ?>
         
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
    $id_producto = $_REQUEST['idprod'];
    $nombre_producto = $_REQUEST['nombre'];
    $marca_producto = $_REQUEST['marca'];
    $descripcion_producto = $_REQUEST['descripcion'];
    $precio_producto = $_REQUEST['precio'];
    $vencimiento_producto= $_REQUEST['vencimiento'];
    $stock_producto= $_REQUEST['stock'];
    $proveedor= $_REQUEST['proveedor'];
    



mysqli_query($enlace,"UPDATE productos SET nombre_producto='$nombre_producto',
marca_producto='$marca_producto',
imagen_producto='$direccion',
descripcion_producto='$descripcion_producto',
precio_producto='$precio_producto',
fecha_vencimiento='$vencimiento_producto',
stock_producto='$stock_producto',
proveedor='$proveedor' WHERE id_producto='$id_producto'") or die('No se Inserto el Registro');
    
    




    echo "<script type='text/javascript'>
    alert('El Producto ha sido Modificado con Exito!!');
    window.location.href='modif_tienda.php';</script>";
   
}else{
  echo "<script type='text/javascript'>
    alert('Formato/Imagen no Válida ,o bien Excede el Tamaño Permitido...');
    window.location.href='modificar_prod.php';</script>";
}
mysqli_close($enlace);
}
include('./include/pie.php');
  ?>

