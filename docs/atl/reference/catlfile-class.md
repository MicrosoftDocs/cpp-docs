---
title: "CAtlFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAtlFile"
  - "ATL::CAtlFile"
  - "ATL.CAtlFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlFile class"
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
caps.latest.revision: 23
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
# CAtlFile Class
This class provides a thin wrapper around the Windows file-handling API.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAtlFile :
    public CHandle
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFile::CAtlFile](#catlfile__catlfile)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFile::Create](#catlfile__create)|Call this method to create or open a file.|  
|[CAtlFile::Flush](#catlfile__flush)|Call this method to clear the buffers for the file and cause all buffered data to be written to the file.|  
|[CAtlFile::GetOverlappedResult](#catlfile__getoverlappedresult)|Call this method to get the results of an overlapped operation on the file.|  
|[CAtlFile::GetPosition](#catlfile__getposition)|Call this method to get the current file pointer position from the file.|  
|[CAtlFile::GetSize](#catlfile__getsize)|Call this method to get the size in bytes of the file.|  
|[CAtlFile::LockRange](#catlfile__lockrange)|Call this method to lock a region in the file to prevent other processes from accessing it.|  
|[CAtlFile::Read](#catlfile__read)|Call this method to read data from a file starting at the position indicated by the file pointer.|  
|[CAtlFile::Seek](#catlfile__seek)|Call this method to move the file pointer of the file.|  
|[CAtlFile::SetSize](#catlfile__setsize)|Call this method to set the size of the file.|  
|[CAtlFile::UnlockRange](#catlfile__unlockrange)|Call this method to unlock a region of the file.|  
|[CAtlFile::Write](#catlfile__write)|Call this method to write data to the file starting at the position indicated by the file pointer.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFile::m_pTM](#catlfile__m_ptm)|Pointer to `CAtlTransactionManager` object|  
  
## Remarks  
 Use this class when file-handling needs are relatively simple, but more abstraction than the Windows API provides is required, without including MFC dependencies.  
  
## Inheritance Hierarchy  
 [CHandle](../../atl/reference/chandle-class.md)  
  
 `CAtlFile`  
  
## Requirements  
 **Header:** atlfile.h  
  
##  <a name="catlfile__catlfile"></a>  CAtlFile::CAtlFile  
 The constructor.  
  
```
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE   hFile) throw();
```  
  
### Parameters  
 `file`  
 The file object.  
  
 `hFile`  
 The file handle.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 The copy constructor transfers ownership of the file handle from the original `CAtlFile` object to the newly constructed object.  
  
##  <a name="catlfile__create"></a>  CAtlFile::Create  
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
  
 `dwDesiredAccess`  
 The desired access. See `dwDesiredAccess` in [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwShareMode`  
 The share mode. See `dwShareMode` in **CreateFile**.  
  
 `dwCreationDisposition`  
 The creation disposition. See `dwCreationDisposition` in **CreateFile**.  
  
 `dwFlagsAndAttributes`  
 The flags and attributes. See `dwFlagsAndAttributes` in **CreateFile**.  
  
 `lpsa`  
 The security attributes. See *lpSecurityAttributes* in **CreateFile**.  
  
 `hTemplateFile`  
 The template file. See `hTemplateFile` in **CreateFile**.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) to create or open the file.  
  
##  <a name="catlfile__flush"></a>  CAtlFile::Flush  
 Call this method to clear the buffers for the file and cause all buffered data to be written to the file.  
  
```
HRESULT Flush() throw();
```  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [FlushFileBuffers](http://msdn.microsoft.com/library/windows/desktop/aa364439) to flush buffered data to the file.  
  
##  <a name="catlfile__getoverlappedresult"></a>  CAtlFile::GetOverlappedResult  
 Call this method to get the results of an overlapped operation on the file.  
  
```
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```  
  
### Parameters  
 `pOverlapped`  
 The overlapped structure. See `lpOverlapped` in [GetOverlappedResult](http://msdn.microsoft.com/library/windows/desktop/ms683209) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *dwBytesTransferred*  
 The bytes transferred. See *lpNumberOfBytesTransferred* in `GetOverlappedResult`.  
  
 `bWait`  
 The wait option. See `bWait` in `GetOverlappedResult`.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [GetOverlappedResult](http://msdn.microsoft.com/library/windows/desktop/ms683209) to get the results of an overlapped operation on the file.  
  
##  <a name="catlfile__getposition"></a>  CAtlFile::GetPosition  
 Call this method to get the current file pointer position.  
  
```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```  
  
### Parameters  
 `nPos`  
 The position in bytes.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) to get the current file pointer position.  
  
##  <a name="catlfile__getsize"></a>  CAtlFile::GetSize  
 Call this method to get the size in bytes of the file.  
  
```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```  
  
### Parameters  
 `nLen`  
 The number of bytes in the file.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [GetFileSize](http://msdn.microsoft.com/library/windows/desktop/aa364955) to get the size in bytes of the file.  
  
##  <a name="catlfile__lockrange"></a>  CAtlFile::LockRange  
 Call this method to lock a region in the file to prevent other processes from accessing it.  
  
```
HRESULT LockRange(
    ULONGLONG nPos,
    ULONGLONG nCount) throw();
```  
  
### Parameters  
 `nPos`  
 The position in the file where the lock should begin.  
  
 `nCount`  
 The length of the byte range to be locked.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [LockFile](http://msdn.microsoft.com/library/windows/desktop/aa365202) to lock a region in the file. Locking bytes in a file prevents access to those bytes by other processes. You can lock more than one region of a file, but no overlapping regions are allowed. When you unlock a region, using [CAtlFile::UnlockRange](#catlfile__unlockrange), the byte range must correspond exactly to the region that was previously locked. `LockRange` does not merge adjacent regions; if two locked regions are adjacent, you must unlock each separately.  
  
##  <a name="catlfile__m_ptm"></a>  CAtlFile::m_pTM  
 Pointer to a `CAtlTransactionManager` object.  
  
```
CAtlTransactionManager* m_pTM;
```  
  
### Remarks  
  
##  <a name="catlfile__read"></a>  CAtlFile::Read  
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
 `pBuffer`  
 Pointer to the buffer that will receive the data read from the file.  
  
 `nBufSize`  
 The buffer size in bytes.  
  
 `nBytesRead`  
 The number of bytes read.  
  
 `pOverlapped`  
 The overlapped structure. See `lpOverlapped` in [ReadFile](http://msdn.microsoft.com/library/windows/desktop/aa365467) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pfnCompletionRoutine`  
 The completion routine. See *lpCompletionRoutine* in [ReadFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365468) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 The first three forms call [ReadFile](http://msdn.microsoft.com/library/windows/desktop/aa365467), the last [ReadFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365468) to read data from the file. Use [CAtlFile::Seek](#catlfile__seek) to move the file pointer.  
  
##  <a name="catlfile__seek"></a>  CAtlFile::Seek  
 Call this method to move the file pointer of the file.  
  
```
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```  
  
### Parameters  
 `nOffset`  
 The offset from the starting point given by `dwFrom`.  
  
 `dwFrom`  
 The starting point (FILE_BEGIN, FILE_CURRENT, or FILE_END).  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) to move the file pointer.  
  
##  <a name="catlfile__setsize"></a>  CAtlFile::SetSize  
 Call this method to set the size of the file.  
  
```
HRESULT SetSize(ULONGLONG   nNewLen) throw();
```  
  
### Parameters  
 `nNewLen`  
 The new length of the file in bytes.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) and [SetEndOfFile](http://msdn.microsoft.com/library/windows/desktop/aa365531) to set the size of the file. On return, the file pointer is positioned at the end of the file.  
  
##  <a name="catlfile__unlockrange"></a>  CAtlFile::UnlockRange  
 Call this method to unlock a region of the file.  
  
```
HRESULT UnlockRange(
    ULONGLONG nPos,
    ULONGLONG nCount) throw();
```  
  
### Parameters  
 `nPos`  
 The position in the file where the unlock should begin.  
  
 `nCount`  
 The length of the byte range to be unlocked.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [UnlockFile](http://msdn.microsoft.com/library/windows/desktop/aa365715) to unlock a region of the file.  
  
##  <a name="catlfile__write"></a>  CAtlFile::Write  
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
 `pBuffer`  
 The buffer containing the data to be written to the file.  
  
 `nBufSize`  
 The number of bytes to be transferred from the buffer.  
  
 `pOverlapped`  
 The overlapped structure. See `lpOverlapped` in [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pfnCompletionRoutine`  
 The completion routine. See *lpCompletionRoutine* in [WriteFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365748) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pnBytesWritten`  
 The bytes written.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 The first three forms call [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747), the last calls [WriteFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365748) to write data to the file. Use [CAtlFile::Seek](#catlfile__seek) to move the file pointer.  
  
## See Also  
 [Marquee Sample](../../visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CHandle Class](../../atl/reference/chandle-class.md)
