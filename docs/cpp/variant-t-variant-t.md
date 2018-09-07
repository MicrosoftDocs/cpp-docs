---
title: "_variant_t::_variant_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_variant_t::_variant_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["_variant_t class [C++], constructor", "_variant_t method [C++]"]
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _variant_t::_variant_t
**Microsoft Specific**  
  
 Constructs a `_variant_t` object.  
  
## Syntax  
  
```  
_variant_t( ) throw( );  
  
_variant_t(  
   const VARIANT& varSrc   
);  
  
_variant_t(  
   const VARIANT* pVarSrc   
);  
  
_variant_t(  
   const _variant_t& var_t_Src   
);  
  
_variant_t(  
   VARIANT& varSrc,  
   bool fCopy   
);  
  
_variant_t(  
   short sSrc,  
   VARTYPE vtSrc = VT_I2   
);  
  
_variant_t(  
   long lSrc,  
   VARTYPE vtSrc = VT_I4   
);  
  
_variant_t(  
   float fltSrc   
) throw( );  
  
_variant_t(  
   double dblSrc,  
   VARTYPE vtSrc = VT_R8   
);  
  
_variant_t(  
   const CY& cySrc   
) throw( );  
  
_variant_t(  
   const _bstr_t& bstrSrc   
);  
  
_variant_t(  
   const wchar_t *wstrSrc   
);  
  
_variant_t(  
   const char* strSrc   
);  
  
_variant_t(  
   IDispatch* pDispSrc,  
   bool fAddRef = true   
) throw( );  
  
_variant_t(  
   bool bSrc   
) throw( );  
  
_variant_t(  
   IUnknown* pIUknownSrc,  
   bool fAddRef = true   
) throw( );  
  
_variant_t(  
   const DECIMAL& decSrc   
) throw( );  
  
_variant_t(  
   BYTE bSrc   
) throw( );  
  
variant_t(  
   char cSrc  
) throw();  
  
_variant_t(  
   unsigned short usSrc  
) throw();  
  
_variant_t(  
   unsigned long ulSrc  
) throw();  
  
_variant_t(  
   int iSrc  
) throw();  
  
_variant_t(  
   unsigned int uiSrc  
) throw();  
  
_variant_t(  
   __int64 i8Src  
) throw();  
  
_variant_t(  
   unsigned __int64 ui8Src  
) throw();  
```  
  
#### Parameters  
 *varSrc*  
 A `VARIANT` object to be copied into the new `_variant_t` object.  
  
 *pVarSrc*  
 Pointer to a `VARIANT` object to be copied into the new `_variant_t` object.  
  
 *var_t_Src*  
 A `_variant_t` object to be copied into the new `_variant_t` object.  
  
 *fCopy*  
 If **false**, the supplied `VARIANT` object is attached to the new `_variant_t` object without making a new copy by `VariantCopy`.  
  
 *ISrc, sSrc*  
 An integer value to be copied into the new `_variant_t` object.  
  
 *vtSrc*  
 The `VARTYPE` for the new `_variant_t` object.  
  
 *fltSrc, dblSrc*  
 A numerical value to be copied into the new `_variant_t` object.  
  
 *cySrc*  
 A `CY` object to be copied into the new `_variant_t` object.  
  
 *bstrSrc*  
 A `_bstr_t` object to be copied into the new `_variant_t` object.  
  
 *strSrc, wstrSrc*  
 A string to be copied into the new `_variant_t` object.  
  
 *bSrc*  
 A **bool** value to be copied into the new `_variant_t` object.  
  
 *pIUknownSrc*  
 COM interface pointer to a VT_UNKNOWN object to be encapsulated into the new `_variant_t` object.  
  
 *pDispSrc*  
 COM interface pointer to a VT_DISPATCH object to be encapsulated into the new `_variant_t` object.  
  
 *decSrc*  
 A `DECIMAL` value to be copied into the new `_variant_t` object.  
  
 *bSrc*  
 A `BYTE` value to be copied into the new `_variant_t` object.  
  
 *cSrc*  
 A **char** value to be copied into the new `_variant_t` object.  
  
 *usSrc*  
 A **unsigned short** value to be copied into the new `_variant_t` object.  
  
 *ulSrc*  
 A **unsigned long** value to be copied into the new `_variant_t` object.  
  
 *iSrc*  
 An **int** value to be copied into the new `_variant_t` object.  
  
 *uiSrc*  
 An **unsigned int** value to be copied into the new `_variant_t` object.  
  
 *i8Src*  
 An **__int64** value to be copied into the new `_variant_t` object.  
  
 *ui8Src*  
 An **unsigned __int64** value to be copied into the new `_variant_t` object.  
  
## Remarks  
  
-   **_variant_t( )** Constructs an empty `_variant_t` object, `VT_EMPTY`.  
  
-   **_variant_t( VARIANT&**  *varSrc*  **)** Constructs a `_variant_t` object from a copy of the `VARIANT` object. The variant type is retained.  
  
-   **_variant_t( VARIANT**<strong>\*</strong>  *pVarSrc*  **)** Constructs a `_variant_t` object from a copy of the `VARIANT` object. The variant type is retained.  
  
-   **_variant_t( _variant_t&**  *var_t_Src*  **)** Constructs a `_variant_t` object from another `_variant_t` object. The variant type is retained.  
  
-   **_variant_t( VARIANT&**  *varSrc* **, bool**  `fCopy`  **)** Constructs a `_variant_t` object from an existing `VARIANT` object. If *fCopy* is **false**, the **VARIANT** object is attached to the new object without making a copy.  
  
-   **_variant_t( short**  *sSrc* **, VARTYPE**  `vtSrc`  **= VT_I2 )** Constructs a `_variant_t` object of type VT_I2 or VT_BOOL from a **short** integer value. Any other `VARTYPE` results in an E_INVALIDARG error.  
  
-   **_variant_t( long**  `lSrc` **, VARTYPE**  `vtSrc`  **= VT_I4 )** Constructs a `_variant_t` object of type VT_I4, VT_BOOL, or VT_ERROR from a **long** integer value. Any other `VARTYPE` results in an E_INVALIDARG error.  
  
-   **_variant_t( float**  `fltSrc`  **)** Constructs a `_variant_t` object of type VT_R4 from a **float** numerical value.  
  
-   **_variant_t( double**  `dblSrc` **, VARTYPE**  `vtSrc`  **= VT_R8 )** Constructs a `_variant_t` object of type VT_R8 or VT_DATE from a **double** numerical value. Any other `VARTYPE` results in an E_INVALIDARG error.  
  
-   **_variant_t( CY&**  `cySrc`  **)** Constructs a `_variant_t` object of type VT_CY from a `CY` object.  
  
-   **_variant_t( _bstr_t&**  `bstrSrc`  **)** Constructs a `_variant_t` object of type VT_BSTR from a `_bstr_t` object. A new `BSTR` is allocated.  
  
-   **_variant_t( wchar_t** <strong>\*</strong> *wstrSrc*  **)** Constructs a `_variant_t` object of type VT_BSTR from a Unicode string. A new `BSTR` is allocated.  
  
-   **_variant_t( char**<strong>\*</strong>  `strSrc`  **)** Constructs a `_variant_t` object of type VT_BSTR from a string. A new `BSTR` is allocated.  
  
-   **_variant_t( bool**  `bSrc`  **)** Constructs a `_variant_t` object of type VT_BOOL from a **bool** value.  
  
-   **_variant_t( IUnknown**<strong>\*</strong>  `pIUknownSrc` **, bool**  `fAddRef`  **= true )** Constructs a `_variant_t` object of type VT_UNKNOWN from a COM interface pointer. If `fAddRef` is **true**, then `AddRef` is called on the supplied interface pointer to match the call to `Release` that will occur when the `_variant_t` object is destroyed. It is up to you to call `Release` on the supplied interface pointer. If `fAddRef` is **false**, this constructor takes ownership of the supplied interface pointer; do not call `Release` on the supplied interface pointer.  
  
-   **_variant_t( IDispatch**<strong>\*</strong>  `pDispSrc` **, bool**  `fAddRef`  **= true )** Constructs a `_variant_t` object of type VT_DISPATCH from a COM interface pointer. If `fAddRef` is **true**, then `AddRef` is called on the supplied interface pointer to match the call to `Release` that will occur when the `_variant_t` object is destroyed. It is up to you to call `Release` on the supplied interface pointer. If `fAddRef` is **false**, this constructor takes ownership of the supplied interface pointer; do not call `Release` on the supplied interface pointer.  
  
-   **_variant_t( DECIMAL&**  `decSrc`  **)** Constructs a `_variant_t` object of type VT_DECIMAL from a `DECIMAL` value.  
  
-   **_variant_t( BYTE**  `bSrc`  **)** Constructs a `_variant_t` object of type `VT_UI1` from a `BYTE` value.  
  
 **END Microsoft Specific**  
  
## See also  
 [_variant_t Class](../cpp/variant-t-class.md)