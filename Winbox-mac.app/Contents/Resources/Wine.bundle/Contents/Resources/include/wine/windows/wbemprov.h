/*** Autogenerated by WIDL 1.8.2 from wbemprov.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wbemprov_h__
#define __wbemprov_h__

/* Forward declarations */

#ifndef __WbemAdministrativeLocator_FWD_DEFINED__
#define __WbemAdministrativeLocator_FWD_DEFINED__
#ifdef __cplusplus
typedef class WbemAdministrativeLocator WbemAdministrativeLocator;
#else
typedef struct WbemAdministrativeLocator WbemAdministrativeLocator;
#endif /* defined __cplusplus */
#endif /* defined __WbemAdministrativeLocator_FWD_DEFINED__ */

/* Headers for imported files */


#ifdef __cplusplus
extern "C" {
#endif


DEFINE_GUID(LIBID_WbemProviders_v1, 0x092df710, 0x7010, 0x11d1, 0xad,0x90, 0x00,0xc0,0x4f,0xd8,0xfd,0xff);

/*****************************************************************************
 * WbemAdministrativeLocator coclass
 */

DEFINE_GUID(CLSID_WbemAdministrativeLocator, 0xcb8555cc, 0x9128, 0x11d1, 0xad,0x9b, 0x00,0xc0,0x4f,0xd8,0xfd,0xff);

#ifdef __cplusplus
class DECLSPEC_UUID("cb8555cc-9128-11d1-ad9b-00c04fd8fdff") WbemAdministrativeLocator;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WbemAdministrativeLocator, 0xcb8555cc, 0x9128, 0x11d1, 0xad,0x9b, 0x00,0xc0,0x4f,0xd8,0xfd,0xff)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wbemprov_h__ */
