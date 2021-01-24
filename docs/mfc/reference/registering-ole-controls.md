---
description: "Learn more about: Registering OLE Controls"
title: "Registering OLE Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["registering OLE controls", "OLE controls [MFC], registering"]
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
---
# Registering OLE Controls

OLE controls, like other OLE server objects, can be accessed by other OLE-aware applications. This is achieved by registering the control's type library and class.

The following functions allow you to add and remove the control's class, property pages, and type library in the Windows registration database:

### Registering OLE Controls

|Name|Description|
|-|-|
|[AfxOleRegisterControlClass](#afxoleregistercontrolclass)|Adds the control's class to the registration database.|
|[AfxOleRegisterPropertyPageClass](#afxoleregisterpropertypageclass)|Adds a control property page to the registration database.|
|[AfxOleRegisterTypeLib](#afxoleregistertypelib)|Adds the control's type library to the registration database.|
|[AfxOleUnregisterClass](#afxoleunregisterclass)|Removes a control class or a property page class from the registration database.|
|[AfxOleUnregisterTypeLib](#afxoleunregistertypelib)|Removes the control's type library from the registration database.|

`AfxOleRegisterTypeLib` is typically called in a control DLL's implementation of `DllRegisterServer`. Similarly, `AfxOleUnregisterTypeLib` is called by `DllUnregisterServer`. `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass`, and `AfxOleUnregisterClass` are typically called by the `UpdateRegistry` member function of a control's class factory or property page.

## <a name="afxoleregistercontrolclass"></a> AfxOleRegisterControlClass

Registers the control class with the Windows registration database.

```
BOOL AFXAPI AfxOleRegisterControlClass(
    HINSTANCE hInstance,
    REFCLSID clsid,
    LPCTSTR pszProgID,
    UINT idTypeName,
    UINT idBitmap,
    int nRegFlags,
    DWORD dwMiscStatus,
    REFGUID tlid,
    WORD wVerMajor,
    WORD wVerMinor);
```

### Parameters

*hInstance*<br/>
The instance handle of the module associated with the control class.

*clsid*<br/>
The unique class ID of the control.

*pszProgID*<br/>
The unique program ID of the control.

*idTypeName*<br/>
The resource ID of the string that contains a user-readable type name for the control.

*idBitmap*<br/>
The resource ID of the bitmap used to represent the OLE control in a toolbar or palette.

*nRegFlags*<br/>
Contains one or more of the following flags:

- `afxRegInsertable` Allows the control to appear in the Insert Object dialog box for OLE objects.

- `afxRegApartmentThreading` Sets the threading model in the registry to ThreadingModel=Apartment.

- `afxRegFreeThreading` Sets the threading model in the registry to ThreadingModel=Free.

   You can combine the two flags `afxRegApartmentThreading` and `afxRegFreeThreading` to set ThreadingModel=Both. See [InprocServer32](/windows/win32/com/inprocserver32) in the Windows SDK for more information on threading model registration.

> [!NOTE]
> In MFC versions before MFC 4.2, the **`int`** *nRegFlags* parameter was a BOOL parameter, *bInsertable*, that allowed or disallowed the control to be inserted from the Insert Object dialog box.

*dwMiscStatus*<br/>
Contains one or more of the following status flags (for a description of the flags, see OLEMISC enumeration in the Windows SDK):

- OLEMISC_RECOMPOSEONRESIZE

- OLEMISC_ONLYICONIC

- OLEMISC_INSERTNOTREPLACE

- OLEMISC_STATIC

- OLEMISC_CANTLINKINSIDE

- OLEMISC_CANLINKBYOLE1

- OLEMISC_ISLINKOBJECT

- OLEMISC_INSIDEOUT

- OLEMISC_ACTIVATEWHENVISIBLE

- OLEMISC_RENDERINGISDEVICEINDEPENDENT

- OLEMISC_INVISIBLEATRUNTIME

- OLEMISC_ALWAYSRUN

- OLEMISC_ACTSLIKEBUTTON

- OLEMISC_ACTSLIKELABEL

- OLEMISC_NOUIACTIVATE

- OLEMISC_ALIGNABLE

- OLEMISC_IMEMODE

- OLEMISC_SIMPLEFRAME

- OLEMISC_SETCLIENTSITEFIRST

*tlid*<br/>
The unique ID of the control class.

*wVerMajor*<br/>
The major version number of the control class.

*wVerMinor*<br/>
The minor version number of the control class.

### Return Value

Nonzero if the control class was registered; otherwise 0.

### Remarks

This allows the control to be used by containers that are OLE-control aware. `AfxOleRegisterControlClass` updates the registry with the control's name and location on the system and also sets the threading model that the control supports in the registry. For more information, see [Technical Note 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Apartment-Model Threading in OLE Controls," and [About Processes and Threads](/windows/win32/ProcThread/about-processes-and-threads) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCAxCtl#11](../../mfc/reference/codesnippet/cpp/registering-ole-controls_1.cpp)]

The above example demonstrates how `AfxOleRegisterControlClass` is called with the flag for insertable and the flag for apartment model ORed together to create the sixth parameter:

[!code-cpp[NVC_MFCAxCtl#12](../../mfc/reference/codesnippet/cpp/registering-ole-controls_2.cpp)]

The control will show up in the Insert Object dialog box for enabled containers, and it will be apartment model-aware. Apartment model-aware controls must ensure that static class data is protected by locks, so that while a control in one apartment is accessing the static data, it isn't disabled by the scheduler before it is finished, and another instance of the same class starts using the same static data. Any accesses to the static data will be surrounded by critical section code.

### Requirements

  **Header** afxctl.h

## <a name="afxoleregisterpropertypageclass"></a> AfxOleRegisterPropertyPageClass

Registers the property page class with the Windows registration database.

```
BOOL AFXAPI AfxOleRegisterPropertyPageClass(
   HINSTANCE hInstance,
   REFCLSID  clsid,
   UINT idTypeName,
   int nRegFlags);
```

### Parameters

*hInstance*<br/>
The instance handle of the module associated with the property page class.

*clsid*<br/>
The unique class ID of the property page.

*idTypeName*<br/>
The resource ID of the string that contains a user-readable name for the property page.

*nRegFlags*<br/>
May contain the flag:

- `afxRegApartmentThreading` Sets the threading model in the registry to ThreadingModel = Apartment.

> [!NOTE]
> In MFC versions prior to MFC 4.2, the **`int`** *nRegFlags* parameter was not available. Note also that the `afxRegInsertable` flag is not a valid option for property pages and will cause an ASSERT in MFC if it is set

### Return Value

Nonzero if the control class was registered; otherwise 0.

### Remarks

This allows the property page to be used by containers that are OLE-control aware. `AfxOleRegisterPropertyPageClass` updates the registry with the property page name and its location on the system and also sets the threading model that the control supports in the registry. For more information, see [Technical Note 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Apartment-Model Threading in OLE Controls," and [About Processes and Threads](/windows/win32/ProcThread/about-processes-and-threads) in the Windows SDK.

### Requirements

  **Header** afxctl.h

## <a name="afxoleregistertypelib"></a> AfxOleRegisterTypeLib

Registers the type library with the Windows registration database and allows the type library to be used by other containers that are OLE-control aware.

```
BOOL AfxOleRegisterTypeLib(
    HINSTANCE hInstance,
    REFGUID tlid,
    LPCTSTR pszFileName = NULL,
    LPCTSTR pszHelpDir  = NULL);
```

### Parameters

*hInstance*<br/>
The instance handle of the application associated with the type library.

*tlid*<br/>
The unique ID of the type library.

*pszFileName*<br/>
Points to the optional filename of a localized type library (.TLB) file for the control.

*pszHelpDir*<br/>
The name of the directory where the help file for the type library can be found. If NULL, the help file is assumed to be in the same directory as the type library itself.

### Return Value

Nonzero if the type library was registered; otherwise 0.

### Remarks

This function updates the registry with the type library name and its location on the system.

### Example

[!code-cpp[NVC_MFCAutomation#7](../../mfc/codesnippet/cpp/registering-ole-controls_3.cpp)]

[!code-cpp[NVC_MFCAutomation#8](../../mfc/codesnippet/cpp/registering-ole-controls_4.cpp)]

### Requirements

  **Header** afxdisp.h

## <a name="afxoleunregisterclass"></a> AfxOleUnregisterClass

Removes the control or property page class entry from the Windows registration database.

```
BOOL AFXAPI AfxOleUnregisterClass(REFCLSID clsID, LPCSTR pszProgID);
```

### Parameters

*clsID*<br/>
The unique class ID of the control or property page.

*pszProgID*<br/>
The unique program ID of the control or property page.

### Return Value

Nonzero if the control or property page class was successfully unregistered; otherwise 0.

### Requirements

  **Header** afxctl.h

## <a name="afxoleunregistertypelib"></a> AfxOleUnregisterTypeLib

Call this function to remove the type library entry from the Windows registration database.

```
BOOL AFXAPI AfxOleUnregisterTypeLib(REFGUID tlID);
```

### Parameters

*tlID*<br/>
The unique ID of the type library.

### Return Value

Nonzero if the type library was successfully unregistered; otherwise 0.

### Example

[!code-cpp[NVC_MFCAxCtl#13](../../mfc/reference/codesnippet/cpp/registering-ole-controls_5.cpp)]

### Requirements

  **Header** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
