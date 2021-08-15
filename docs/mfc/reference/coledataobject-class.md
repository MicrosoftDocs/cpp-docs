---
description: "Learn more about: COleDataObject Class"
title: "COleDataObject Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDataObject", "AFXOLE/COleDataObject", "AFXOLE/COleDataObject::COleDataObject", "AFXOLE/COleDataObject::Attach", "AFXOLE/COleDataObject::AttachClipboard", "AFXOLE/COleDataObject::BeginEnumFormats", "AFXOLE/COleDataObject::Detach", "AFXOLE/COleDataObject::GetData", "AFXOLE/COleDataObject::GetFileData", "AFXOLE/COleDataObject::GetGlobalData", "AFXOLE/COleDataObject::GetNextFormat", "AFXOLE/COleDataObject::IsDataAvailable", "AFXOLE/COleDataObject::Release"]
helpviewer_keywords: ["COleDataObject [MFC], COleDataObject", "COleDataObject [MFC], Attach", "COleDataObject [MFC], AttachClipboard", "COleDataObject [MFC], BeginEnumFormats", "COleDataObject [MFC], Detach", "COleDataObject [MFC], GetData", "COleDataObject [MFC], GetFileData", "COleDataObject [MFC], GetGlobalData", "COleDataObject [MFC], GetNextFormat", "COleDataObject [MFC], IsDataAvailable", "COleDataObject [MFC], Release"]
ms.assetid: d1cc84be-2e1c-4bb3-a8a0-565eb08aaa34
---
# COleDataObject Class

Used in data transfers for retrieving data in various formats from the Clipboard, through drag and drop, or from an embedded OLE item.

## Syntax

```
class COleDataObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleDataObject::COleDataObject](#coledataobject)|Constructs a `COleDataObject` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDataObject::Attach](#attach)|Attaches the specified OLE data object to the `COleDataObject`.|
|[COleDataObject::AttachClipboard](#attachclipboard)|Attaches the data object that is on the Clipboard.|
|[COleDataObject::BeginEnumFormats](#beginenumformats)|Prepares for one or more subsequent `GetNextFormat` calls.|
|[COleDataObject::Detach](#detach)|Detaches the associated `IDataObject` object.|
|[COleDataObject::GetData](#getdata)|Copies data from the attached OLE data object in a specified format.|
|[COleDataObject::GetFileData](#getfiledata)|Copies data from the attached OLE data object into a `CFile` pointer in the specified format.|
|[COleDataObject::GetGlobalData](#getglobaldata)|Copies data from the attached OLE data object into an `HGLOBAL` in the specified format.|
|[COleDataObject::GetNextFormat](#getnextformat)|Returns the next data format available.|
|[COleDataObject::IsDataAvailable](#isdataavailable)|Checks whether data is available in a specified format.|
|[COleDataObject::Release](#release)|Detaches and releases the associated `IDataObject` object.|

## Remarks

`COleDataObject` does not have a base class.

These kinds of data transfers include a source and a destination. The data source is implemented as an object of the [COleDataSource](../../mfc/reference/coledatasource-class.md) class. Whenever a destination application has data dropped in it or is asked to perform a paste operation from the Clipboard, an object of the `COleDataObject` class must be created.

This class enables you to determine whether the data exists in a specified format. You can also enumerate the available data formats or check whether a given format is available and then retrieve the data in the preferred format. Object retrieval can be accomplished in several different ways, including the use of a [CFile](../../mfc/reference/cfile-class.md), an HGLOBAL, or an `STGMEDIUM` structure.

For more information, see the [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure in the Windows SDK.

For more information about using data objects in your application, see the article [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md).

## Inheritance Hierarchy

`COleDataObject`

## Requirements

**Header:** afxole.h

## <a name="attach"></a> COleDataObject::Attach

Call this function to associate the `COleDataObject` object with an OLE data object.

```cpp
void Attach(
    LPDATAOBJECT lpDataObject,
    BOOL bAutoRelease = TRUE);
```

### Parameters

*lpDataObject*<br/>
Points to an OLE data object.

*bAutoRelease*<br/>
TRUE if the OLE data object should be released when the `COleDataObject` object is destroyed; otherwise FALSE.

### Remarks

For more information, see [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) in the Windows SDK.

## <a name="attachclipboard"></a> COleDataObject::AttachClipboard

Call this function to attach the data object that is currently on the Clipboard to the `COleDataObject` object.

```
BOOL AttachClipboard();
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

> [!NOTE]
> Calling this function locks the Clipboard until this data object is released. The data object is released in the destructor for the `COleDataObject`. For more information, see [OpenClipboard](/windows/win32/api/winuser/nf-winuser-openclipboard) and [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) in the Win32 documention.

## <a name="beginenumformats"></a> COleDataObject::BeginEnumFormats

Call this function to prepare for subsequent calls to `GetNextFormat` for retrieving a list of data formats from the item.

```cpp
void BeginEnumFormats();
```

### Remarks

After a call to `BeginEnumFormats`, the position of the first format supported by this data object is stored. Successive calls to `GetNextFormat` will enumerate the list of available formats in the data object.

To check on the availability of data in a given format, use [COleDataObject::IsDataAvailable](#isdataavailable).

For more information, see [IDataObject::EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) in the Windows SDK.

## <a name="coledataobject"></a> COleDataObject::COleDataObject

Constructs a `COleDataObject` object.

```
COleDataObject();
```

### Remarks

A call to [COleDataObject::Attach](#attach) or [COleDataObject::AttachClipboard](#attachclipboard) must be made before calling other `COleDataObject` functions.

> [!NOTE]
> Since one of the parameters to the drag-and-drop handlers is a pointer to a `COleDataObject`, there is no need to call this constructor to support drag and drop.

## <a name="detach"></a> COleDataObject::Detach

Call this function to detach the `COleDataObject` object from its associated OLE data object without releasing the data object.

```
LPDATAOBJECT Detach();
```

### Return Value

A pointer to the OLE data object that was detached.

### Remarks

## <a name="getdata"></a> COleDataObject::GetData

Call this function to retrieve data from the item in the specified format.

```
BOOL GetData(
    CLIPFORMAT cfFormat,
    LPSTGMEDIUM lpStgMedium,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*cfFormat*<br/>
The format in which data is to be returned. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) function.

*lpStgMedium*<br/>
Points to a [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) structure that will receive data.

*lpFormatEtc*<br/>
Points to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure describing the format in which data is to be returned. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If it is NULL, the default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

For more information, see [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata), [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1), and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

For more information, see [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in the Windows SDK.

## <a name="getfiledata"></a> COleDataObject::GetFileData

Call this function to create a `CFile` or `CFile`-derived object and to retrieve data in the specified format into a `CFile` pointer.

```
CFile* GetFileData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*cfFormat*<br/>
The format in which data is to be returned. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) function.

*lpFormatEtc*<br/>
Points to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure describing the format in which data is to be returned. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If it is NULL, the default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Pointer to the new `CFile` or `CFile`-derived object containing the data if successful; otherwise NULL.

### Remarks

Depending on the medium the data is stored in, the actual type pointed to by the return value may be `CFile`, `CSharedFile`, or `COleStreamFile`.

> [!NOTE]
> The `CFile` object accessed by the return value of this function is owned by the caller. It is the responsibility of the caller to **`delete`** the `CFile` object, thereby closing the file.

For more information, see [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

For more information, see [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in the Windows SDK.

## <a name="getglobaldata"></a> COleDataObject::GetGlobalData

Call this function to allocate a global memory block and to retrieve data in the specified format into an HGLOBAL.

```
HGLOBAL GetGlobalData(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*cfFormat*<br/>
The format in which data is to be returned. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) function.

*lpFormatEtc*<br/>
Points to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure describing the format in which data is to be returned. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If it is NULL, the default values are used for the other fields in the `FORMATETC` structure.

### Return Value

The handle of the global memory block containing the data if successful; otherwise NULL.

### Remarks

For more information, see [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

For more information, see [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in the Windows SDK.

## <a name="getnextformat"></a> COleDataObject::GetNextFormat

Call this function repeatedly to obtain all the formats available for retrieving data from the item.

```
BOOL GetNextFormat(LPFORMATETC lpFormatEtc);
```

### Parameters

*lpFormatEtc*<br/>
Points to the [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure that receives the format information when the function call returns.

### Return Value

Nonzero if another format is available; otherwise 0.

### Remarks

After a call to [COleDataObject::BeginEnumFormats](#beginenumformats), the position of the first format supported by this data object is stored. Successive calls to `GetNextFormat` will enumerate the list of available formats in the data object. Use these functions to list the available formats.

To check for the availability of a given format, call [COleDataObject::IsDataAvailable](#isdataavailable).

For more information, see [IEnumXXXX::Next](/previous-versions/ms695273\(v=vs.85\)) in the Windows SDK.

## <a name="isdataavailable"></a> COleDataObject::IsDataAvailable

Call this function to determine if a particular format is available for retrieving data from the OLE item.

```
BOOL IsDataAvailable(
    CLIPFORMAT cfFormat,
    LPFORMATETC lpFormatEtc = NULL);
```

### Parameters

*cfFormat*<br/>
The Clipboard data format to be used in the structure pointed to by *lpFormatEtc*. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) function.

*lpFormatEtc*<br/>
Points to a [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) structure describing the format desired. Provide a value for this parameter only if you want to specify additional format information beyond the Clipboard format specified by *cfFormat*. If it is NULL, the default values are used for the other fields in the `FORMATETC` structure.

### Return Value

Nonzero if data is available in the specified format; otherwise 0.

### Remarks

This function is useful before calling `GetData`, `GetFileData`, or `GetGlobalData`.

For more information, see [IDataObject::QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) and [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in the Windows SDK.

For more information, see [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) in the Windows SDK.

### Example

  See the example for [CRichEditView::QueryAcceptData](../../mfc/reference/cricheditview-class.md#queryacceptdata).

## <a name="release"></a> COleDataObject::Release

Call this function to release ownership of the [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) object that was previously associated with the `COleDataObject` object.

```cpp
void Release();
```

### Remarks

The `IDataObject` was associated with the `COleDataObject` by calling `Attach` or `AttachClipboard` explicitly or by the framework. If the *bAutoRelease* parameter of `Attach` is FALSE, the `IDataObject` object will not be released. In this case, the caller is responsible for releasing the `IDataObject` by calling [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release).

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDataSource Class](../../mfc/reference/coledatasource-class.md)<br/>
[COleClientItem Class](../../mfc/reference/coleclientitem-class.md)<br/>
[COleServerItem Class](../../mfc/reference/coleserveritem-class.md)
