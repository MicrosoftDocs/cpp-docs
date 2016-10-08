---
title: "CAtlModule Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 63fe02f1-4c4b-4e7c-ae97-7ad7b4252415
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CAtlModule Class
This class provides methods used by several ATL module classes.  
  
## Syntax  
  
```  
class ATL_NO_VTABLE CAtlModule :  
    public _ATL_MODULE  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlModule::CAtlModule](../Topic/CAtlModule::CAtlModule.md)|The constructor.|  
|[CAtlModule::~CAtlModule](../Topic/CAtlModule::~CAtlModule.md)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlModule::AddCommonRGSReplacements](../Topic/CAtlModule::AddCommonRGSReplacements.md)|Override this method to add parameters to the ATL Registry Component (Registrar) replacement map.|  
|[CAtlModule::AddTermFunc](../Topic/CAtlModule::AddTermFunc.md)|Adds a new function to be called when the module terminates.|  
|[CAtlModule::GetGITPtr](../Topic/CAtlModule::GetGITPtr.md)|Returns the Global Interface Pointer.|  
|[CAtlModule::GetLockCount](../Topic/CAtlModule::GetLockCount.md)|Returns the lock count.|  
|[CAtlModule::Lock](../Topic/CAtlModule::Lock.md)|Increments the lock count.|  
|[CAtlModule::Term](../Topic/CAtlModule::Term.md)|Releases all data members.|  
|[CAtlModule::Unlock](../Topic/CAtlModule::Unlock.md)|Decrements the lock count.|  
|[CAtlModule::UpdateRegistryFromResourceD](../Topic/CAtlModule::UpdateRegistryFromResourceD.md)|Runs the script contained in a specified resource to register or unregister an object.|  
|[CAtlModule::UpdateRegistryFromResourceDHelper](../Topic/CAtlModule::UpdateRegistryFromResourceDHelper.md)|This method is called by `UpdateRegistryFromResourceD` to perform the registry update.|  
|[CAtlModule::UpdateRegistryFromResourceS](../Topic/CAtlModule::UpdateRegistryFromResourceS.md)|Runs the script contained in a specified resource to register or unregister an object. This method statically links to the ATL Registry Component.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlModule::m_libid](../Topic/CAtlModule::m_libid.md)|Contains the GUID of the current module.|  
|[CAtlModule::m_pGIT](../Topic/CAtlModule::m_pGIT.md)|Pointer to the Global Interface Table.|  
  
## Remarks  
 This class is used by [CAtlDllModuleT Class](../VS_visualcpp/CAtlDllModuleT-Class.md), [CAtlExeModuleT Class](../VS_visualcpp/CAtlExeModuleT-Class.md), and [CAtlServiceModuleT Class](../VS_visualcpp/CAtlServiceModuleT-Class.md) to provide support for DLL applications, EXE applications, and Windows services, respectively.  
  
 For more information on modules in ATL, see [ATL Module Classes](../VS_visualcpp/ATL-Module-Classes.md).  
  
 This class replaces the obsolete [CComModule Class](../VS_visualcpp/CComModule-Class.md) used in earlier versions of ATL.  
  
## Inheritance Hierarchy  
 [_ATL_MODULE](../Topic/_ATL_MODULE.md)  
  
 `CAtlModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlmodule__addcommonrgsreplacements"></a>  CAtlModule::AddCommonRGSReplacements  
 Override this method to add parameters to the ATL Registry Component (Registrar) replacement map.  
  
```  
virtual HRESULT AddCommonRGSReplacements(    IRegistrarBase* /* pRegistrar*/) throw() = 0;  
```  
  
### Parameters  
 *pRegistrar*  
 Reserved.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Replaceable parameters allow a Registrar's client to specify run-time data. To do this, the Registrar maintains a replacement map into which it enters the values associated with the replaceable parameters in your script. The Registrar makes these entries at run time.  
  
 See the topic [Using Replaceable Parameters (The Registrar's Preprocessor)](../VS_visualcpp/Using-Replaceable-Parameters--The-Registrar-s-Preprocessor-.md) for more details.  
  
##  <a name="catlmodule__addtermfunc"></a>  CAtlModule::AddTermFunc  
 Adds a new function to be called when the module terminates.  
  
```  
HRESULT AddTermFunc(  
    _ATL_TERMFUNC* pFunc,  
    DWORD_PTR dw ) throw();  
```  
  
### Parameters  
 *pFunc*  
 Pointer to the function to add.  
  
 `dw`  
 User-defined data, passed to the function.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="catlmodule__catlmodule"></a>  CAtlModule::CAtlModule  
 The constructor.  
  
```  
CAtlModule() throw();  
```  
  
### Remarks  
 Initializes data members and initiates a critical section around the module's thread.  
  
##  <a name="catlmodule___dtorcatlmodule"></a>  CAtlModule::~CAtlModule  
 The destructor.  
  
```  
~CAtlModule() throw();  
```  
  
### Remarks  
 Releases all data members.  
  
##  <a name="catlmodule__getgitptr"></a>  CAtlModule::GetGITPtr  
 Retrieves a pointer to the Global Interface Table.  
  
```  
virtual HRESULT GetGITPtr(    IGlobalInterfaceTable** ppGIT ) throw();  
```  
  
### Parameters  
 `ppGIT`  
 Pointer to the variable which will receive the pointer to the Global Interface Table.  
  
### Return Value  
 Returns S_OK on success, or an error code on failure. E_POINTER is returned if `ppGIT` is equal to NULL.  
  
### Remarks  
 If the Global Interface Table object does not exist, it is created, and its address is stored in the member variable [CAtlModule::m_pGIT](../Topic/CAtlModule::m_pGIT.md).  
  
 In debug builds, an assertion error will occur if `ppGIT` is equal to NULL, or if the Global Interface Table pointer cannot be obtained.  
  
 See [IGlobalInterfaceTable](http://msdn.microsoft.com/library/windows/desktop/ms678517) for information on the Global Interface Table.  
  
##  <a name="catlmodule__getlockcount"></a>  CAtlModule::GetLockCount  
 Returns the lock count.  
  
```  
virtual LONG GetLockCount() throw();  
```  
  
### Return Value  
 Returns the lock count. This value may be useful for diagnostics and debugging.  
  
##  <a name="catlmodule__lock"></a>  CAtlModule::Lock  
 Increments the lock count.  
  
```  
virtual LONG Lock() throw();  
```  
  
### Return Value  
 Increments the lock count and returns the updated value. This value may be useful for diagnostics and debugging.  
  
##  <a name="catlmodule__m_libid"></a>  CAtlModule::m_libid  
 Contains the GUID of the current module.  
  
```  
static GUID m_libid;  
```  
  
##  <a name="catlmodule__m_pgit"></a>  CAtlModule::m_pGIT  
 Pointer to the Global Interface Table.  
  
```  
IGlobalInterfaceTable * m_pGIT;  
```  
  
##  <a name="catlmodule__term"></a>  CAtlModule::Term  
 Releases all data members.  
  
```  
void Term() throw();  
```  
  
### Remarks  
 Releases all data members. This method is called by the destructor.  
  
##  <a name="catlmodule__unlock"></a>  CAtlModule::Unlock  
 Decrements the lock count.  
  
```  
virtual LONG Unlock() throw();  
```  
  
### Return Value  
 Decrements the lock count and returns the updated value. This value may be useful for diagnostics and debugging.  
  
##  <a name="catlmodule__updateregistryfromresourced"></a>  CAtlModule::UpdateRegistryFromResourceD  
 Runs the script contained in a specified resource to register or unregister an object.  
  
```  
HRESULT WINAPI UpdateRegistryFromResourceD(  
    UINT nResID,  
    BOOL bRegister,  
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL ) throw();  
  
    HRESULT WINAPI UpdateRegistryFromResourceD(  
    LPCTSTR lpszRes,  
    BOOL bRegister,  
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL ) throw();  
```  
  
### Parameters  
 `lpszRes`  
 A resource name.  
  
 `nResID`  
 A resource ID.  
  
 `bRegister`  
 **TRUE** if the object should be registered;                                 **FALSE** otherwise.  
  
 `pMapEntries`  
 A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](../Topic/CAtlModule::AddCommonRGSReplacements.md). Otherwise, use the **NULL** default value.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Runs the script contained in the resource specified by *lpszRes or nResID*. If `bRegister` is **TRUE**, this method registers the object in the system registry; otherwise it removes the object from the registry.  
  
 To statically link to the ATL Registry Component (Registrar), see [CAtlModule::UpdateRegistryFromResourceS](../Topic/CAtlModule::UpdateRegistryFromResourceS.md).  
  
 This method calls [CAtlModule::UpdateRegistryFromResourceDHelper](../Topic/CAtlModule::UpdateRegistryFromResourceDHelper.md).  
  
##  <a name="catlmodule__updateregistryfromresourcedhelper"></a>  CAtlModule::UpdateRegistryFromResourceDHelper  
 This method is called by `UpdateRegistryFromResourceD` to perform the registry update.  
  
```  
inline HRESULT WINAPI UpdateRegistryFromResourceDHelper(  
    LPCOLESTR lpszRes,  
    BOOL bRegister,  
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL ) throw();  
```  
  
### Parameters  
 `lpszRes`  
 A resource name.  
  
 `bRegister`  
 Indicates whether the object should be registered.  
  
 `pMapEntries`  
 A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](../Topic/CAtlModule::AddCommonRGSReplacements.md). Otherwise, use the **NULL** default value.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method provides the implementation of [CAtlModule::UpdateRegistryFromResourceD](../Topic/CAtlModule::UpdateRegistryFromResourceD.md).  
  
##  <a name="catlmodule__updateregistryfromresources"></a>  CAtlModule::UpdateRegistryFromResourceS  
 Runs the script contained in a specified resource to register or unregister an object. This method statically links to the ATL Registry Component.  
  
```  
HRESULT WINAPI UpdateRegistryFromResourceS(  
    UINT nResID,  
    BOOL bRegister,  
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL ) throw();  
  
    HRESULT WINAPI UpdateRegistryFromResourceS(  
    LPCTSTR lpszRes,  
    BOOL bRegister,  
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL ) throw();  
```  
  
### Parameters  
 `nResID`  
 A resource ID.  
  
 `lpszRes`  
 A resource name.  
  
 `bRegister`  
 Indicates whether the resource script should be registered.  
  
 `pMapEntries`  
 A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](../Topic/CAtlModule::AddCommonRGSReplacements.md). Otherwise, use the **NULL** default value.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Similar to [CAtlModule::UpdateRegistryFromResourceD](../Topic/CAtlModule::UpdateRegistryFromResourceD.md) except `CAtlModule::UpdateRegistryFromResourceS` creates a static link to the ATL Registry Component (Registrar).  
  
## See Also  
 [_ATL_MODULE](../Topic/_ATL_MODULE.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Module Classes](../VS_visualcpp/ATL-Module-Classes.md)   
 [Registry Component (Registrar)](../VS_visualcpp/ATL-Registry-Component--Registrar-.md)