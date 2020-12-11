---
description: "Learn more about: CCachedDataPathProperty Class"
title: "CCachedDataPathProperty Class"
ms.date: "11/04/2016"
f1_keywords: ["CCachedDataPathProperty", "AFXCTL/CCachedDataPathProperty", "AFXCTL/CCachedDataPathProperty::CCachedDataPathProperty", "AFXCTL/CCachedDataPathProperty::m_Cache"]
helpviewer_keywords: ["CCachedDataPathProperty [MFC], CCachedDataPathProperty", "CCachedDataPathProperty [MFC], m_Cache"]
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
---
# CCachedDataPathProperty Class

Implements an OLE control property transferred asynchronously and cached in a memory file.

## Syntax

```
class CCachedDataPathProperty : public CDataPathProperty
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CCachedDataPathProperty::CCachedDataPathProperty](#ccacheddatapathproperty)|Constructs a `CCachedDataPathProperty` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CCachedDataPathProperty::m_Cache](#m_cache)|`CMemFile` object in which to cache data.|

## Remarks

A memory file is stored in RAM rather than on disk and is useful for fast temporary transfers.

Along with `CAysncMonikerFile` and `CDataPathProperty`, `CCachedDataPathProperty` provides functionality for the use of asynchronous monikers in OLE controls. With `CCachedDataPathProperty` objects, you are able to transfer data asynchronously from a URL or file source and store it in a memory file via the `m_Cache` public variable. All the data is stored in the memory file, and there is no need to override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) unless you want to watch for notifications and respond. For example, if you are transferring a large .GIF file and want to notify your control that more data has arrived and it should redraw itself, override `OnDataAvailable` to make the notification.

The class `CCachedDataPathProperty` is derived from `CDataPathProperty`.

For more information about how to use asynchronous monikers and ActiveX controls in Internet applications, see the following topics:

- [Internet First Steps: ActiveX Controls](../../mfc/activex-controls-on-the-internet.md)

- [Internet First Steps: Asynchronous Monikers](../../mfc/asynchronous-monikers-on-the-internet.md)

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

[CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)

`CCachedDataPathProperty`

## Requirements

**Header:** afxctl.h

## <a name="ccacheddatapathproperty"></a> CCachedDataPathProperty::CCachedDataPathProperty

Constructs a `CCachedDataPathProperty` object.

```
CCachedDataPathProperty(COleControl* pControl = NULL);

CCachedDataPathProperty(
    LPCTSTR lpszPath,
    COleControl* pControl = NULL);
```

### Parameters

*pControl*<br/>
A pointer to the ActiveX control object to be associated with this `CCachedDataPathProperty` object.

*lpszPath*<br/>
The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CCachedDataPathProperty` uses URLs, not filenames. If you want a `CCachedDataPathProperty` object for a file, prepend file:// to the path.

### Remarks

The `COleControl` object pointed to by *pControl* is used by [Open](../../mfc/reference/cdatapathproperty-class.md#open) and retrieved by derived classes. If *pControl* is NULL, the control used with `Open` should be set with [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). If *lpszPath* is NULL, you can pass in the path through `Open` or set it with [SetPath](../../mfc/reference/cdatapathproperty-class.md#setpath).

## <a name="m_cache"></a> CCachedDataPathProperty::m_Cache

Contains the class name of the memory file into which data is cached.

```
CMemFile m_Cache;
```

### Remarks

A memory file is stored in RAM rather than on disk.

## See also

[CDataPathProperty Class](../../mfc/reference/cdatapathproperty-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDataPathProperty Class](../../mfc/reference/cdatapathproperty-class.md)
