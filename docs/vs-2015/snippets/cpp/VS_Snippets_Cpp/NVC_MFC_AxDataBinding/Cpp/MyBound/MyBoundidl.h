

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu Dec 14 11:06:30 2006
 */
/* Compiler settings for .\MyBound.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __MyBoundidl_h__
#define __MyBoundidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMyBound_FWD_DEFINED__
#define ___DMyBound_FWD_DEFINED__
typedef interface _DMyBound _DMyBound;
#endif 	/* ___DMyBound_FWD_DEFINED__ */


#ifndef ___DMyBoundEvents_FWD_DEFINED__
#define ___DMyBoundEvents_FWD_DEFINED__
typedef interface _DMyBoundEvents _DMyBoundEvents;
#endif 	/* ___DMyBoundEvents_FWD_DEFINED__ */


#ifndef __MyBound_FWD_DEFINED__
#define __MyBound_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyBound MyBound;
#else
typedef struct MyBound MyBound;
#endif /* __cplusplus */

#endif 	/* __MyBound_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __MyBoundLib_LIBRARY_DEFINED__
#define __MyBoundLib_LIBRARY_DEFINED__

/* library MyBoundLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_MyBoundLib;

#ifndef ___DMyBound_DISPINTERFACE_DEFINED__
#define ___DMyBound_DISPINTERFACE_DEFINED__

/* dispinterface _DMyBound */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DMyBound;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DF55EF63-8F37-474A-B1D2-4E0BF5A6CD18")
    _DMyBound : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMyBoundVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMyBound * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMyBound * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMyBound * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMyBound * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMyBound * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMyBound * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMyBound * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DMyBoundVtbl;

    interface _DMyBound
    {
        CONST_VTBL struct _DMyBoundVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMyBound_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DMyBound_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DMyBound_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DMyBound_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DMyBound_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DMyBound_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DMyBound_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMyBound_DISPINTERFACE_DEFINED__ */


#ifndef ___DMyBoundEvents_DISPINTERFACE_DEFINED__
#define ___DMyBoundEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DMyBoundEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DMyBoundEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("04948205-3968-4C52-BCCD-A470858DCE67")
    _DMyBoundEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMyBoundEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMyBoundEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMyBoundEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMyBoundEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMyBoundEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMyBoundEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMyBoundEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMyBoundEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DMyBoundEventsVtbl;

    interface _DMyBoundEvents
    {
        CONST_VTBL struct _DMyBoundEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMyBoundEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DMyBoundEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DMyBoundEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DMyBoundEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DMyBoundEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DMyBoundEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DMyBoundEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMyBoundEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MyBound;

#ifdef __cplusplus

class DECLSPEC_UUID("4E9077D3-28F0-4943-B290-409D8FB8E35F")
MyBound;
#endif
#endif /* __MyBoundLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


