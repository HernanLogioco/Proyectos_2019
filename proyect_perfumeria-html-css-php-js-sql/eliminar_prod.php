<?php include('./include/conexion1.php');
session_start();
if (!isset($_SESSION['admin'])) {
 header("location: ./index.php");
}

//RECUPERO EL VALOR DEL ID_LIBRO DESDE LA URL...RECIBO ESE DATO DESDE EL BOTON DE LA SECCION LISTADO ..."ELIMINAR"
$producto=$_REQUEST['id_producto'];

	mysqli_query($enlace,"DELETE FROM productos WHERE id_producto=$producto") or die('No se insertó el registro');

	

mysqli_close($enlace);
?>

<script type="text/javascript">
	alert("Producto Eliminado Exitosamente");
	window.location.href='modif_tienda.php';
</script>
