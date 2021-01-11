---
description: "Learn more about: CAtlTemporaryFile Class"
title: "CAtlTemporaryFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlTemporaryFile", "ATLFILE/ATL::CAtlTemporaryFile", "ATLFILE/ATL::CAtlTemporaryFile::CAtlTemporaryFile", "ATLFILE/ATL::CAtlTemporaryFile::Close", "ATLFILE/ATL::CAtlTemporaryFile::Create", "ATLFILE/ATL::CAtlTemporaryFile::Flush", "ATLFILE/ATL::CAtlTemporaryFile::GetPosition", "ATLFILE/ATL::CAtlTemporaryFile::GetSize", "ATLFILE/ATL::CAtlTemporaryFile::HandsOff", "ATLFILE/ATL::CAtlTemporaryFile::HandsOn", "ATLFILE/ATL::CAtlTemporaryFile::LockRange", "ATLFILE/ATL::CAtlTemporaryFile::Read", "ATLFILE/ATL::CAtlTemporaryFile::Seek", "ATLFILE/ATL::CAtlTemporaryFile::SetSize", "ATLFILE/ATL::CAtlTemporaryFile::TempFileName", "ATLFILE/ATL::CAtlTemporaryFile::UnlockRange", "ATLFILE/ATL::CAtlTemporaryFile::Write"]
helpviewer_keywords: ["CAtlTemporaryFile class"]
ms.assetid: 05f0f2a5-94f6-4594-8dae-b114292ff5f9
---
# CAtlTemporaryFile Class

This class provides methods for the creation and use of a temporary file.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAtlTemporaryFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile)|The constructor.|
|[CAtlTemporaryFile::~CAtlTemporaryFile](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlTemporaryFile::Close](#close)|Call this method to close a temporary file and either delete its contents or store them under the specified file name.|
|[CAtlTemporaryFile::Create](#create)|Call this method to create a temporary file.|
|[CAtlTemporaryFile::Flush](#flush)|Call this method to force any data remaining in the file buffer to be written to the temporary file.|
|[CAtlTemporaryFile::GetPosition](#getposition)|Call this method to get the current file pointer position.|
|[CAtlTemporaryFile::GetSize](#getsize)|Call this method to get the size in bytes of the temporary file.|
|[CAtlTemporaryFile::HandsOff](#handsoff)|Call this method to disassociate the file from the `CAtlTemporaryFile` object.|
|[CAtlTemporaryFile::HandsOn](#handson)|Call this method to open an existing temporary file and position the pointer at the end of the file.|
|[CAtlTemporaryFile::LockRange](#lockrange)|Call this method to lock a region in the file to prevent other processes from accessing it.|
|[CAtlTemporaryFile::Read](#read)|Call this method to read data from the temporary file starting at the position indicated by the file pointer.|
|[CAtlTemporaryFile::Seek](#seek)|Call this method to move the file pointer of the temporary file.|
|[CAtlTemporaryFile::SetSize](#setsize)|Call this method to set the size of the temporary file.|
|[CAtlTemporaryFile::TempFileName](#tempfilename)|Call this method to return the name of the temporary file.|
|[CAtlTemporaryFile::UnlockRange](#unlockrange)|Call this method to unlock a region of the temporary file.|
|[CAtlTemporaryFile::Write](#write)|Call this method to write data to the temporary file starting at the position indicated by the file pointer.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAtlTemporaryFile::operator HANDLE](#operator_handle)|Returns a handle to the temporary file.|

## Remarks

`CAtlTemporaryFile` makes it easy to create and use a temporary file. The file is automatically named, opened, closed, and deleted. If the file contents are required after the file is closed, they can be saved to a new file with a specified name.

## Requirements

**Header:** atlfile.h

## Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="catltemporaryfile"></a> CAtlTemporaryFile::CAtlTemporaryFile

The constructor.

```cpp
CAtlTemporaryFile() throw();
```

### Remarks

A file is not actually opened until a call is made to [CAtlTemporaryFile::Create](#create).

### Example

[!code-cpp[NVC_ATL_Utilities#73](../../atl/codesnippet/cpp/catltemporaryfile-class_1.cpp)]

## <a name="dtor"></a> CAtlTemporaryFile::~CAtlTemporaryFile

The destructor.

```cpp
~CAtlTemporaryFile() throw();
```

### Remarks

The destructor calls [CAtlTemporaryFile::Close](#close).

## <a name="close"></a> CAtlTemporaryFile::Close

Call this method to close a temporary file and either delete its contents or store them under the specified file name.

```cpp
HRESULT Close(LPCTSTR szNewName = NULL) throw();
```

### Parameters

*szNewName*<br/>
The name for the new file to store the contents of the temporary file in. If this argument is NULL, the contents of the temporary file are deleted.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="create"></a> CAtlTemporaryFile::Create

Call this method to create a temporary file.

```cpp
HRESULT Create(LPCTSTR pszDir = NULL, DWORD dwDesiredAccess = GENERIC_WRITE) throw();
```

### Parameters

*pszDir*<br/>
The path for the temporary file. If this is NULL, [GetTempPath](/windows/win32/api/fileapi/nf-fileapi-gettemppathw) will be called to assign a path.

*dwDesiredAccess*<br/>
The desired access. See *dwDesiredAccess* in [CreateFile](/windows/win32/api/fileapi/nf-fileapi-createfilew) in the Windows SDK.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="flush"></a> CAtlTemporaryFile::Flush

Call this method to force any data remaining in the file buffer to be written to the temporary file.

```cpp
HRESULT Flush() throw();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Similar to [CAtlTemporaryFile::HandsOff](#handsoff), except that the file is not closed.

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="getposition"></a> CAtlTemporaryFile::GetPosition

Call this method to get the current file pointer position.

```cpp
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### Parameters

*nPos*<br/>
The position in bytes.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

To change the file pointer position, use [CAtlTemporaryFile::Seek](#seek).

## <a name="getsize"></a> CAtlTemporaryFile::GetSize

Call this method to get the size in bytes of the temporary file.

```cpp
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### Parameters

*nLen*<br/>
The number of bytes in the file.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="handsoff"></a> CAtlTemporaryFile::HandsOff

Call this method to disassociate the file from the `CAtlTemporaryFile` object.

```cpp
HRESULT HandsOff() throw();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

`HandsOff` and [CAtlTemporaryFile::HandsOn](#handson) are used to disassociate the file from the object, and reattach it if needed. `HandsOff` will force any data remaining in the file buffer to be written to the temporary file, and then close the file. If you want to close and delete the file permanently, or if you want to close and retain the contents of the file with a given name, use [CAtlTemporaryFile::Close](#close).

## <a name="handson"></a> CAtlTemporaryFile::HandsOn

Call this method to open an existing temporary file and position the pointer at the end of the file.

```cpp
HRESULT HandsOn() throw();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

[CAtlTemporaryFile::HandsOff](#handsoff) and `HandsOn` are used to disassociate the file from the object, and reattach it if needed.

## <a name="lockrange"></a> CAtlTemporaryFile::LockRange

Call this method to lock a region in the temporary file to prevent other processes from accessing it.

```cpp
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### Parameters

*nPos*<br/>
The position in the file where the lock should begin.

*nCount*<br/>
The length of the byte range to be locked.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Locking bytes in a file prevents access to those bytes by other processes. You can lock more than one region of a file, but no overlapping regions are allowed. To successfully unlock a region, use [CAtlTemporaryFile::UnlockRange](#unlockrange), ensuring the byte range corresponds exactly to the region that was previously locked. `LockRange` does not merge adjacent regions; if two locked regions are adjacent, you must unlock each separately.

## <a name="operator_handle"></a> CAtlTemporaryFile::operator HANDLE

Returns a handle to the temporary file.

```cpp
operator HANDLE() throw();
```

## <a name="read"></a> CAtlTemporaryFile::Read

Call this method to read data from the temporary file starting at the position indicated by the file pointer.

```cpp
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();
```

### Parameters

*pBuffer*<br/>
Pointer to the buffer that will receive the data read from the file.

*nBufSize*<br/>
The buffer size in bytes.

*nBytesRead*<br/>
The number of bytes read.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CAtlFile::Read](../../atl/reference/catlfile-class.md#read). To change the position of the file pointer, call [CAtlTemporaryFile::Seek](#seek).

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="seek"></a> CAtlTemporaryFile::Seek

Call this method to move the file pointer of the temporary file.

```cpp
HRESULT Seek(LONGLONG nOffset, DWORD dwFrom = FILE_CURRENT) throw();
```

### Parameters

*nOffset*<br/>
The offset, in bytes, from the starting point given by *dwFrom.*

*dwFrom*<br/>
The starting point (FILE_BEGIN, FILE_CURRENT, or FILE_END).

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CAtlFile::Seek](../../atl/reference/catlfile-class.md#seek). To obtain the current file pointer position, call [CAtlTemporaryFile::GetPosition](#getposition).

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## <a name="setsize"></a> CAtlTemporaryFile::SetSize

Call this method to set the size of the temporary file.

```cpp
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### Parameters

*nNewLen*<br/>
The new length of the file in bytes.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CAtlFile::SetSize](../../atl/reference/catlfile-class.md#setsize). On return, the file pointer is positioned at the end of the file.

## <a name="tempfilename"></a> CAtlTemporaryFile::TempFileName

Call this method to return the name of temporary file.

```cpp
LPCTSTR TempFileName() throw();
```

### Return Value

Returns the LPCTSTR pointing to the file name.

### Remarks

The file name is generated in [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile) with a call to the [GetTempFile](/windows/win32/api/fileapi/nf-fileapi-gettempfilenamew)Windows SDK function. The file extension will always be "TFR" for the temporary file.

## <a name="unlockrange"></a> CAtlTemporaryFile::UnlockRange

Call this method to unlock a region of the temporary file.

```cpp
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### Parameters

*nPos*<br/>
The position in the file where the unlock should begin.

*nCount*<br/>
The length of the byte range to be unlocked.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CAtlFile::UnlockRange](../../atl/reference/catlfile-class.md#unlockrange).

## <a name="write"></a> CAtlTemporaryFile::Write

Call this method to write data to the temporary file starting at the position indicated by the file pointer.

```cpp
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();
```

### Parameters

*pBuffer*<br/>
The buffer containing the data to be written to the file.

*nBufSize*<br/>
The number of bytes to be transferred from the buffer.

*pnBytesWritten*<br/>
The number of bytes written.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CAtlFile::Write](../../atl/reference/catlfile-class.md#write).

### Example

See the example for [CAtlTemporaryFile::CAtlTemporaryFile](#catltemporaryfile).

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[CAtlFile Class](../../atl/reference/catlfile-class.md)
