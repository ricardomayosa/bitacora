/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BITACORA_H_RPCGEN
#define _BITACORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct String {
	/* character length for option (max 6 for 'delete') and for name (30) */
	char opt[6];
	char name[30];
};
typedef struct String String;

#define BITACORA_PROG 0x23451111
#define BITACORA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  char ** add_1(char **, CLIENT *);
extern  char ** add_1_svc(char **, struct svc_req *);
#define SEARCH 2
extern  char ** search_1(char **, CLIENT *);
extern  char ** search_1_svc(char **, struct svc_req *);
extern int bitacora_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  char ** add_1();
extern  char ** add_1_svc();
#define SEARCH 2
extern  char ** search_1();
extern  char ** search_1_svc();
extern int bitacora_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_String (XDR *, String*);

#else /* K&R C */
extern bool_t xdr_String ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BITACORA_H_RPCGEN */