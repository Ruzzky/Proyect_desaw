<!--
Nombre: Fedra Valeria Cervantes Mellado
Grupo: 5AVPR
Asignatura: DESAW
Fecha: 1/12/2021
Descripción: Página web, practica.
-->

<?php


$remitente = $_POST['remitente'];
$destinatario = "cervantes.fedra.cbtis37@gmail.com";
$asunto = "Te contactaron en el formulario de tu sitio web";
$mensaje = "Tienes un mensaje desde el formulario de tu sitio web";
$headers = "From: $remitente\r\nReply-to: $remitente";

mail($destinatario, $asunto, $mensaje, $headers);

?>

<!DOCTYPE html>
<html lang="es">
    <head>
        <title>comisiones</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="shortcut icon" href="">
    </head>
	<body Bgcolor="#FCE2FD">
	
		<center>
			
			<h2 style="color:#8F5493">☙ACERCA DE NOSOTROS❧</h2>
			
				<ul class="menu">
				
					<h3>

					 <li ><a href="FINAL.html ">HOME</a></li>
					 <li ><a href="u.html">¿EN QUÉ CONSISTE?</a></li>
					 <li ><a href="d.html">PRECIOS</a></li>
					 <li ><a href="t.html">GALERIA DE IMAGENES</a></li>  

					</h3>

				</ul>

		</center>


		<CENTER><H3 style="color:#1A0FB9 ">SI REQUIERA AYUDA LLENE ESTE FORMULARIO</H3></CENTER>
			<FORM >

				<CENTER>
					<TABLE BORDER>

						<TR>
						   <TD for="Nom" >Nombres:</TD>
						   <TD> <INPUT TYPE="text" id="Nom" value="" NAME="nombre" SIZE=18 MAXLENGTH=18 placeholder="Nombres"></TD>

						<TR>
						   <TD>Apellidos:</TD>
						   <TD> <INPUT TYPE="text" NAME="apellidos" value="" SIZE=48 MAXLENGTH=48 placeholder="Apellidos">
						   </TD>
			  
						<TR>
						<TR>
							<TD>Edad:</TD>
							<TD><input type="number" id="Eda" name="Edad" value="" size="6" placeholder="Tu Edad" required><br></TD>
						<TR>	
							<TD>Correo:</TD>
							<TD>
							<input type="email" name="Correo electronico"  size=55 maxlength=55 placeholder="Correo electronico" value="@">
							</TD>

						<TR>
						   <TD>Teléfono: </TD>
							<TD>
								<INPUT TYPE="text" NAME="telefono" value="" SIZE=19 MAXLENGTH=19 placeholder="Num.de Teléfono">
								
							</TD>

						<TR>
						   <TD><LABEL for="est">Estado de Origen Donde ve La Página:</LABEL></TD>
						   <TD> <SELECT id="est" NAME="OPCION">
									<option></option>
									<OPTION>Chihuahua
									<OPTION>Sonora
									<OPTION>Coahuila
									<OPTION>Durango
									<OPTION>Oaxaca
									<OPTION>Tamaulipas
									<OPTION>Jalisco
									<OPTION>Zacatecas
									<OPTION>Baja California Sur
									<OPTION>Chiapas
									<OPTION>Veracruz
									<OPTION>Baja California Norte
									<OPTION>Nuevo León
									<OPTION>Guerrero
									<OPTION>San Luis Potosí
									<OPTION>Michoacan
									<OPTION>Sinaloa
									<OPTION>Campeche
									<OPTION>Quintana Roo
									<OPTION>Yucatán
									<OPTION>Puebla
									<OPTION>Guanajuato
									<OPTION>Nayarit
									<OPTION>Tabasco
									<OPTION>Estado de México
									<OPTION>Hidalgo
									<OPTION>Querétaro
									<OPTION>Colima
									<OPTION>Aguascalientes 
									<OPTION>Morelos
									<OPTION>Tlaxcala
									<OPTION>Ciudad De México
									
								</SELECT>Escoja una opción
								
							</TD>
							
						<TR>
							<TD>SEXO:</TD>

							<TD>
							
								<input type="radio" id="onvre" name="SEXO" value="Hombre"><label for="onvre">Hombre</label>

								<input type="radio" id="fem" name="SEXO" value="Mujer" ><label for="fem">Mujer</label>

								<input type="radio" id="uwu" name="SEXO" value="Otro"><label for="uwu">Otro</label>

							</TD>
						

						<TR>
						   <TD>Comentarios:</TD>
						   <TD> <TEXTAREA NAME="coment" ROWS=2 COLS=48></TEXTAREA></TD>
						   
					   <TR>
						  <TD>¿Añadio todos sus datos?:</TD>
						  <TD>
								<label> <input TYPE="checkbox" NAME="respuesta" value="si"> Sí </label>
								<label> <input TYPE="checkbox" NAME="respuesta" value="no"> No </label>
								<label> <input TYPE="checkbox" NAME="respuesta" value="is'nt"> Is'nt </label>
								<label> <input TYPE="checkbox" NAME="respuesta" value="soso">A medias</label>
							   
						  </TD>

						<TR>
						   <TD><B>Pulse aquí:</B></TD>
						   <TD ALIGN=CENTER>
							   <INPUT TYPE="submit" VALUE="Enviar datos ">
							   <INPUT TYPE="reset" VALUE="Borrar los datos">
							   
							</TD>
					</TABLE>
				</CENTER>
			</FORM>		
		
			<p style="position:absolute;top:580px;left:10px">
                Nombre: Fedra Valeria Cervantes Mellado <BR>
                Grupo: 5AVPR <BR>
                ASIGNATURA: DESAW <BR>
                Fecha: 30/11/2021
            </p>
		
		<b style="position:absolute;top:580px;right:10px">!SIGUEME EN MIS REDES SOCIALES¡</b>
		
		<a href="https://www.facebook.com/FDrix-488617235218766/"> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/05/Facebook_Logo_%282019%29.png/1024px-Facebook_Logo_%282019%29.png"
		 style="position:absolute;top:600px;right:250px;width:50px;height:50px" ></a>
	
		
		<a href="https://twitter.com/Ruzzky_Ranchero"> <img src="http://remerasyestampados.com/wp-content/uploads/Twitter-Download-PNG.png"
		 style="position:absolute;top:600px;right:170px;width:50px;height:50px" ></a>
		
		
		<a href="https://www.tumgir.com/fdrix"> <img src="https://iphoneros.com/wp-content/uploads/2018/12/logodetumblr2.png"
		 style="position:absolute;top:600px;right:100px;width:50px;height:50px" ></a>
		 
		 <p style="position:absolute;top:650px;right:10px"> CORREO: cervantes.fedra.cbtis37@gmail.com</p>
		 
	</body>	
</html>	
<style>
	.menu{
		list-style: none;
		padding: 0;
		background-color: #CB90FB;
		width: 100%;
		margin: auto;
        font-family: Gisarol;
	}
	.menu li{
		display: inline-block;
		text-align: center;
	}
	.menu li a{
		text-decoration: none;
		color: #150A42;
		padding: 20px;
		display: block;
	}
	.menu li a:hover{
		background: #BE32BB ;
	}
    .contenedor{
        max-width: 100000px;
        overflow: hidden;
        margin: 0 auto;
    }
</style>
