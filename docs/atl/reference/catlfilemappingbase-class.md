---
title: "CAtlFileMappingBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlFileMappingBase", "ATLFILE/ATL::CAtlFileMappingBase", "ATLFILE/ATL::CAtlFileMappingBase::CAtlFileMappingBase", "ATLFILE/ATL::CAtlFileMappingBase::CopyFrom", "ATLFILE/ATL::CAtlFileMappingBase::GetData", "ATLFILE/ATL::CAtlFileMappingBase::GetHandle", "ATLFILE/ATL::CAtlFileMappingBase::GetMappingSize", "ATLFILE/ATL::CAtlFileMappingBase::MapFile", "ATLFILE/ATL::CAtlFileMappingBase::MapSharedMem", "ATLFILE/ATL::CAtlFileMappingBase::OpenMapping", "ATLFILE/ATL::CAtlFileMappingBase::Unmap"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlFileMappingBase class"]
ms.assetid: be555723-2790-4f57-a8fb-be4d68460775
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlFileMappingBase Class

This class represents a memory-mapped file.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CAtlFileMappingBase
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase)|The constructor.|
|[CAtlFileMappingBase::~CAtlFileMappingBase](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlFileMappingBase::CopyFrom](#copyfrom)|Call this method to copy from a file-mapping object.|
|[CAtlFileMappingBase::GetData](#getdata)|Call this method to get the data from a file-mapping object.|
|[CAtlFileMappingBase::GetHandle](#gethandle)|Call this method to return the file handle.|
|[CAtlFileMappingBase::GetMappingSize](#getmappingsize)|Call this method to get the mapping size from a file-mapping object.|
|[CAtlFileMappingBase::MapFile](#mapfile)|Call this method to create a file-mapping object.|
|[CAtlFileMappingBase::MapSharedMem](#mapsharedmem)|Call this method to create a file-mapping object that permits full access to all processes.|
|[CAtlFileMappingBase::OpenMapping](#openmapping)|Call this method to return a handle to the file-mapping object.|
|[CAtlFileMappingBase::Unmap](#unmap)|Call this method to unmap a file-mapping object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAtlFileMappingBase::operator =](#operator_eq)|Sets the current file-mapping object to another file-mapping object.|

## Remarks

File mapping is the association of a file's contents with a portion of the virtual address space of a process. This class provides methods for creating file-mapping objects that permit programs to easily access and share data.

For more information, see [File Mapping](/windows/desktop/Memory/file-mapping) in the Windows SDK.

## Requirements

**Header:** atlfile.h

##  <a name="catlfilemappingbase"></a>  CAtlFileMappingBase::CAtlFileMappingBase

The constructor.

```
CAtlFileMappingBase(CAtlFileMappingBase& orig);  
CAtlFileMappingBase() throw();
```

### Parameters

*orig*  
The original file-mapping object to copy to create the new object.

### Remarks

Creates a new file-mapping object, optionally using an existing object. It is still necessary to call [CAtlFileMappingBase::MapFile](#mapfile) to open or create the file-mapping object for a particular file.

### Example

[!code-cpp[NVC_ATL_Utilities#71](../../atl/codesnippet/cpp/catlfilemappingbase-class_1.cpp)]

##  <a name="dtor"></a>  CAtlFileMappingBase::~CAtlFileMappingBase

The destructor.

```
~CAtlFileMappingBase() throw();
```

### Remarks

Frees any resources allocated by the class and calls the [CAtlFileMappingBase::Unmap](#unmap) method.

##  <a name="copyfrom"></a>  CAtlFileMappingBase::CopyFrom

Call this method to copy from a file-mapping object.

```
HRESULT CopyFrom(CAtlFileMappingBase& orig) throw();
```

### Parameters

*orig*  
The original file-mapping object to copy from.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

##  <a name="getdata"></a>  CAtlFileMappingBase::GetData

Call this method to get the data from a file-mapping object.

```
void* GetData() const throw();
```

### Return Value

Returns a pointer to the data.

##  <a name="gethandle"></a>  CAtlFileMappingBase::GetHandle

Call this method to return a handle to the file-mapping object.

```
HANDLE GetHandle() throw ();
```

### Return Value

Returns a handle to the file-mapping object.

##  <a name="getmappingsize"></a>  CAtlFileMappingBase::GetMappingSize

Call this method to get the mapping size from a file-mapping object.

```
SIZE_T GetMappingSize() throw();
```

### Return Value

Returns the mapping size.

### Example

See the example for [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

##  <a name="mapfile"></a>  CAtlFileMappingBase::MapFile

Call this method to open or create a file-mapping object for the specified file.

```
HRESULT MapFile(
    HANDLE hFile,
    SIZE_T nMappingSize = 0,
    ULONGLONG nOffset = 0,
    DWORD dwMappingProtection = PAGE_READONLY,
    DWORD dwViewDesiredAccess = FILE_MAP_READ) throw();
```

### Parameters

*hFile*  
Handle to the file from which to create a mapping object. *hFile* must be valid and cannot be set to INVALID_HANDLE_VALUE.

*nMappingSize*  
The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file identified by *hFile.*

*nOffset*  
The file offset where mapping is to begin. The offset value must be a multiple of the system's memory allocation granularity.

*dwMappingProtection*  
The protection desired for the file view when the file is mapped. See *flProtect* in [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) in the Windows SDK.

*dwViewDesiredAccess*  
Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See *dwDesiredAccess* in [MapViewOfFileEx](https://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

After a file-mapping object has been created, the size of the file must not exceed the size of the file-mapping object; if it does, not all of the file's contents will be available for sharing. For more details, see [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) and [MapViewOfFileEx](https://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.

### Example

See the example for [CAtlFileMappingBase::CAtlFileMappingBase](#catlfilemappingbase).

##  <a name="mapsharedmem"></a>  CAtlFileMappingBase::MapSharedMem

Call this method to create a file-mapping object that permits full access to all processes.

```
HRESULT MapSharedMem(
    SIZE_T nMappingSize,
    LPCTSTR szName,
    BOOL* pbAlreadyExisted = NULL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    DWORD dwMappingProtection = PAGE_READWRITE,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### Parameters

*nMappingSize*  
The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file-mapping object identified by *szName*.

*szName*  
The name of the mapping object.

*pbAlreadyExisted*  
Points to a BOOL value that is set to TRUE if the mapping object already existed.

*lpsa*  
The pointer to a `SECURITY_ATTRIBUTES` structure that determines whether the returned handle can be inherited by child processes. See *lpAttributes* in [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga) in the Windows SDK.

*dwMappingProtection*  
The protection desired for the file view, when the file is mapped. See *flProtect* in `CreateFileMapping` in the Windows SDK.

*dwViewDesiredAccess*  
Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See *dwDesiredAccess* in [MapViewOfFileEx](https://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

`MapShareMem` allows an existing file-mapping object, created by [CreateFileMapping](/windows/desktop/api/winbase/nf-winbase-createfilemappinga), to be shared between processes.

##  <a name="openmapping"></a>  CAtlFileMappingBase::OpenMapping

Call this method to open a named file-mapping object for the specified file.

```
HRESULT OpenMapping(
    LPCTSTR szName,
    SIZE_T nMappingSize,
    ULONGLONG nOffset = 0,
    DWORD dwViewDesiredAccess = FILE_MAP_ALL_ACCESS) throw();
```

### Parameters

*szName*  
The name of the mapping object. If there is an open handle to a file-mapping object by this name and the security descriptor on the mapping object does not conflict with the *dwViewDesiredAccess* parameter, the open operation succeeds.

*nMappingSize*  
The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file-mapping object identified by *szName*.

*nOffset*  
The file offset where mapping is to begin. The offset value must be a multiple of the system's memory allocation granularity.

*dwViewDesiredAccess*  
Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See *dwDesiredAccess* in [MapViewOfFileEx](https://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

In debug builds, an assertion error will occur if the input parameters are invalid.

##  <a name="operator_eq"></a>  CAtlFileMappingBase::operator =

Sets the current file-mapping object to another file-mapping object.

```
CAtlFileMappingBase& operator=(CAtlFileMappingBase& orig);
```

### Parameters

*orig*  
The current file-mapping object.

### Return Value

Returns a reference to the current object.

##  <a name="unmap"></a>  CAtlFileMappingBase::Unmap

Call this method to unmap a file-mapping object.

```
HRESULT Unmap() throw();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

See [UnmapViewOfFile](https://msdn.microsoft.com/library/windows/desktop/aa366882) in the Windows SDK for more details.

## See Also

[CAtlFileMapping Class](../../atl/reference/catlfilemapping-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
