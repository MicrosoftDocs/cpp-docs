---
title: "COleObjectFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleObjectFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE, class factory"
  - "OLE class factory"
  - "COleObjectFactory class"
  - "objects [C++], creating OLE"
  - "OLE objects"
  - "object creation, OLE objects"
  - "class factories, COleObjectFactory class"
  - "OLE objects, creating"
ms.assetid: ab179c1e-4af2-44aa-a576-37c48149b427
caps.latest.revision: 21
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
# COleObjectFactory Class
Implements the OLE class factory, which creates OLE objects such as servers, automation objects, and documents.  
  
## Syntax  
  
```  
class COleObjectFactory : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleObjectFactory::COleObjectFactory](#coleobjectfactory__coleobjectfactory)|Constructs a `COleObjectFactory` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleObjectFactory::GetClassID](#coleobjectfactory__getclassid)|Returns the OLE class ID of the objects this factory creates.|  
|[COleObjectFactory::IsLicenseValid](#coleobjectfactory__islicensevalid)|Determines if the license of the control is valid.|  
|[COleObjectFactory::IsRegistered](#coleobjectfactory__isregistered)|Indicates whether the object factory is registered with the OLE system DLLs.|  
|[COleObjectFactory::Register](#coleobjectfactory__register)|Registers this object factory with the OLE system DLLs.|  
|[COleObjectFactory::RegisterAll](#coleobjectfactory__registerall)|Registers all of the application's object factories with OLE system DLLs.|  
|[COleObjectFactory::Revoke](#coleobjectfactory__revoke)|Revokes this object factory's registration with the OLE system DLLs.|  
|[COleObjectFactory::RevokeAll](#coleobjectfactory__revokeall)|Revokes an application's object factories' registrations with the OLE system DLLs.|  
|[COleObjectFactory::UnregisterAll](#coleobjectfactory__unregisterall)|Unregisters all of an application's object factories.|  
|[COleObjectFactory::UpdateRegistry](#coleobjectfactory__updateregistry)|Registers this object factory with the OLE system registry.|  
|[COleObjectFactory::UpdateRegistryAll](#coleobjectfactory__updateregistryall)|Registers all of the application's object factories with the OLE system registry.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleObjectFactory::GetLicenseKey](#coleobjectfactory__getlicensekey)|Requests a unique key from the control's DLL.|  
|[COleObjectFactory::OnCreateObject](#coleobjectfactory__oncreateobject)|Called by the framework to create a new object of this factory's type.|  
|[COleObjectFactory::VerifyLicenseKey](#coleobjectfactory__verifylicensekey)|Verifies that the key embedded in the control matches the key embedded in the container.|  
|[COleObjectFactory::VerifyUserLicense](#coleobjectfactory__verifyuserlicense)|Verifies that the control is licensed for design-time use.|  
  
## Remarks  
 The `COleObjectFactory` class has member functions for performing the following functions:  
  
-   Managing the registration of objects.  
  
-   Updating the OLE system register, as well as the run-time registration that informs OLE that objects are running and ready to receive messages.  
  
-   Enforcing licensing by limiting use of the control to licensed developers at design time and to licensed applications at run time.  
  
-   Registering control object factories with the OLE system registry.  
  
 For more information about object creation, see the articles [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md) and [Data Objects and Data Sources: Creation and Destruction](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). For more about registration, see the article [Registration](../../mfc/registration.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleObjectFactory`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="coleobjectfactory__coleobjectfactory"></a>  COleObjectFactory::COleObjectFactory  
 Constructs a `COleObjectFactory` object, initializes it as an unregistered object factory, and adds it to the list of factories.  
  
```  
COleObjectFactory(
    REFCLSID clsid,  
    CRuntimeClass* pRuntimeClass,  
    BOOL bMultiInstance,  
    LPCTSTR lpszProgID);

 
COleObjectFactory(
    REFCLSID clsid,  
    CRuntimeClass* pRuntimeClass,  
    BOOL bMultiInstance,  
    int nFlags,  
    LPCTSTR lpszProgID);
```  
  
### Parameters  
 `clsid`  
 Reference to the OLE class ID this object factory represents.  
  
 `pRuntimeClass`  
 Pointer to the run-time class of the C++ objects this factory can create.  
  
 `bMultiInstance`  
 Indicates whether a single instance of the application can support multiple instantiations. If **TRUE**, multiple instances of the application are launched for each request to create an object.  
  
 `nFlags`  
 Contains one or more of the following flags:  
  
- **afxRegDefault** Sets the threading model to ThreadingModel=Apartment.  
  
- **afxRegInsertable** Allows the control to appear in the **Insert Object** dialog box for OLE objects.  
  
- `afxRegApartmentThreading` Sets the threading model in the registry to ThreadingModel=Apartment.  
  
- **afxRegFreeThreading** Sets the threading model in the registry to ThreadingModel=Free.  
  
     You can combine the two flags `afxRegApartmentThreading` and `afxRegFreeThreading` to set ThreadingModel=Both. See [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information on threading model registration.  
  
 `lpszProgID`  
 Pointer to a string containing a verbal program identifier, such as "Microsoft Excel."  
  
### Remarks  
 To use the object, however, you must register it.  
  
 For more information, see [CLSID Key](http://msdn.microsoft.com/library/windows/desktop/ms691424) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coleobjectfactory__getclassid"></a>  COleObjectFactory::GetClassID  
 Returns a reference to the OLE class ID this factory represents.  
  
```  
REFCLSID GetClassID() const;

 
```  
  
### Return Value  
 Reference to the OLE class ID this factory represents.  
  
### Remarks  
 For more information, see [CLSID Key](http://msdn.microsoft.com/library/windows/desktop/ms691424) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coleobjectfactory__getlicensekey"></a>  COleObjectFactory::GetLicenseKey  
 Requests a unique license key from the control's DLL and stores it in the `BSTR` pointed to by `pbstrKey`.  
  
```  
virtual BOOL GetLicenseKey(
    DWORD dwReserved,  
    BSTR* pbstrKey);
```  
  
### Parameters  
 `dwReserved`  
 Reserved for future use.  
  
 `pbstrKey`  
 Pointer to a `BSTR` that will store the license key.  
  
### Return Value  
 Nonzero if the license-key string is not **NULL**; otherwise 0.  
  
### Remarks  
 The default implementation of this function returns 0 and stores nothing in the `BSTR`. If you use MFC ActiveX ControlWizard to create your project, ControlWizard supplies an override that retrieves the control's license key.  
  
##  <a name="coleobjectfactory__islicensevalid"></a>  COleObjectFactory::IsLicenseValid  
 Determines if the license of the control is valid.  
  
```  
BOOL IsLicenseValid();
```  
  
### Return Value  
 TRUE if successul; otherwise false.  
  
##  <a name="coleobjectfactory__isregistered"></a>  COleObjectFactory::IsRegistered  
 Returns a nonzero value if the factory is registered with the OLE system DLLs.  
  
```  
virtual BOOL IsRegistered() const;

 
```  
  
### Return Value  
 Nonzero if the factory is registered; otherwise 0.  
  
##  <a name="coleobjectfactory__oncreateobject"></a>  COleObjectFactory::OnCreateObject  
 Called by the framework to create a new object.  
  
```  
virtual CCmdTarget* OnCreateObject();
```  
  
### Return Value  
 A pointer to the created object. It can throw a memory exception if it fails.  
  
### Remarks  
 Override this function to create the object from something other than the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passed to the constructor.  
  
##  <a name="coleobjectfactory__register"></a>  COleObjectFactory::Register  
 Registers this object factory with the OLE system DLLs.  
  
```  
virtual BOOL Register();
```  
  
### Return Value  
 Nonzero if the factory is successfully registered; otherwise 0.  
  
### Remarks  
 This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__initinstance) when the application is launched.  
  
##  <a name="coleobjectfactory__registerall"></a>  COleObjectFactory::RegisterAll  
 Registers all of the application's object factories with the OLE system DLLs.  
  
```  
static BOOL PASCAL RegisterAll();
```  
  
### Return Value  
 Nonzero if the factories are successfully registered; otherwise 0.  
  
### Remarks  
 This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__initinstance) when the application is launched.  
  
##  <a name="coleobjectfactory__revoke"></a>  COleObjectFactory::Revoke  
 Revokes this object factory's registration with the OLE system DLLs.  
  
```  
void Revoke();
```  
  
### Remarks  
 The framework calls this function automatically before the application terminates. If necessary, call it from an override of [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__exitinstance).  
  
##  <a name="coleobjectfactory__revokeall"></a>  COleObjectFactory::RevokeAll  
 Revokes all of the application's object factories' registrations with the OLE system DLLs.  
  
```  
static void PASCAL RevokeAll();
```  
  
### Remarks  
 The framework calls this function automatically before the application terminates. If necessary, call it from an override of [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__exitinstance).  
  
##  <a name="coleobjectfactory__unregisterall"></a>  COleObjectFactory::UnregisterAll  
 Unregisters all of an application's object factories.  
  
```  
static BOOL PASCAL UnregisterAll();
```  
  
### Return Value  
 TRUE if successful; otherwise FALSE.  
  
##  <a name="coleobjectfactory__updateregistry"></a>  COleObjectFactory::UpdateRegistry  
 Registers all of the application's object factories with the OLE system registry.  
  
```  
void UpdateRegistry(LPCTSTR lpszProgID = NULL);

 
virtual BOOL UpdateRegistry(BOOL bRegister);
```  
  
### Parameters  
 `lpszProgID`  
 Pointer to a string containing the human-readable program identifier, such as "Excel.Document.5."  
  
 `bRegister`  
 Determines whether the control class's object factory is to be registered.  
  
### Remarks  
 Brief discussions of the two forms for this function follow:  
  
- **UpdateRegistry(** `lpszProgID` **)** Registers this object factory with the OLE system registry. This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__initinstance) when the application is launched.  
  
- **UpdateRegistry(** `bRegister` **)** This form of the function is overridable. If `bRegister` is **TRUE**, this function registers the control class with the system registry. Otherwise, it unregisters the class.  
  
     If you use MFC ActiveX ControlWizard to create your project, ControlWizard supplies an override to this pure virtual function.  
  
##  <a name="coleobjectfactory__updateregistryall"></a>  COleObjectFactory::UpdateRegistryAll  
 Registers all of the application's object factories with the OLE system registry.  
  
```  
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```  
  
### Parameters  
 `bRegister`  
 Determines whether the control class's object factory is to be registered.  
  
### Return Value  
 Nonzero if the factories are successfully updated; otherwise 0.  
  
### Remarks  
 This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#cwinapp__initinstance) when the application is launched.  
  
##  <a name="coleobjectfactory__verifylicensekey"></a>  COleObjectFactory::VerifyLicenseKey  
 Verifies that the container is licensed to use the OLE control.  
  
```  
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```  
  
### Parameters  
 `bstrKey`  
 A `BSTR` storing the container's version of the license string.  
  
### Return Value  
 Nonzero if the run-time license is valid; otherwise 0.  
  
### Remarks  
 The default version calls [GetLicenseKey](#coleobjectfactory__getlicensekey) to get a copy of the control's license string and compares it with the string in `bstrKey`. If the two strings match, the function returns a nonzero value; otherwise it returns 0.  
  
 You can override this function to provide customized verification of the license.  
  
 The function [VerifyUserLicense](#coleobjectfactory__verifyuserlicense) verifies the design-time license.  
  
##  <a name="coleobjectfactory__verifyuserlicense"></a>  COleObjectFactory::VerifyUserLicense  
 Verifies the design-time license for the OLE control.  
  
```  
virtual BOOL VerifyUserLicense();
```  
  
### Return Value  
 Nonzero if the design-time license is valid; otherwise 0.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)
