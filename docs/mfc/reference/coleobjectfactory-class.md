---
description: "Learn more about: COleObjectFactory Class"
title: "COleObjectFactory Class"
ms.date: "11/04/2016"
f1_keywords: ["COleObjectFactory", "AFXDISP/COleObjectFactory", "AFXDISP/COleObjectFactory::COleObjectFactory", "AFXDISP/COleObjectFactory::GetClassID", "AFXDISP/COleObjectFactory::IsLicenseValid", "AFXDISP/COleObjectFactory::IsRegistered", "AFXDISP/COleObjectFactory::Register", "AFXDISP/COleObjectFactory::RegisterAll", "AFXDISP/COleObjectFactory::Revoke", "AFXDISP/COleObjectFactory::RevokeAll", "AFXDISP/COleObjectFactory::UnregisterAll", "AFXDISP/COleObjectFactory::UpdateRegistry", "AFXDISP/COleObjectFactory::UpdateRegistryAll", "AFXDISP/COleObjectFactory::GetLicenseKey", "AFXDISP/COleObjectFactory::OnCreateObject", "AFXDISP/COleObjectFactory::VerifyLicenseKey", "AFXDISP/COleObjectFactory::VerifyUserLicense"]
helpviewer_keywords: ["COleObjectFactory [MFC], COleObjectFactory", "COleObjectFactory [MFC], GetClassID", "COleObjectFactory [MFC], IsLicenseValid", "COleObjectFactory [MFC], IsRegistered", "COleObjectFactory [MFC], Register", "COleObjectFactory [MFC], RegisterAll", "COleObjectFactory [MFC], Revoke", "COleObjectFactory [MFC], RevokeAll", "COleObjectFactory [MFC], UnregisterAll", "COleObjectFactory [MFC], UpdateRegistry", "COleObjectFactory [MFC], UpdateRegistryAll", "COleObjectFactory [MFC], GetLicenseKey", "COleObjectFactory [MFC], OnCreateObject", "COleObjectFactory [MFC], VerifyLicenseKey", "COleObjectFactory [MFC], VerifyUserLicense"]
ms.assetid: ab179c1e-4af2-44aa-a576-37c48149b427
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
|[COleObjectFactory::COleObjectFactory](#coleobjectfactory)|Constructs a `COleObjectFactory` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleObjectFactory::GetClassID](#getclassid)|Returns the OLE class ID of the objects this factory creates.|
|[COleObjectFactory::IsLicenseValid](#islicensevalid)|Determines if the license of the control is valid.|
|[COleObjectFactory::IsRegistered](#isregistered)|Indicates whether the object factory is registered with the OLE system DLLs.|
|[COleObjectFactory::Register](#register)|Registers this object factory with the OLE system DLLs.|
|[COleObjectFactory::RegisterAll](#registerall)|Registers all of the application's object factories with OLE system DLLs.|
|[COleObjectFactory::Revoke](#revoke)|Revokes this object factory's registration with the OLE system DLLs.|
|[COleObjectFactory::RevokeAll](#revokeall)|Revokes an application's object factories' registrations with the OLE system DLLs.|
|[COleObjectFactory::UnregisterAll](#unregisterall)|Unregisters all of an application's object factories.|
|[COleObjectFactory::UpdateRegistry](#updateregistry)|Registers this object factory with the OLE system registry.|
|[COleObjectFactory::UpdateRegistryAll](#updateregistryall)|Registers all of the application's object factories with the OLE system registry.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[COleObjectFactory::GetLicenseKey](#getlicensekey)|Requests a unique key from the control's DLL.|
|[COleObjectFactory::OnCreateObject](#oncreateobject)|Called by the framework to create a new object of this factory's type.|
|[COleObjectFactory::VerifyLicenseKey](#verifylicensekey)|Verifies that the key embedded in the control matches the key embedded in the container.|
|[COleObjectFactory::VerifyUserLicense](#verifyuserlicense)|Verifies that the control is licensed for design-time use.|

## Remarks

The `COleObjectFactory` class has member functions for performing the following functions:

- Managing the registration of objects.

- Updating the OLE system register, as well as the run-time registration that informs OLE that objects are running and ready to receive messages.

- Enforcing licensing by limiting use of the control to licensed developers at design time and to licensed applications at run time.

- Registering control object factories with the OLE system registry.

For more information about object creation, see the articles [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md) and [Data Objects and Data Sources: Creation and Destruction](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). For more about registration, see the article [Registration](../../mfc/registration.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleObjectFactory`

## Requirements

**Header:** afxdisp.h

## <a name="coleobjectfactory"></a> COleObjectFactory::COleObjectFactory

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

*clsid*<br/>
Reference to the OLE class ID this object factory represents.

*pRuntimeClass*<br/>
Pointer to the run-time class of the C++ objects this factory can create.

*bMultiInstance*<br/>
Indicates whether a single instance of the application can support multiple instantiations. If TRUE, multiple instances of the application are launched for each request to create an object.

*nFlags*<br/>
Contains one or more of the following flags:

- `afxRegDefault` Sets the threading model to ThreadingModel=Apartment.

- `afxRegInsertable` Allows the control to appear in the **Insert Object** dialog box for OLE objects.

- `afxRegApartmentThreading` Sets the threading model in the registry to ThreadingModel=Apartment.

- `afxRegFreeThreading` Sets the threading model in the registry to ThreadingModel=Free.

   You can combine the two flags `afxRegApartmentThreading` and `afxRegFreeThreading` to set ThreadingModel=Both. See [InprocServer32](/windows/win32/com/inprocserver32) in the Windows SDK for more information on threading model registration.

*lpszProgID*<br/>
Pointer to a string containing a verbal program identifier, such as "Microsoft Excel."

### Remarks

To use the object, however, you must register it.

For more information, see [CLSID Key](/windows/win32/com/clsid-key-hklm) in the Windows SDK.

## <a name="getclassid"></a> COleObjectFactory::GetClassID

Returns a reference to the OLE class ID this factory represents.

```
REFCLSID GetClassID() const;
```

### Return Value

Reference to the OLE class ID this factory represents.

### Remarks

For more information, see [CLSID Key](/windows/win32/com/clsid-key-hklm) in the Windows SDK.

## <a name="getlicensekey"></a> COleObjectFactory::GetLicenseKey

Requests a unique license key from the control's DLL and stores it in the BSTR pointed to by *pbstrKey*.

```
virtual BOOL GetLicenseKey(
    DWORD dwReserved,
    BSTR* pbstrKey);
```

### Parameters

*dwReserved*<br/>
Reserved for future use.

*pbstrKey*<br/>
Pointer to a BSTR that will store the license key.

### Return Value

Nonzero if the license-key string is not NULL; otherwise 0.

### Remarks

The default implementation of this function returns 0 and stores nothing in the BSTR. If you use MFC ActiveX ControlWizard to create your project, ControlWizard supplies an override that retrieves the control's license key.

## <a name="islicensevalid"></a> COleObjectFactory::IsLicenseValid

Determines if the license of the control is valid.

```
BOOL IsLicenseValid();
```

### Return Value

TRUE if successul; otherwise false.

## <a name="isregistered"></a> COleObjectFactory::IsRegistered

Returns a nonzero value if the factory is registered with the OLE system DLLs.

```
virtual BOOL IsRegistered() const;
```

### Return Value

Nonzero if the factory is registered; otherwise 0.

## <a name="oncreateobject"></a> COleObjectFactory::OnCreateObject

Called by the framework to create a new object.

```
virtual CCmdTarget* OnCreateObject();
```

### Return Value

A pointer to the created object. It can throw a memory exception if it fails.

### Remarks

Override this function to create the object from something other than the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passed to the constructor.

## <a name="register"></a> COleObjectFactory::Register

Registers this object factory with the OLE system DLLs.

```
virtual BOOL Register();
```

### Return Value

Nonzero if the factory is successfully registered; otherwise 0.

### Remarks

This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) when the application is launched.

## <a name="registerall"></a> COleObjectFactory::RegisterAll

Registers all of the application's object factories with the OLE system DLLs.

```
static BOOL PASCAL RegisterAll();
```

### Return Value

Nonzero if the factories are successfully registered; otherwise 0.

### Remarks

This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) when the application is launched.

## <a name="revoke"></a> COleObjectFactory::Revoke

Revokes this object factory's registration with the OLE system DLLs.

```cpp
void Revoke();
```

### Remarks

The framework calls this function automatically before the application terminates. If necessary, call it from an override of [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

## <a name="revokeall"></a> COleObjectFactory::RevokeAll

Revokes all of the application's object factories' registrations with the OLE system DLLs.

```
static void PASCAL RevokeAll();
```

### Remarks

The framework calls this function automatically before the application terminates. If necessary, call it from an override of [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

## <a name="unregisterall"></a> COleObjectFactory::UnregisterAll

Unregisters all of an application's object factories.

```
static BOOL PASCAL UnregisterAll();
```

### Return Value

TRUE if successful; otherwise FALSE.

## <a name="updateregistry"></a> COleObjectFactory::UpdateRegistry

Registers all of the application's object factories with the OLE system registry.

```cpp
void UpdateRegistry(LPCTSTR lpszProgID = NULL);
virtual BOOL UpdateRegistry(BOOL bRegister);
```

### Parameters

*lpszProgID*<br/>
Pointer to a string containing the human-readable program identifier, such as "Excel.Document.5."

*bRegister*<br/>
Determines whether the control class's object factory is to be registered.

### Remarks

Brief discussions of the two forms for this function follow:

- **UpdateRegistry(** `lpszProgID` **)** Registers this object factory with the OLE system registry. This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) when the application is launched.

- **UpdateRegistry(** `bRegister` **)** This form of the function is overridable. If *bRegister* is TRUE, this function registers the control class with the system registry. Otherwise, it unregisters the class.

   If you use MFC ActiveX ControlWizard to create your project, ControlWizard supplies an override to this pure virtual function.

## <a name="updateregistryall"></a> COleObjectFactory::UpdateRegistryAll

Registers all of the application's object factories with the OLE system registry.

```
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```

### Parameters

*bRegister*<br/>
Determines whether the control class's object factory is to be registered.

### Return Value

Nonzero if the factories are successfully updated; otherwise 0.

### Remarks

This function is usually called by [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) when the application is launched.

## <a name="verifylicensekey"></a> COleObjectFactory::VerifyLicenseKey

Verifies that the container is licensed to use the OLE control.

```
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```

### Parameters

*bstrKey*<br/>
A BSTR storing the container's version of the license string.

### Return Value

Nonzero if the run-time license is valid; otherwise 0.

### Remarks

The default version calls [GetLicenseKey](#getlicensekey) to get a copy of the control's license string and compares it with the string in *bstrKey*. If the two strings match, the function returns a nonzero value; otherwise it returns 0.

You can override this function to provide customized verification of the license.

The function [VerifyUserLicense](#verifyuserlicense) verifies the design-time license.

## <a name="verifyuserlicense"></a> COleObjectFactory::VerifyUserLicense

Verifies the design-time license for the OLE control.

```
virtual BOOL VerifyUserLicense();
```

### Return Value

Nonzero if the design-time license is valid; otherwise 0.

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)
