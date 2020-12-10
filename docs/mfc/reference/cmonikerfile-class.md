---
description: "Learn more about: CMonikerFile Class"
title: "CMonikerFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CMonikerFile", "AFXOLE/CMonikerFile", "AFXOLE/CMonikerFile::CMonikerFile", "AFXOLE/CMonikerFile::Close", "AFXOLE/CMonikerFile::Detach", "AFXOLE/CMonikerFile::GetMoniker", "AFXOLE/CMonikerFile::Open", "AFXOLE/CMonikerFile::CreateBindContext"]
helpviewer_keywords: ["CMonikerFile [MFC], CMonikerFile", "CMonikerFile [MFC], Close", "CMonikerFile [MFC], Detach", "CMonikerFile [MFC], GetMoniker", "CMonikerFile [MFC], Open", "CMonikerFile [MFC], CreateBindContext"]
ms.assetid: 87be5966-f4f7-4235-bce2-1fa39e9417de
---
# CMonikerFile Class

Represents a stream of data ( [IStream](/windows/win32/api/objidl/nn-objidl-istream)) named by an [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker).

## Syntax

```
class CMonikerFile : public COleStreamFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMonikerFile::CMonikerFile](#cmonikerfile)|Constructs a `CMonikerFile` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMonikerFile::Close](#close)|Detaches and releases the stream and releases the moniker.|
|[CMonikerFile::Detach](#detach)|Detaches the `IMoniker` from this `CMonikerFile` object.|
|[CMonikerFile::GetMoniker](#getmoniker)|Returns the current moniker.|
|[CMonikerFile::Open](#open)|Opens the specified file to obtain a stream.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMonikerFile::CreateBindContext](#createbindcontext)|Obtains the bind context or creates a default initialized bind context.|

## Remarks

A moniker contains information much like a pathname to a file. If you have a pointer to a moniker object's `IMoniker` interface, you can get access to the identified file without having any other specific information about where the file is actually located.

Derived from `COleStreamFile`, `CMonikerFile` takes a moniker or a string representation it can make into a moniker and binds to the stream for which the moniker is a name. You can then read and write to that stream. The real purpose of `CMonikerFile` is to provide simple access to `IStream`s named by `IMoniker`s so that you do not have to bind to a stream yourself, yet have `CFile` functionality to the stream.

`CMonikerFile` cannot be used to bind to anything other than a stream. If you want to bind to storage or an object, you must use the `IMoniker` interface directly.

For more information on streams and monikers, see [COleStreamFile](../../mfc/reference/colestreamfile-class.md) in the *MFC Reference* and [IStream](/windows/win32/api/objidl/nn-objidl-istream) and [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) in the Windows SDK.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

`CMonikerFile`

## Requirements

**Header:** afxole.h

## <a name="close"></a> CMonikerFile::Close

Call this function to detach and release the stream and to release the moniker.

```
virtual void Close();
```

### Remarks

Can be called on unopened or already closed streams.

## <a name="cmonikerfile"></a> CMonikerFile::CMonikerFile

Constructs a `CMonikerFile` object.

```
CMonikerFile();
```

## <a name="createbindcontext"></a> CMonikerFile::CreateBindContext

Call this function to create a default initialized bind context.

```
IBindCtx* CreateBindContext(CFileException* pError);
```

### Parameters

*pError*<br/>
A pointer to a file exception. In the event of an error, it will be set to the cause.

### Return Value

A pointer to the bind context [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) to bind with if successful; otherwise NULL. If the instance was opened with an `IBindHost` interface, the bind context is retrieved from the `IBindHost`. If there is no `IBindHost` interface or the interface fails to return a bind context, a bind context is created. For a description of the [IBindHost](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775076\(v=vs.85\)) interface, see the Windows SDK.

### Remarks

A bind context is an object that stores information about a particular moniker binding operation. You can override this function to provide a custom bind context.

## <a name="detach"></a> CMonikerFile::Detach

Call this function to close the stream.

```
BOOL Detach(CFileException* pError = NULL);
```

### Parameters

*pError*<br/>
A pointer to a file exception. In the event of an error, it will be set to the cause.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="getmoniker"></a> CMonikerFile::GetMoniker

Call this function to retrieve a pointer to the current moniker.

```
IMoniker* GetMoniker() const;
```

### Return Value

A pointer to the current moniker interface ( [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker)).

### Remarks

Since `CMonikerFile` is not an interface, the pointer returned does not increment the reference count (through [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref)), and the moniker is released when the `CMonikerFile` object is released. If you want to hold onto the moniker or release it yourself, you must `AddRef` it.

## <a name="open"></a> CMonikerFile::Open

Call this member function to open a file or moniker object.

```
virtual BOOL Open(
    LPCTSTR lpszURL,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    CFileException* pError = NULL);
```

### Parameters

*lpszURL*<br/>
A URL or filename of the file to be opened.

*pError*<br/>
A pointer to a file exception. In the event of an error, it will be set to the cause.

*pMoniker*<br/>
A pointer to the moniker interface `IMoniker` to be used to obtain a stream.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The *lpszURL* parameter cannot be used on a Macintosh. Only the *pMoniker* form of `Open` can be used on a Macintosh.

You can use a URL or a filename for the *lpszURL* parameter. For example:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/cmonikerfile-class_1.cpp)]

\- or -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/cmonikerfile-class_2.cpp)]

## See also

[COleStreamFile Class](../../mfc/reference/colestreamfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)
