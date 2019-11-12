	<?php 
	include('include/encabezado.php');	
	?>

 <!--contenedor de formulario fondo celeste --> 

		<section style="background-color:#D7E4EE ;border-radius: 50px;" class="container col-6">
 			

 			<h2 class="mt-3 mb-4 ml-2 pt-3 text-left font-italic font-weight-bold text-uppercase">Contacto</h2>



 			<div class="row">
    			<div class="col-md-12">
        	 <!--formulario --> 
            		<center>
                		<form class="form-horizontal" method="post"  >
                    		<fieldset>	
		                        <div class="input-group">
		                            <span class="col-md-1 col-md-offset-2 text-center"><i class="fa fa-user bigicon"></i></span>
		                            <div class="col-md-11">
		                                <input name="nombre" type="text" placeholder="Nombre Completo" class="form-control" required>
		                            </div>
		                        </div>
			                    <div class="input-group">
			                        <span class="col-md-1 col-md-offset-2 text-center"><i class="fa fa-envelope-o bigicon"></i></span>
			                        <div class="col-md-11">
			                            <input name="email" type="text" placeholder="E-mail" class="form-control" required>
			                        </div>
			                    </div>

			                    <div class="input-group">
			                        <span class="col-md-1 col-md-offset-2 text-center"><i class="fa fa-phone-square bigicon"></i></span>
			                        <div class="col-md-11">
			                            <input name="telefono" type="text" placeholder="Teléfono" class="form-control" required>
			                        </div>
			                    </div>

	                    		<div class="input-group">
		                        		<span class="col-md-1 col-md-offset-2 text-center"><i class="fa fa-pencil-square-o bigicon"></i></span>
	                        		<div class="col-md-11">
			                            <textarea class="form-control" name="mensaje" placeholder="Ingresa tu mensaje aqui..." rows="7" required></textarea>
	                        		</div>
	                    		</div>

                        		<div class="input-group">
                            		<div class="col-md-12 text-center">
                                		<button type="submit" class="btn btn-primary btn-lg">Enviar</button>
                            		</div>
                        		</div>
                    		</fieldset>
                		</form>
           			</center>
        		</div>
   			</div>
		</section>

<?php
include('./include/pie.php');
?>

<?php  #Enviar MAIL ....
if (isset($_REQUEST['submit'])) {
	$destino="hernanlogioco@gmail.com";
	$nombre=$_REQUEST['nombre'];
	$correo=$_REQUEST['email'];
	$telefono=$_REQUEST['telefono'];
	$mensaje=$_REQUEST['mensaje'];
	$contenido="Nombre: ".$nombre.
				"\nCorreo :".$correo.
				"\nTeléfono :".$telefono.
				"\nMensaje :".$mensaje;
				mail($destino, "Contacto", $contenido);

				echo "<script type='text/javascript'>
    alert('El Mensaje ha sido Enviado con Exito!, Nos pondremos en Contacto con Ud.');
    window.location.href='index.php';</script>";
}
 ?>