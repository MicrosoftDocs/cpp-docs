---
description: "Learn more about: CDataPathProperty Class"
title: "CDataPathProperty Class"
ms.date: "11/04/2016"
f1_keywords: ["CDataPathProperty", "AFXCTL/CDataPathProperty", "AFXCTL/CDataPathProperty::CDataPathProperty", "AFXCTL/CDataPathProperty::GetControl", "AFXCTL/CDataPathProperty::GetPath", "AFXCTL/CDataPathProperty::Open", "AFXCTL/CDataPathProperty::ResetData", "AFXCTL/CDataPathProperty::SetControl", "AFXCTL/CDataPathProperty::SetPath"]
helpviewer_keywords: ["CDataPathProperty [MFC], CDataPathProperty", "CDataPathProperty [MFC], GetControl", "CDataPathProperty [MFC], GetPath", "CDataPathProperty [MFC], Open", "CDataPathProperty [MFC], ResetData", "CDataPathProperty [MFC], SetControl", "CDataPathProperty [MFC], SetPath"]
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
---
# CDataPathProperty Class

Implements an OLE control property that can be loaded asynchronously.

## Syntax

```
class CDataPathProperty : public CAsyncMonikerFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDataPathProperty::CDataPathProperty](#cdatapathproperty)|Constructs a `CDataPathProperty` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDataPathProperty::GetControl](#getcontrol)|Retrieves the asynchronous OLE control associated with the `CDataPathProperty` object.|
|[CDataPathProperty::GetPath](#getpath)|Retrieves the pathname of the property.|
|[CDataPathProperty::Open](#open)|Initiates loading of the asynchronous property for the associated ActiveX (OLE) control.|
|[CDataPathProperty::ResetData](#resetdata)|Calls `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed.|
|[CDataPathProperty::SetControl](#setcontrol)|Sets the asynchronous ActiveX (OLE) control associated with the property.|
|[CDataPathProperty::SetPath](#setpath)|Sets the pathname of the property.|

## Remarks

Asynchronous properties are loaded after synchronous initiation.

The class `CDataPathProperty` is derived from `CAysncMonikerFile`. To implement asynchronous properties in your OLE controls, derive a class from `CDataPathProperty`, and override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).

For more information about how to use asynchronous monikers and ActiveX controls in Internet applications, see the following articles:

- [Internet First Steps: ActiveX Controls](../../mfc/activex-controls-on-the-internet.md)

- [Internet First Steps: Asynchronous Monikers](../../mfc/asynchronous-monikers-on-the-internet.md)

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

`CDataPathProperty`

## Requirements

**Header:** afxctl.h

## <a name="cdatapathproperty"></a> CDataPathProperty::CDataPathProperty

Constructs a `CDataPathProperty` object.

```
CDataPathProperty(COleControl* pControl = NULL);
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```

### Parameters

*pControl*<br/>
A pointer to the OLE control object to be associated with this `CDataPathProperty` object.

*lpszPath*<br/>
The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.

### Remarks

The `COleControl` object pointed to by *pControl* is used by `Open` and retrieved by derived classes. If *pControl* is NULL, the control used with `Open` should be set with `SetControl`. If *lpszPath* is NULL, you can pass in the path through `Open` or set it with `SetPath`.

## <a name="getcontrol"></a> CDataPathProperty::GetControl

Call this member function to retrieve the `COleControl` object associated with the `CDataPathProperty` object.

```
COleControl* GetControl();
```

### Return Value

Returns a pointer to the OLE control associated with the `CDataPathProperty` object. NULL if not control is associated.

## <a name="getpath"></a> CDataPathProperty::GetPath

Call this member function to retrieve the path, set when the `CDataPathProperty` object was constructed, or specified in `Open`, or specified in a previous call to the `SetPath` member function.

```
CString GetPath() const;
```

### Return Value

Returns the pathname to the property itself. Can be empty if no path has been specified.

## <a name="open"></a> CDataPathProperty::Open

Call this member function to initiate loading of the asynchronous property for the associated control.

```
virtual BOOL Open(
    COleControl* pControl,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszPath,
    COleControl* pControl,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszPath,
    CFileException* pError = NULL);

virtual BOOL Open(CFileException* pError = NULL);
```

### Parameters

*pControl*<br/>
A pointer to the OLE control object to be associated with this `CDataPathProperty` object.

*pError*<br/>
A pointer to a file exception. In the event of an error, will be set to the cause.

*lpszPath*<br/>
The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The function attempts to obtain the `IBindHost` interface from the control.

Before calling `Open` without a path, the value for the property's path must be set. This can be done when the object is constructed, or by calling the `SetPath` member function.

Before calling `Open` without a control, an ActiveX control (formerly known as an OLE control) can be associated with the object. This can be done when the object is constructed, or by calling `SetControl`.

All overloads of [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#open) are also available from `CDataPathProperty`.

## <a name="resetdata"></a> CDataPathProperty::ResetData

Call this function to get `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed, and all the information loaded asynchronously is no longer useful.

```
virtual void ResetData();
```

### Remarks

Opening should be restarted. Derived classes can override this function for different defaults.

## <a name="setcontrol"></a> CDataPathProperty::SetControl

Call this member function to associate an asynchronous OLE control with the `CDataPathProperty` object.

```cpp
void SetControl(COleControl* pControl);
```

### Parameters

*pControl*<br/>
A pointer to the asynchronous OLE control to be associated with the property.

## <a name="setpath"></a> CDataPathProperty::SetPath

Call this member function to set the pathname of the property.

```cpp
void SetPath(LPCTSTR lpszPath);
```

### Parameters

*lpszPath*<br/>
A path, which may be absolute or relative, to the property being loaded asynchronously. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.

## See also

[MFC Sample Image](../../overview/visual-cpp-samples.md)<br/>
[CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)
