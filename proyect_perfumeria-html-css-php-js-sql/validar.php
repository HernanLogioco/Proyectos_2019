        <?php 
        include('include/conexion1.php');//conexion base de datos

        if (isset($_REQUEST['usuario']) && isset($_REQUEST['password'])) {
          session_start();
            $nom=$_REQUEST['usuario'];
            $pass=$_REQUEST['password'];
                //la variable fila es un entero, ya q cuenta la cant de filas con ese usuario y esa contraseña
            $sql="SELECT COUNT(*) as fila FROM usuarios WHERE nombre='$nom' and password='$pass'";
            //realiza la consulta a la base de datos
            $consulta=mysqli_query($enlace,$sql);
            //creo un arreglo con la consulta
            $array=mysqli_fetch_array($consulta);

            $sql2="SELECT * FROM usuarios WHERE nombre='$nom' and password='$pass'";
            $consulta2=mysqli_query($enlace,$sql2);
            $esAdmin=mysqli_fetch_array($consulta2);
                //Si existe una fila donde coincida usuario y contraseña...
            if ($array['fila']>0) {
                //Luego verificar si es admin o usuario....
                if ("administrador"==$esAdmin['rol']) {//si es admin...
                    $_SESSION['admin']='--Administrador--';//creamos una NUEVA SESION LLAMADA administrador(VARIABLE) Q RECIBE EL NOMBRE DEL USUARIO Q QUIERE ENTRAR como admin
                    header("location: ./index.php");
                }else{//si no es admin entonces es usuario

                 $_SESSION['usuario']="Hola! ".$nom;//creamos una NUEVA SESION LLAMADA USERNAME(VARIABLE) Q RECIBE EL NOMBRE DEL USUARIO Q QUIERE ENTRAR
                    header("location: ./index.php");}
                mysqli_close($enlace);
            }else{//si los datos son falsos...mostrar alert DATOS INCORRECTOS
                echo "<script type='text/javascript'>
    alert('DATOS INCORRECTOS');
    window.location.href='login.php';</script>";

                }

        }

 ?> 