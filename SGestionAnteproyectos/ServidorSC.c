/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "gestionAnteproyectos.h"
//include de clientes
#include "seguimientoAnteproyectos.h"
#include "gestionUsuarios.h"

bool_t *
registraranteproyecto_1_svc(datos_anteproyecto *argp, struct svc_req *rqstp)
{
	static bool_t  result;

	//
	CLIENT *clnt;
	bool_t  *result_1;
	datos_anteproyecto  registraranteproyectohistorial_1_arg;
	bool_t  *result_2;
	datos_resolucion  registrarresolucion_1_arg;
	listaAnteproyectos  *result_3;
	char *consultaranteproyectos_1_arg;
	listaResoluciones  *result_4;
	char *consultaraprovados_1_arg;
	datos_anteproyecto  *result_5;
	int  consultaranteproyecto_1_arg;
	datos_resolucion  *result_6;
	int  consultaraprovado_1_arg;
	//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_seguimiento_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	//
	result_1 = registraranteproyectohistorial_1(&registraranteproyectohistorial_1_arg, clnt);
	if (result_1 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */

	return &result;
}

bool_t *
registrarresolucion_1_svc(datos_resolucion *argp, struct svc_req *rqstp)
{
	static bool_t  result;

//
CLIENT *clnt;
	bool_t  *result_1;
	datos_anteproyecto  registraranteproyectohistorial_1_arg;
	bool_t  *result_2;
	datos_resolucion  registrarresolucion_1_arg;
	listaAnteproyectos  *result_3;
	char *consultaranteproyectos_1_arg;
	listaResoluciones  *result_4;
	char *consultaraprovados_1_arg;
	datos_anteproyecto  *result_5;
	int  consultaranteproyecto_1_arg;
	datos_resolucion  *result_6;
	int  consultaraprovado_1_arg;

//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_seguimiento_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
//
result_2 = registrarresolucion_1(&registrarresolucion_1_arg, clnt);
	if (result_2 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */

	return &result;
}

listaAnteproyectos *
consultaranteproyectos_1_svc(char **argp, struct svc_req *rqstp)
{
	static listaAnteproyectos  result;
//
CLIENT *clnt;
	bool_t  *result_1;
	datos_anteproyecto  registraranteproyectohistorial_1_arg;
	bool_t  *result_2;
	datos_resolucion  registrarresolucion_1_arg;
	listaAnteproyectos  *result_3;
	char *consultaranteproyectos_1_arg;
	listaResoluciones  *result_4;
	char *consultaraprovados_1_arg;
	datos_anteproyecto  *result_5;
	int  consultaranteproyecto_1_arg;
	datos_resolucion  *result_6;
	int  consultaraprovado_1_arg;

//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_seguimiento_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
//
result_3 = consultaranteproyectos_1((void*)&consultaranteproyectos_1_arg, clnt);
	if (result_3 == (listaAnteproyectos *) NULL) {
		clnt_perror (clnt, "call failed");
	}

result_4 = consultaraprovados_1((void*)&consultaraprovados_1_arg, clnt);
	if (result_4 == (listaResoluciones *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */

	return &result;
}

datos_anteproyecto *
consultaranteproyecto_1_svc(int *argp, struct svc_req *rqstp)
{
	static datos_anteproyecto  result;
//
CLIENT *clnt;
	bool_t  *result_1;
	datos_anteproyecto  registraranteproyectohistorial_1_arg;
	bool_t  *result_2;
	datos_resolucion  registrarresolucion_1_arg;
	listaAnteproyectos  *result_3;
	char *consultaranteproyectos_1_arg;
	listaResoluciones  *result_4;
	char *consultaraprovados_1_arg;
	datos_anteproyecto  *result_5;
	int  consultaranteproyecto_1_arg;
	datos_resolucion  *result_6;
	int  consultaraprovado_1_arg;

//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_seguimiento_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
//
result_5 = consultaranteproyecto_1(&consultaranteproyecto_1_arg, clnt);
	if (result_5 == (datos_anteproyecto *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	result_6 = consultaraprovado_1(&consultaraprovado_1_arg, clnt);
	if (result_6 == (datos_resolucion *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */

	return &result;
}

bool_t *
registrarusuario_1_svc(datos_usuario *argp, struct svc_req *rqstp)
{
	static bool_t  result;
//
CLIENT *clnt;
	bool_t  *result_1;
	datos_usuario  registrarusuario_1_arg;
	datos_usuario  *result_2;
	datos_usuario  iniciarsesion_1_arg;

//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_usuarios_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
//
result_1 = registrarusuario_1(&registrarusuario_1_arg, clnt);
	if (result_1 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */

	return &result;
}

datos_usuario *
iniciarsesion_1_svc(datos_usuario *argp, struct svc_req *rqstp)
{
	static datos_usuario  result;
//
CLIENT *clnt;
	bool_t  *result_1;
	datos_usuario  registrarusuario_1_arg;
	datos_usuario  *result_2;
	datos_usuario  iniciarsesion_1_arg;

//variable host
	char * host="localhost";
#ifndef	DEBUG
	clnt = clnt_create (host, gestion_usuarios, gestion_usuarios_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
//
result_2 = iniciarsesion_1(&iniciarsesion_1_arg, clnt);
	if (result_2 == (datos_usuario *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	/*
	 * insert server code here
	 */
	return &result;
}
