---
title: "CComVariant Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComVariant"
  - "ATL::CComVariant"
  - "CComVariant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VARIANT macro"
  - "CComVariant class"
  - "VARIANT macro, ATL"
ms.assetid: 4d31149c-d005-44b5-a509-10f84afa2b61
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CComVariant Class
This class wraps the `VARIANT` type, providing a member indicating the type of data stored.  
  
## Syntax  
  
```cpp
class CComVariant : public tagVARIANT  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComVariant::CComVariant](#ccomvariant__ccomvariant)|The constructor.|  
|[CComVariant::~CComVariant](#ccomvariant__dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComVariant::Attach](#ccomvariant__attach)|Attaches a **VARIANT** to the `CComVariant` object.|  
|[CComVariant::ChangeType](#ccomvariant__changetype)|Converts the `CComVariant` object to a new type.|  
|[CComVariant::Clear](#ccomvariant__clear)|Clears the `CComVariant` object.|  
|[CComVariant::Copy](#ccomvariant__copy)|Copies a **VARIANT** to the `CComVariant` object.|  
|[CComVariant::CopyTo](#ccomvariant__copyto)|Copies the contents of the `CComVariant` object.|  
|[CComVariant::Detach](#ccomvariant__detach)|Detaches the underlying **VARIANT** from the `CComVariant` object.|  
|[CComVariant::GetSize](#ccomvariant__getsize)|Returns the size in number of bytes of the contents of the `CComVariant` object.|  
|[CComVariant::ReadFromStream](#ccomvariant__readfromstream)|Loads a **VARIANT** from a stream.|  
|[CComVariant::SetByRef](#ccomvariant__setbyref)|Initializes the `CComVariant` object and sets the **vt** member to **VT_BYREF**.|  
|[CComVariant::WriteToStream](#ccomvariant__writetostream)|Saves the underlying **VARIANT** to a stream.|  
  
### Public Operators  
  
|||  
|-|-|  
|[CComVariant::operator <](#ccomvariant__operator_lt)|Indicates whether the `CComVariant` object is less than the specified **VARIANT**.|  
|[CComVariant::operator >](#ccomvariant__operator_gt)|Indicates whether the `CComVariant` object is greater than the specified **VARIANT**.|  
|[operator !=](#ccomvariant__operator_neq)|Indicates whether the `CComVariant` object does not equal the specified **VARIANT**.|  
|[operator =](#ccomvariant__operator_eq)|Assigns a value to the `CComVariant` object.|  
|[operator ==](#ccomvariant__operator_eq_eq)|Indicates whether the `CComVariant` object equals the specified **VARIANT**.|  
  
## Remarks  
 `CComVariant` wraps the `VARIANT and VARIANTARG` type, which consists of a union and a member indicating the type of the data stored in the union. **VARIANT**s are typically used in Automation.  
  
 `CComVariant` derives from the **VARIANT** type so it can be used wherever a **VARIANT** can be used. You can, for example, use the **V_VT** macro to extract the type of a `CComVariant` or you can access the **vt** member directly just as you can with a **VARIANT**.  
  
## Inheritance Hierarchy  
 `tagVARIANT`  
  
 `CComVariant`  
  
## Requirements  
 **Header:** atlcomcli.h  
  
##  <a name="ccomvariant__attach"></a>  CComVariant::Attach  
 Safely clears the current contents of the `CComVariant` object, copies the contents of `pSrc` into this object, then sets the variant type of `pSrc` to `VT_EMPTY`.  
  
```
HRESULT Attach(VARIANT* pSrc);
```  
  
### Parameters  
 `pSrc`  
 [in] Points to the [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) to be attached to the object.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 Ownership of the data held by `pSrc` is transferred to the `CComVariant` object.  
  
##  <a name="ccomvariant__ccomvariant"></a>  CComVariant::CComVariant  
 Each constructor handles the safe initialization of the `CComVariant` object by calling the `VariantInit` Win32 function or by setting the object's value and type according to the parameters passed.  
  
```
CComVariant() throw();
CComVariant(const CComVariant& varSrc);
CComVariant(const VARIANT& varSrc);
CComVariant(LPCOLESTR lpszSrc);
CComVariant(LPCSTR lpszSrc);
CComVariant(bool bSrc);
CComVariant(BYTE nSrc) throw();
CComVariant(int nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned int  nSrc, VARTYPE vtSrc = VT_UI4) throw();
CComVariant(shor  nSrc) throw();
CComVariant(unsigned short nSrc) throw();
CComVariant(long  nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned long  nSrc) throw();
CComVariant(LONGLONG  nSrc) throw();
CComVariant(ULONGLONG  nSrc) throw();
CComVariant(float  fltSrc) throw();
CComVariant(double  dblSrc, VARTYPE vtSrc = VT_R8) throw();
CComVariant(CY  cySrc) throw();
CComVariant(IDispatch* pSrc) throw();
CComVariant(IUnknown* pSrc) throw();
CComVariant(const SAFEARRAY* pSrc);
CComVariant(char  cSrc) throw();
CComVariant(const CComBSTR& bstrSrc);
```  
  
### Parameters  
 *varSrc*  
 [in] The `CComVariant` or `VARIANT` used to initialize the `CComVariant` object. The contents of the source variant are copied to the destination without conversion.  
  
 `lpszSrc`  
 [in] The character string used to initialize the `CComVariant` object. You can pass a zero-terminated wide (Unicode) character string to the **LPCOLESTR** version of the constructor or an ANSI string to the `LPCSTR` version. In either case the string is converted to a Unicode `BSTR` allocated using **SysAllocString**. The type of the `CComVariant` object will be `VT_BSTR`.  
  
 `bSrc`  
 [in] The `bool` used to initialize the `CComVariant` object. The `bool` argument is converted to a **VARIANT_BOOL** before being stored. The type of the `CComVariant` object will be `VT_BOOL`.  
  
 `nSrc`  
 [in] The `int`, **BYTE**, **short**, **long**, **LONGLONG**, **ULONGLONG**, **unsigned short**, `unsigned long`, or `unsigned int` used to initialize the `CComVariant` object. The type of the `CComVariant` object will be `VT_I4`, `VT_UI1`, `VT_I2`, `VT_I4`, **VT_I8**, **VT_UI8**, **VT_UI2**, **VT_UI4**, or **VT_UI4**, respectively.  
  
 `vtSrc`  
 [in] The type of the variant. When the first parameter is `int`, valid types are `VT_I4` and **VT_INT**. When the first parameter is **long**, valid types are `VT_I4` and `VT_ERROR`. When the first parameter is **double**, valid types are `VT_R8` and `VT_DATE`. When the first parameter is `unsigned int`, valid types are **VT_UI4** and **VT_UINT**.  
  
 `fltSrc`  
 [in] The **float** used to initialize the `CComVariant` object. The type of the `CComVariant` object will be `VT_R4`.  
  
 `dblSrc`  
 [in] The **double** used to initialize the `CComVariant` object. The type of the `CComVariant` object will be `VT_R8`.  
  
 `cySrc`  
 [in] The **CY** used to initialize the `CComVariant` object. The type of the `CComVariant` object will be `VT_CY`.  
  
 `pSrc`  
 [in] The `IDispatch` or **IUnknown** pointer used to initialize the `CComVariant` object. `AddRef` will be called on the interface pointer. The type of the `CComVariant` object will be **VT_DISPATCH** or **VT_UNKNOWN**, respectively.  
  
 Or, the **SAFERRAY** pointer used to initialize the `CComVariant` object. A copy of the **SAFEARRAY** is stored in the `CComVariant` object. The type of the `CComVariant` object will be a combination of the original type of the **SAFEARRAY** and **VT_ARRAY**.  
  
 `cSrc`  
 [in] The `char` used to initialize the `CComVariant` object. The type of the `CComVariant` object will be **VT_I1**.  
  
 `bstrSrc`  
 [in] The BSTR used to initialize the `CComVariant` object. The type of the `CComVariant` object will be `VT_BSTR`.  
  
### Remarks  
 The destructor manages cleanup by calling [CComVariant::Clear](#ccomvariant__clear).  
  
##  <a name="ccomvariant__dtor"></a>  CComVariant::~CComVariant  
 The destructor.  
  
```
~CComVariant() throw();
```  
  
### Remarks  
 This method manages cleanup by calling [CComVariant::Clear](#ccomvariant__clear).  
  
##  <a name="ccomvariant__changetype"></a>  CComVariant::ChangeType  
 Converts the `CComVariant` object to a new type.  
  
```
HRESULT ChangeType(
    VARTYPE vtNew,
    const VARIANT* pSrc = NULL);
```  
  
### Parameters  
 `vtNew`  
 [in] The new type for the `CComVariant` object.  
  
 `pSrc`  
 [in] A pointer to the `VARIANT` whose value will be converted to the new type. The default value is **NULL**, meaning the `CComVariant` object will be converted in place.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 If you pass a value for `pSrc`, `ChangeType` will use this **VARIANT** as the source for the conversion. Otherwise, the `CComVariant` object will be the source.  
  
##  <a name="ccomvariant__clear"></a>  CComVariant::Clear  
 Clears the `CComVariant` object by calling the `VariantClear` Win32 function.  
  
```
HRESULT Clear();
```  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The destructor automatically calls **Clear**.  
  
##  <a name="ccomvariant__copy"></a>  CComVariant::Copy  
 Frees the `CComVariant` object and then assigns it a copy of the specified **VARIANT**.  
  
```
HRESULT Copy(const VARIANT* pSrc);
```  
  
### Parameters  
 `pSrc`  
 [in] A pointer to the [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) to be copied.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ccomvariant__copyto"></a>  CComVariant::CopyTo  
 Copies the contents of the `CComVariant` object.  
  
```
HRESULT CopyTo(BSTR* pstrDest);
```  
  
### Parameters  
 *pstrDest*  
 Points to a `BSTR` that will receive a copy of the contents of the `CComVariant` object.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The **CComVariant** object must be of type `VT_BSTR`.  
  
##  <a name="ccomvariant__detach"></a>  CComVariant::Detach  
 Detaches the underlying **VARIANT** from the `CComVariant` object and sets the object's type to `VT_EMPTY`.  
  
```
HRESULT Detach(VARIANT* pDest);
```  
  
### Parameters  
 `pDest`  
 [out] Returns the underlying `VARIANT` value of the object.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 Note that the contents of the `VARIANT` referenced by `pDest` will automatically be cleared before being assigned the value and type of the calling **CComVariant** object.  
  
##  <a name="ccomvariant__getsize"></a>  CComVariant::GetSize  
 For simple-fixed size `VARIANT`s, this method returns the `sizeof` the underlying data type plus `sizeof(VARTYPE)`.  
  
```
ULONG GetSize() const;
```  
  
### Return Value  
 The size in bytes of the current contents of the `CComVariant` object.  
  
### Remarks  
 If the `VARIANT` contains an interface pointer, `GetSize` queries for `IPersistStream` or `IPersistStreamInit`. If successful, the return value is the low-order 32 bits of the value returned by `GetSizeMax` plus the `sizeof` a `CLSID` and `sizeof(VARTYPE)`. If the interface pointer is `NULL`, `GetSize` returns the `sizeof` a `CLSID` plus `sizeof(VARTYPE)`. If the total size is larger than `ULONG_MAX`, `GetSize` returns `sizeof(VARTYPE)` which indicates an error.  
  
 In all other cases, a temporary `VARIANT` of type `VT_BSTR` is coerced from the current `VARIANT`. The length of this `BSTR` is calculated as the size of the length of the string plus the length of the string itself plus the size of the null character plus `sizeof(VARTYPE)`. If the `VARIANT` cannot be coerced to a `VARIANT` of type `VT_BSTR`, `GetSize` returns `sizeof(VARTYPE)`.  
  
 The size returned by this method matches the number of bytes used by [CComVariant::WriteToStream](#ccomvariant__writetostream) under successful conditions.  
  
##  <a name="ccomvariant__operator_eq"></a>  CComVariant::operator =  
 Assigns a value and corresponding type to the `CComVariant` object.  
  
```
CComVariant& operator=(const CComVariant& varSrc);

    CComVariant& operator=(const VARIANT& varSrc);

    CComVariant& operator=(const CComBSTR& bstrSrc);

    CComVariant& operator=(LPCOLESTR   lpszSrc);

    CComVariant& operator=(LPCSTR   lpszSrc);

    CComVariant& operator=(bool   bSrc);

    CComVariant& operator=(BYTE   nSrc) throw();
CComVariant& operator=(int   nSrc) throw();
CComVariant& operator=(unsigned  int  nSrc) throw();
CComVariant& operator=(short   nSrc) throw();
CComVariant& operator=(unsigned  short  nSrc) throw();
CComVariant& operator=(long   nSrc) throw();
CComVariant& operator=(unsigned  long  nSrc) throw();
CComVariant& operator=(LONGLONG   nSrc) throw();
CComVariant& operator=(ULONGLONG   nSrc) throw();
CComVariant& operator=(float   fltSrc) throw();
CComVariant& operator=(double   dblSrc) throw();
CComVariant& operator=(CY   cySrc) throw();
CComVariant& operator=(IDispatch* pSrc) throw();
CComVariant& operator=(IUnknown* pSrc) throw();
CComVariant& operator=(const SAFEARRAY* pSrc);

    CComVariant& operator=(char   cSrc) throw();
```  
  
### Parameters  
 *varSrc*  
 [in] The `CComVariant` or [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) to be assigned to the `CComVariant` object. The contents of the source variant are copied to the destination without conversion.  
  
 `bstrSrc`  
 [in] The BSTR to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be `VT_BSTR`.  
  
 `lpszSrc`  
 [in] The character string to be assigned to the `CComVariant` object. You can pass a zero-terminated wide (Unicode) character string to the **LPCOLESTR** version of the operator or an ANSI string to the `LPCSTR` version. In either case, the string is converted to a Unicode `BSTR` allocated using **SysAllocString**. The type of the `CComVariant` object will be `VT_BSTR`.  
  
 `bSrc`  
 [in] The `bool` to be assigned to the `CComVariant` object. The `bool` argument is converted to a **VARIANT_BOOL** before being stored. The type of the `CComVariant` object will be `VT_BOOL`.  
  
 `nSrc`  
 [in] The `int`, **BYTE**, **short**, **long**, **LONGLONG**, **ULONGLONG**, **unsigned short**, `unsigned long`, or `unsigned int` to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be `VT_I4`, `VT_UI1`, `VT_I2`, `VT_I4`, **VT_I8**, **VT_UI8**, **VT_UI2**, **VT_UI4**, or **VT_UI4**, respectively.  
  
 `fltSrc`  
 [in] The **float** to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be `VT_R4`.  
  
 `dblSrc`  
 [in] The **double** to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be `VT_R8`.  
  
 `cySrc`  
 [in] The **CY** to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be `VT_CY`.  
  
 `pSrc`  
 [in] The `IDispatch` or **IUnknown** pointer to be assigned to the `CComVariant` object. `AddRef` will be called on the interface pointer. The type of the `CComVariant` object will be **VT_DISPATCH** or **VT_UNKNOWN**, respectively.  
  
 Or, a **SAFEARRAY** pointer to be assigned to the `CComVariant` object. A copy of the **SAFEARRAY** is stored in the `CComVariant` object. The type of the `CComVariant` object will be a combination of the original type of the **SAFEARRAY** and **VT_ARRAY**.  
  
 `cSrc`  
 [in] The char to be assigned to the `CComVariant` object. The type of the `CComVariant` object will be **VT_I1**.  
  
##  <a name="ccomvariant__operator_eq_eq"></a>  CComVariant::operator ==  
 Indicates whether the `CComVariant` object equals the specified **VARIANT**.  
  
```
bool operator==(const VARIANT& varSrc) const throw();
```  
  
### Remarks  
 Returns **true** if the value and type of *varSrc* are equal to the value and type, respectively, of the `CComVariant` object. Otherwise, **false**. The operator uses the user's default locale to perform the comparison.  
  
 The operator compares only the value of the variant types. It compares strings, integers, and floating points, but not arrays or records.  
  
##  <a name="ccomvariant__operator_neq"></a>  CComVariant::operator !=  
 Indicates whether the `CComVariant` object does not equal the specified **VARIANT**.  
  
```
bool operator!=(const VARIANT& varSrc) const throw();
```  
  
### Remarks  
 Returns **true** if either the value or type of *varSrc* is not equal to the value or type, respectively, of the `CComVariant` object. Otherwise, **false**. The operator uses the user's default locale to perform the comparison.  
  
 The operator compares only the value of the variant types. It compares strings, integers, and floating points, but not arrays or records.  
  
##  <a name="ccomvariant__operator_lt"></a>  CComVariant::operator &lt;  
 Indicates whether the `CComVariant` object is less than the specified **VARIANT**.  
  
```
bool operator<(const VARIANT& varSrc) const throw();
```  
  
### Remarks  
 Returns **true** if the value of the `CComVariant` object is less than the value of *varSrc*. Otherwise, **false**. The operator uses the user's default locale to perform the comparison.  
  
##  <a name="ccomvariant__operator_gt"></a>  CComVariant::operator &gt;  
 Indicates whether the `CComVariant` object is greater than the specified **VARIANT**.  
  
```
bool operator>(const VARIANT& varSrc) const throw();
```  
  
### Remarks  
 Returns **true** if the value of the `CComVariant` object is greater than the value of *varSrc*. Otherwise, **false**. The operator uses the user's default locale to perform the comparison.  
  
##  <a name="ccomvariant__readfromstream"></a>  CComVariant::ReadFromStream  
 Sets the underlying **VARIANT** to the **VARIANT** contained in the specified stream.  
  
```
HRESULT ReadFromStream(IStream* pStream);
```  
  
### Parameters  
 `pStream`  
 [in] A pointer to the [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interface on the stream containing the data.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 **ReadToStream** requires a previous call to [WriteToStream](#ccomvariant__writetostream).  
  
##  <a name="ccomvariant__setbyref"></a>  CComVariant::SetByRef  
 Initializes the `CComVariant` object and sets the **vt** member to **VT_BYREF**.  
  
```
template < typename T >
void SetByRef(T* pT) throw();
```  
  
### Parameters  
 `T`  
 The type of **VARIANT**, for example, `BSTR`, `int`, or `char`.  
  
 *pT*  
 The pointer used to initialize the `CComVariant` object.  
  
### Remarks  
 `SetByRef` is a function template that initializes the `CComVariant` object to the pointer *pT* and sets the **vt** member to **VT_BYREF**. For example:  
  
 [!code-cpp[NVC_ATL_Utilities#76](../../atl/codesnippet/cpp/ccomvariant-class_1.cpp)]  
  
##  <a name="ccomvariant__writetostream"></a>  CComVariant::WriteToStream  
 Saves the underlying **VARIANT** to a stream.  
  
```
HRESULT WriteToStream(IStream* pStream);
```  
  
### Parameters  
 `pStream`  
 [in] A pointer to the [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interface on a stream.  
  
### Return Value  
 A standard `HRESULT` value.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)