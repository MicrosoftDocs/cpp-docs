---
title: "CAtlTemporaryFile Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 05f0f2a5-94f6-4594-8dae-b114292ff5f9
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CAtlTemporaryFile Class
This class provides methods for the creation and use of a temporary file.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
class CAtlTemporaryFile  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md)|The constructor.|  
|[CAtlTemporaryFile::~CAtlTemporaryFile](../Topic/CAtlTemporaryFile::~CAtlTemporaryFile.md)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTemporaryFile::Close](../Topic/CAtlTemporaryFile::Close.md)|Call this method to close a temporary file and either delete its contents or store them under the specified file name.|  
|[CAtlTemporaryFile::Create](../Topic/CAtlTemporaryFile::Create.md)|Call this method to create a temporary file.|  
|[CAtlTemporaryFile::Flush](../Topic/CAtlTemporaryFile::Flush.md)|Call this method to force any data remaining in the file buffer to be written to the temporary file.|  
|[CAtlTemporaryFile::GetPosition](../Topic/CAtlTemporaryFile::GetPosition.md)|Call this method to get the current file pointer position.|  
|[CAtlTemporaryFile::GetSize](../Topic/CAtlTemporaryFile::GetSize.md)|Call this method to get the size in bytes of the temporary file.|  
|[CAtlTemporaryFile::HandsOff](../Topic/CAtlTemporaryFile::HandsOff.md)|Call this method to disassociate the file from the `CAtlTemporaryFile` object.|  
|[CAtlTemporaryFile::HandsOn](../Topic/CAtlTemporaryFile::HandsOn.md)|Call this method to open an existing temporary file and position the pointer at the end of the file.|  
|[CAtlTemporaryFile::LockRange](../Topic/CAtlTemporaryFile::LockRange.md)|Call this method to lock a region in the file to prevent other processes from accessing it.|  
|[CAtlTemporaryFile::Read](../Topic/CAtlTemporaryFile::Read.md)|Call this method to read data from the temporary file starting at the position indicated by the file pointer.|  
|[CAtlTemporaryFile::Seek](../Topic/CAtlTemporaryFile::Seek.md)|Call this method to move the file pointer of the temporary file.|  
|[CAtlTemporaryFile::SetSize](../Topic/CAtlTemporaryFile::SetSize.md)|Call this method to set the size of the temporary file.|  
|[CAtlTemporaryFile::TempFileName](../Topic/CAtlTemporaryFile::TempFileName.md)|Call this method to return the name of the temporary file.|  
|[CAtlTemporaryFile::UnlockRange](../Topic/CAtlTemporaryFile::UnlockRange.md)|Call this method to unlock a region of the temporary file.|  
|[CAtlTemporaryFile::Write](../Topic/CAtlTemporaryFile::Write.md)|Call this method to write data to the temporary file starting at the position indicated by the file pointer.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTemporaryFile::operator HANDLE](../Topic/CAtlTemporaryFile::operator%20HANDLE.md)|Returns a handle to the temporary file.|  
  
## Remarks  
 `CAtlTemporaryFile` makes it easy to create and use a temporary file. The file is automatically named, opened, closed, and deleted. If the file contents are required after the file is closed, they can be saved to a new file with a specified name.  
  
## Requirements  
 **Header:** atlfile.h  
  
## Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__catltemporaryfile"></a>  CAtlTemporaryFile::CAtlTemporaryFile  
 The constructor.  
  
```  
CAtlTemporaryFile() throw();  
```  
  
### Remarks  
 A file is not actually opened until a call is made to [CAtlTemporaryFile::Create](../Topic/CAtlTemporaryFile::Create.md).  
  
### Example  
 [!CODE [NVC_ATL_Utilities#73](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#73)]  
  
##  <a name="catltemporaryfile___dtorcatltemporaryfile"></a>  CAtlTemporaryFile::~CAtlTemporaryFile  
 The destructor.  
  
```  
~CAtlTemporaryFile() throw();  
```  
  
### Remarks  
 The destructor calls [CAtlTemporaryFile::Close](../Topic/CAtlTemporaryFile::Close.md).  
  
##  <a name="catltemporaryfile__close"></a>  CAtlTemporaryFile::Close  
 Call this method to close a temporary file and either delete its contents or store them under the specified file name.  
  
```  
HRESULT Close(    LPCTSTR szNewName = NULL ) throw();  
```  
  
### Parameters  
 *szNewName*  
 The name for the new file to store the contents of the temporary file in. If this argument is NULL, the contents of the temporary file are deleted.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__create"></a>  CAtlTemporaryFile::Create  
 Call this method to create a temporary file.  
  
```  
HRESULT Create(  
    LPCTSTR pszDir = NULL,  
    DWORD dwDesiredAccess = GENERIC_WRITE) throw();  
```  
  
### Parameters  
 `pszDir`  
 The path for the temporary file. If this is NULL, [GetTempPath](http://msdn.microsoft.com/library/windows/desktop/aa364992) will be called to assign a path.  
  
 `dwDesiredAccess`  
 The desired access. See `dwDesiredAccess` in [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) in the Windows SDK.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__flush"></a>  CAtlTemporaryFile::Flush  
 Call this method to force any data remaining in the file buffer to be written to the temporary file.  
  
```  
HRESULT Flush() throw();  
```  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Similar to [CAtlTemporaryFile::HandsOff](../Topic/CAtlTemporaryFile::HandsOff.md), except that the file is not closed.  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__getposition"></a>  CAtlTemporaryFile::GetPosition  
 Call this method to get the current file pointer position.  
  
```  
HRESULT GetPosition(    ULONGLONG& nPos ) const throw();  
```  
  
### Parameters  
 `nPos`  
 The position in bytes.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 To change the file pointer position, use [CAtlTemporaryFile::Seek](../Topic/CAtlTemporaryFile::Seek.md).  
  
##  <a name="catltemporaryfile__getsize"></a>  CAtlTemporaryFile::GetSize  
 Call this method to get the size in bytes of the temporary file.  
  
```  
HRESULT GetSize(    ULONGLONG& nLen ) const throw();  
```  
  
### Parameters  
 `nLen`  
 The number of bytes in the file.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
##  <a name="catltemporaryfile__handsoff"></a>  CAtlTemporaryFile::HandsOff  
 Call this method to disassociate the file from the `CAtlTemporaryFile` object.  
  
```  
HRESULT HandsOff() throw();  
```  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 `HandsOff` and [CAtlTemporaryFile::HandsOn](../Topic/CAtlTemporaryFile::HandsOn.md) are used to disassociate the file from the object, and reattach it if needed. `HandsOff` will force any data remaining in the file buffer to be written to the temporary file, and then close the file. If you want to close and delete the file permanently, or if you want to close and retain the contents of the file with a given name, use [CAtlTemporaryFile::Close](../Topic/CAtlTemporaryFile::Close.md).  
  
##  <a name="catltemporaryfile__handson"></a>  CAtlTemporaryFile::HandsOn  
 Call this method to open an existing temporary file and position the pointer at the end of the file.  
  
```  
HRESULT HandsOn() throw();  
```  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 [CAtlTemporaryFile::HandsOff](../Topic/CAtlTemporaryFile::HandsOff.md) and `HandsOn` are used to disassociate the file from the object, and reattach it if needed.  
  
##  <a name="catltemporaryfile__lockrange"></a>  CAtlTemporaryFile::LockRange  
 Call this method to lock a region in the temporary file to prevent other processes from accessing it.  
  
```  
HRESULT LockRange(  
    ULONGLONG nPos,  
    ULONGLONG nCount ) throw();  
```  
  
### Parameters  
 `nPos`  
 The position in the file where the lock should begin.  
  
 `nCount`  
 The length of the byte range to be locked.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Locking bytes in a file prevents access to those bytes by other processes. You can lock more than one region of a file, but no overlapping regions are allowed. To successfully unlock a region, use [CAtlTemporaryFile::UnlockRange](../Topic/CAtlTemporaryFile::UnlockRange.md), ensuring the byte range corresponds exactly to the region that was previously locked. `LockRange` does not merge adjacent regions; if two locked regions are adjacent, you must unlock each separately.  
  
##  <a name="catltemporaryfile__operator_handle"></a>  CAtlTemporaryFile::operator HANDLE  
 Returns a handle to the temporary file.  
  
```  
operator HANDLE() throw();  
```  
  
##  <a name="catltemporaryfile__read"></a>  CAtlTemporaryFile::Read  
 Call this method to read data from the temporary file starting at the position indicated by the file pointer.  
  
```  
HRESULT Read(  
    LPVOID pBuffer,  
    DWORD nBufSize,  
    DWORD& nBytesRead ) throw();  
```  
  
### Parameters  
 `pBuffer`  
 Pointer to the buffer that will receive the data read from the file.  
  
 `nBufSize`  
 The buffer size in bytes.  
  
 `nBytesRead`  
 The number of bytes read.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CAtlFile::Read](../Topic/CAtlFile::Read.md). To change the position of the file pointer, call [CAtlTemporaryFile::Seek](../Topic/CAtlTemporaryFile::Seek.md).  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__seek"></a>  CAtlTemporaryFile::Seek  
 Call this method to move the file pointer of the temporary file.  
  
```  
HRESULT Seek(  
    LONGLONG nOffset,  
    DWORD dwFrom = FILE_CURRENT ) throw();  
```  
  
### Parameters  
 `nOffset`  
 The offset, in bytes, from the starting point given by *dwFrom.*  
  
 `dwFrom`  
 The starting point (FILE_BEGIN, FILE_CURRENT, or FILE_END).  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CAtlFile::Seek](../Topic/CAtlFile::Seek.md). To obtain the current file pointer position, call [CAtlTemporaryFile::GetPosition](../Topic/CAtlTemporaryFile::GetPosition.md).  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
##  <a name="catltemporaryfile__setsize"></a>  CAtlTemporaryFile::SetSize  
 Call this method to set the size of the temporary file.  
  
```  
HRESULT SetSize(    ULONGLONG nNewLen ) throw();  
```  
  
### Parameters  
 `nNewLen`  
 The new length of the file in bytes.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CAtlFile::SetSize](../Topic/CAtlFile::SetSize.md). On return, the file pointer is positioned at the end of the file.  
  
##  <a name="catltemporaryfile__tempfilename"></a>  CAtlTemporaryFile::TempFileName  
 Call this method to return the name of temporary file.  
  
```  
LPCTSTR TempFileName() throw();  
```  
  
### Return Value  
 Returns the `LPCTSTR` pointing to the file name.  
  
### Remarks  
 The file name is generated in [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md) with a call to the [GetTempFile](http://msdn.microsoft.com/library/windows/desktop/aa364991)Windows SDK function. The file extension will always be "TFR" for the temporary file.  
  
##  <a name="catltemporaryfile__unlockrange"></a>  CAtlTemporaryFile::UnlockRange  
 Call this method to unlock a region of the temporary file.  
  
```  
HRESULT UnlockRange(  
    ULONGLONG nPos,  
    ULONGLONG nCount ) throw();  
```  
  
### Parameters  
 `nPos`  
 The position in the file where the unlock should begin.  
  
 `nCount`  
 The length of the byte range to be unlocked.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CAtlFile::UnlockRange](../Topic/CAtlFile::UnlockRange.md).  
  
##  <a name="catltemporaryfile__write"></a>  CAtlTemporaryFile::Write  
 Call this method to write data to the temporary file starting at the position indicated by the file pointer.  
  
```  
HRESULT Write(  
    LPCVOID pBuffer,  
    DWORD nBufSize,  
    DWORD* pnBytesWritten = NULL ) throw();  
```  
  
### Parameters  
 `pBuffer`  
 The buffer containing the data to be written to the file.  
  
 `nBufSize`  
 The number of bytes to be transferred from the buffer.  
  
 `pnBytesWritten`  
 The number of bytes written.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 Calls [CAtlFile::Write](../Topic/CAtlFile::Write.md).  
  
### Example  
 See the example for [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CAtlFile Class](../VS_visualcpp/CAtlFile-Class.md)