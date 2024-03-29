/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "gestionAnteproyectos.h"

bool_t
xdr_listaAnteproyectos (XDR *xdrs, listaAnteproyectos *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (struct nodo_anteproyecto), (xdrproc_t) xdr_nodo_anteproyecto))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_anteproyecto (XDR *xdrs, datos_anteproyecto *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->codigoAnteproyecto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nombrePrograma, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->titulo, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->objetivos, MAXCONTENIDO,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->estudiante01Nom, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->estudiante01Cod))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->estudiante02Nom, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->estudiante02Cod))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->director, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->codirector, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->infoEval, 2,
		sizeof (evaluacion), (xdrproc_t) xdr_evaluacion))
		 return FALSE;
	 if (!xdr_coordinacion (xdrs, &objp->infoCoordi))
		 return FALSE;
	 if (!xdr_jefeDepto (xdrs, &objp->infoJefeDepto))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_evaluacion (XDR *xdrs, evaluacion *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->fecha, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->concepto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->observaciones, MAXCONTENIDO,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_coordinacion (XDR *xdrs, coordinacion *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_bool (xdrs, &objp->estructura))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->concepto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->observaciones, MAXCONTENIDO,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_jefeDepto (XDR *xdrs, jefeDepto *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_bool (xdrs, &objp->estructura))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->concepto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->observaciones, MAXCONTENIDO,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_usuario (XDR *xdrs, datos_usuario *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->identificacion))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->departamento, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->role, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->login, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->password, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_resolucion (XDR *xdrs, datos_resolucion *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->codigoAnteproyecto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->fechaResolucion, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->numResolucion))
		 return FALSE;
	return TRUE;
}
