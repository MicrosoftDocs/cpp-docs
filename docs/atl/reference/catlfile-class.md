---
title: "CAtlFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlFile", "ATLFILE/ATL::CAtlFile", "ATLFILE/ATL::CAtlFile::CAtlFile", "ATLFILE/ATL::CAtlFile::Create", "ATLFILE/ATL::CAtlFile::Flush", "ATLFILE/ATL::CAtlFile::GetOverlappedResult", "ATLFILE/ATL::CAtlFile::GetPosition", "ATLFILE/ATL::CAtlFile::GetSize", "ATLFILE/ATL::CAtlFile::LockRange", "ATLFILE/ATL::CAtlFile::Read", "ATLFILE/ATL::CAtlFile::Seek", "ATLFILE/ATL::CAtlFile::SetSize", "ATLFILE/ATL::CAtlFile::UnlockRange", "ATLFILE/ATL::CAtlFile::Write", "ATLFILE/ATL::CAtlFile::m_pTM"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlFile class"]
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlFile Class

This class provides a thin wrapper around the Windows file-handling API.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CAtlFile : public CHandle
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlFile::CAtlFile](#catlfile)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlFile::Create](#create)|Call this method to create or open a file.|
|[CAtlFile::Flush](#flush)|Call this method to clear the buffers for the file and cause all buffered data to be written to the file.|
|[CAtlFile::GetOverlappedResult](#getoverlappedresult)|Call this method to get the results of an overlapped operation on the file.|
|[CAtlFile::GetPosition](#getposition)|Call this method to get the current file pointer position from the file.|
|[CAtlFile::GetSize](#getsize)|Call this method to get the size in bytes of the file.|
|[CAtlFile::LockRange](#lockrange)|Call this method to lock a region in the file to prevent other processes from accessing it.|
|[CAtlFile::Read](#read)|Call this method to read data from a file starting at the position indicated by the file pointer.|
|[CAtlFile::Seek](#seek)|Call this method to move the file pointer of the file.|
|[CAtlFile::SetSize](#setsize)|Call this method to set the size of the file.|
|[CAtlFile::UnlockRange](#unlockrange)|Call this method to unlock a region of the file.|
|[CAtlFile::Write](#write)|Call this method to write data to the file starting at the position indicated by the file pointer.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAtlFile::m_pTM](#m_ptm)|Pointer to `CAtlTransactionManager` object|

## Remarks

Use this class when file-handling needs are relatively simple, but more abstraction than the Windows API provides is required, without including MFC dependencies.

## Inheritance Hierarchy

[CHandle](../../atl/reference/chandle-class.md)

`CAtlFile`

## Requirements

**Header:** atlfile.h

##  <a name="catlfile"></a>  CAtlFile::CAtlFile

The constructor.

```
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE hFile) throw();
```

### Parameters

*file*  
The file object.

*hFile*  
The file handle.

*pTM*  
Pointer to CAtlTransactionManager object

### Remarks

The copy constructor transfers ownership of the file handle from the original `CAtlFile` object to the newly constructed object.

##  <a name="create"></a>  CAtlFile::Create

Call this method to create or open a file.

```
HRESULT Create(
    LPCTSTR szFilename,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    HANDLE hTemplateFile = NULL) throw();
```

### Parameters

*szFilename*  
The file name.

*dwDesiredAccess*  
The desired access. See *dwDesiredAccess* in [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea) in the Windows SDK.

*dwShareMode*  
The share mode. See *dwShareMode* in `CreateFile`.

*dwCreationDisposition*  
The creation disposition. See *dwCreationDisposition* in `CreateFile`.

*dwFlagsAndAttributes*  
The flags and attributes. See *dwFlagsAndAttributes* in `CreateFile`.

*lpsa*  
The security attributes. See *lpSecurityAttributes* in `CreateFile`.

*hTemplateFile*  
The template file. See *hTemplateFile* in `CreateFile`.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea) to create or open the file.

##  <a name="flush"></a>  CAtlFile::Flush

Call this method to clear the buffers for the file and cause all buffered data to be written to the file.

```
HRESULT Flush() throw();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [FlushFileBuffers](/windows/desktop/api/fileapi/nf-fileapi-flushfilebuffers) to flush buffered data to the file.

##  <a name="getoverlappedresult"></a>  CAtlFile::GetOverlappedResult

Call this method to get the results of an overlapped operation on the file.

```
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```

### Parameters

*pOverlapped*  
The overlapped structure. See *lpOverlapped* in [GetOverlappedResult](/windows/desktop/api/ioapiset/nf-ioapiset-getoverlappedresult) in the Windows SDK.

*dwBytesTransferred*  
The bytes transferred. See *lpNumberOfBytesTransferred* in `GetOverlappedResult`.

*bWait*  
The wait option. See *bWait* in `GetOverlappedResult`.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [GetOverlappedResult](/windows/desktop/api/ioapiset/nf-ioapiset-getoverlappedresult) to get the results of an overlapped operation on the file.

##  <a name="getposition"></a>  CAtlFile::GetPosition

Call this method to get the current file pointer position.

```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```

### Parameters

*nPos*  
The position in bytes.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) to get the current file pointer position.

##  <a name="getsize"></a>  CAtlFile::GetSize

Call this method to get the size in bytes of the file.

```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```

### Parameters

*nLen*  
The number of bytes in the file.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [GetFileSize](/windows/desktop/api/fileapi/nf-fileapi-getfilesize) to get the size in bytes of the file.

##  <a name="lockrange"></a>  CAtlFile::LockRange

Call this method to lock a region in the file to prevent other processes from accessing it.

```
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### Parameters

*nPos*  
The position in the file where the lock should begin.

*nCount*  
The length of the byte range to be locked.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [LockFile](/windows/desktop/api/fileapi/nf-fileapi-lockfile) to lock a region in the file. Locking bytes in a file prevents access to those bytes by other processes. You can lock more than one region of a file, but no overlapping regions are allowed. When you unlock a region, using [CAtlFile::UnlockRange](#unlockrange), the byte range must correspond exactly to the region that was previously locked. `LockRange` does not merge adjacent regions; if two locked regions are adjacent, you must unlock each separately.

##  <a name="m_ptm"></a>  CAtlFile::m_pTM

Pointer to a `CAtlTransactionManager` object.

```
CAtlTransactionManager* m_pTM;
```

### Remarks

##  <a name="read"></a>  CAtlFile::Read

Call this method to read data from a file starting at the position indicated by the file pointer.

```
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();
```

### Parameters

*pBuffer*  
Pointer to the buffer that will receive the data read from the file.

*nBufSize*  
The buffer size in bytes.

*nBytesRead*  
The number of bytes read.

*pOverlapped*  
The overlapped structure. See *lpOverlapped* in [ReadFile](/windows/desktop/api/fileapi/nf-fileapi-readfile) in the Windows SDK.

*pfnCompletionRoutine*  
The completion routine. See *lpCompletionRoutine* in [ReadFileEx](/windows/desktop/api/fileapi/nf-fileapi-readfileex) in the Windows SDK.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The first three forms call [ReadFile](/windows/desktop/api/fileapi/nf-fileapi-readfile), the last [ReadFileEx](/windows/desktop/api/fileapi/nf-fileapi-readfileex) to read data from the file. Use [CAtlFile::Seek](#seek) to move the file pointer.

##  <a name="seek"></a>  CAtlFile::Seek

Call this method to move the file pointer of the file.

```
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```

### Parameters

*nOffset*  
The offset from the starting point given by *dwFrom*.

*dwFrom*  
The starting point (FILE_BEGIN, FILE_CURRENT, or FILE_END).

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) to move the file pointer.

##  <a name="setsize"></a>  CAtlFile::SetSize

Call this method to set the size of the file.

```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```

### Parameters

*nNewLen*  
The new length of the file in bytes.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [SetFilePointer](/windows/desktop/api/fileapi/nf-fileapi-setfilepointer) and [SetEndOfFile](/windows/desktop/api/fileapi/nf-fileapi-setendoffile) to set the size of the file. On return, the file pointer is positioned at the end of the file.

##  <a name="unlockrange"></a>  CAtlFile::UnlockRange

Call this method to unlock a region of the file.

```
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```

### Parameters

*nPos*  
The position in the file where the unlock should begin.

*nCount*  
The length of the byte range to be unlocked.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Calls [UnlockFile](/windows/desktop/api/fileapi/nf-fileapi-unlockfile) to unlock a region of the file.

##  <a name="write"></a>  CAtlFile::Write

Call this method to write data to the file starting at the position indicated by the file pointer.

```
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();
```

### Parameters

*pBuffer*  
The buffer containing the data to be written to the file.

*nBufSize*  
The number of bytes to be transferred from the buffer.

*pOverlapped*  
The overlapped structure. See *lpOverlapped* in [WriteFile](/windows/desktop/api/fileapi/nf-fileapi-writefile) in the Windows SDK.

*pfnCompletionRoutine*  
The completion routine. See *lpCompletionRoutine* in [WriteFileEx](/windows/desktop/api/fileapi/nf-fileapi-writefileex) in the Windows SDK.

*pnBytesWritten*  
The bytes written.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The first three forms call [WriteFile](/windows/desktop/api/fileapi/nf-fileapi-writefile), the last calls [WriteFileEx](/windows/desktop/api/fileapi/nf-fileapi-writefileex) to write data to the file. Use [CAtlFile::Seek](#seek) to move the file pointer.

## See Also

[Marquee Sample](../../visual-cpp-samples.md)   
[Class Overview](../../atl/atl-class-overview.md)   
[CHandle Class](../../atl/reference/chandle-class.md)
