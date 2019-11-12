<?php
session_start(); 
//si existe ya una sesion activa entonces 
 //que no permita loguearse nuevamente..
if (isset($_SESSION['usuario'])){
header('location:./index.php');
}else { if (isset($_SESSION['admin'])){
header('location:./index.php');}
}?>
 <!DOCTYPE html>
 <html>
    <head>
        <title>Login </title>
        <meta charset=“UTF-8”>
        <meta name=“viewport” content=“width=device-width”>
      <link rel="stylesheet" href="./css/loginstyle1.css">
    </head>
    <body>
        <div class="login-box">
            <a href="index.php"><img class="icono" src="./img/logo1.jpg" alt="logologin"></a>
            <h1>Iniciar Sesión</h1>
     
        <form action="validar.php" method=“POST”>
            <!--USUARIO -->
            <input type="text" class="inputtext" placeholder=“Usuario” name="usuario" />
            <!--CONTRASEÑA -->
            <input type="password" class="inputpass" placeholder=“Contraseña” name="password" />
          <input type='submit' class="inputsubmit" value="Ingresar" style="cursor: pointer" ></input>
          <input type='button' class="inputsubmit" value="Cancelar" onclick="location.href='index.php';"style="cursor: pointer" ></input>

            <a href="#">¿Has olvidado los datos de la cuenta?</a><br>
            <a href="#">Crear nueva cuenta</a>
            
        </form>

           </div>

    </body>
</html>