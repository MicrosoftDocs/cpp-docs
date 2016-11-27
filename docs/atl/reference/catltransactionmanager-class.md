---
title: "CAtlTransactionManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAtlTransactionManager"
  - "atltransactionmanager/ATL::CAtlTransactionManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlTransactionManager class"
ms.assetid: b01732dc-1d16-4b42-bfac-b137fca2b740
caps.latest.revision: 25
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
# CAtlTransactionManager Class
CAtlTransactionManager class provides a wrapper to Kernel Transaction Manager (KTM) functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAtlTransactionManager;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTransactionManager::~CAtlTransactionManager](#catltransactionmanager___dtorcatltransactionmanager)|CAtlTransactionManager destructor.|  
|[CAtlTransactionManager::CAtlTransactionManager](#catltransactionmanager__catltransactionmanager)|CAtlTransactionManager constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTransactionManager::Close](#catltransactionmanager__close)|Closes one the transaction handle.|  
|[CAtlTransactionManager::Commit](#catltransactionmanager__commit)|Requests that the transaction be committed.|  
|[CAtlTransactionManager::Create](#catltransactionmanager__create)|Creates the transaction handle.|  
|[CAtlTransactionManager::CreateFile](#catltransactionmanager__createfile)|Creates or opens a file, file stream, or directory as a transacted operation.|  
|[CAtlTransactionManager::DeleteFile](#catltransactionmanager__deletefile)|Deletes an existing file as a transacted operation.|  
|[CAtlTransactionManager::FindFirstFile](#catltransactionmanager__findfirstfile)|Searches a directory for a file or subdirectory as a transacted operation.|  
|[CAtlTransactionManager::GetFileAttributes](#catltransactionmanager__getfileattributes)|Retrieves file system attributes for a specified file or directory as a transacted operation.|  
|[CAtlTransactionManager::GetFileAttributesEx](#catltransactionmanager__getfileattributesex)|Retrieves file system attributes for a specified file or directory as a transacted operation.|  
|[CAtlTransactionManager::GetHandle](#catltransactionmanager__gethandle)|Returns the transaction handle.|  
|[CAtlTransactionManager::IsFallback](#catltransactionmanager__isfallback)|Determines whether the fallback calls are enabled.|  
|[CAtlTransactionManager::MoveFile](#catltransactionmanager__movefile)|Moves an existing file or a directory, including its children, as a transacted operation.|  
|[CAtlTransactionManager::RegCreateKeyEx](#catltransactionmanager__regcreatekeyex)|Creates the specified registry key and associates it with a transaction. If the key already exists, the function opens it.|  
|[CAtlTransactionManager::RegDeleteKey](#catltransactionmanager__regdeletekey)|Deletes a subkey and its values from the specified platform-specific view of the registry as a transacted operation.|  
|[CAtlTransactionManager::RegOpenKeyEx](#catltransactionmanager__regopenkeyex)|Opens the specified registry key and associates it with a transaction.|  
|[CAtlTransactionManager::Rollback](#catltransactionmanager__rollback)|Requests that the transaction be rolled back.|  
|[CAtlTransactionManager::SetFileAttributes](#catltransactionmanager__setfileattributes)|Sets the attributes for a file or directory as a transacted operation.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlTransactionManager::m_bFallback](#catltransactionmanager__m_bfallback)|`TRUE` if the fallback is supported; `FALSE` otherwise.|  
|[CAtlTransactionManager::m_hTransaction](#catltransactionmanager__m_htransaction)|The transaction handle.|  
  
## Remarks  
  
## Inheritance Hierarchy  
 [ATL::CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)  
  
## Requirements  
 **Header:** atltransactionmanager.h  
  
##  <a name="catltransactionmanager___dtorcatltransactionmanager"></a>  CAtlTransactionManager::~CAtlTransactionManager  
 CAtlTransactionManager destructor.  
  
```
virtual ~CAtlTransactionManager();
```  
  
### Remarks  
 In normal processing, the transaction is automatically committed and closed. If the destructor is called during an exception unwind, the transaction is rolled back and closed.  
  
##  <a name="catltransactionmanager__catltransactionmanager"></a>  CAtlTransactionManager::CAtlTransactionManager  
 CAtlTransactionManager constructor.  
  
```
CAtlTransactionManager(BOOL bFallback = TRUE,  BOOL bAutoCreateTransaction = TRUE);
```  
  
### Parameters  
 `bFallback`  
 `TRUE` indicates support fallback. If transacted function fails, the class automatically calls the "non-transacted" function. `FALSE` indicates no "fallback" calls.  
  
 `bAutoCreateTransaction`  
 `TRUE` indicates that the transaction handler is created automatically in the constructor. `FALSE` indicates that it is not.  
  
### Remarks  
  
##  <a name="catltransactionmanager__close"></a>  CAtlTransactionManager::Close  
 Closes the transaction handle.  
  
```
inline BOOL CAtlTransactionManager::Close();
```  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 This wrapper calls the `CloseHandle` function. The method is automatically called in the destructor.  
  
##  <a name="catltransactionmanager__commit"></a>  CAtlTransactionManager::Commit  
 Requests that the transaction be committed.  
  
```
inline BOOL CAtlTransactionManager::Commit();
```  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 This wrapper calls the `CommitTransaction` function. The method is automatically called in the destructor.  
  
##  <a name="catltransactionmanager__create"></a>  CAtlTransactionManager::Create  
 Creates the transaction handle.  
  
```
inline BOOL CAtlTransactionManager::Create();
```  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 This wrapper calls the `CreateTransaction` function. Check it for  
  
##  <a name="catltransactionmanager__createfile"></a>  CAtlTransactionManager::CreateFile  
 Creates or opens a file, file stream, or directory as a transacted operation.  
  
```
inline HANDLE CAtlTransactionManager::CreateFile(LPCTSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile);
```  
  
### Parameters  
 `lpFileName`  
 The name of an object to be created or opened.  
  
 `dwDesiredAccess`  
 The access to the object, which can be summarized as read, write, both, or neither (zero). The most commonly used values are GENERIC_READ, GENERIC_WRITE, or both: GENERIC_READ &#124; GENERIC_WRITE.  
  
 `dwShareMode`  
 The sharing mode of an object, which can be read, write, both, delete, all of these, or none: 0, FILE_SHARE_DELETE, FILE_SHARE_READ, FILE_SHARE_WRITE.  
  
 `lpSecurityAttributes`  
 A pointer to a SECURITY_ATTRIBUTES structure that contains an optional security descriptor and also determines whether or not the returned handle can be inherited by child processes. The parameter can be `NULL`.  
  
 `dwCreationDisposition`  
 An action to take on files that exist and do not exist. This parameter must be one of the following values, which cannot be combined: CREATE_ALWAYS, CREATE_NEW, OPEN_ALWAYS, OPEN_EXISTING, or TRUNCATE_EXISTING.  
  
 `dwFlagsAndAttributes`  
 The file attributes and flags. This parameter can include any combination of the available file attributes (FILE_ATTRIBUTE_*). All other file attributes override FILE_ATTRIBUTE_NORMAL. This parameter can also contain combinations of flags (FILE_FLAG_\*) for control of buffering behavior, access modes, and other special-purpose flags. These combine with any FILE_ATTRIBUTE_\* values.  
  
 `hTemplateFile`  
 A valid handle to a template file with the GENERIC_READ access right. The template file supplies file attributes and extended attributes for the file that is being created. This parameter can be `NULL`.  
  
### Return Value  
 Returns a handle that can be used to access the object.  
  
### Remarks  
 This wrapper calls the `CreateFileTransacted` function.  
  
##  <a name="catltransactionmanager__deletefile"></a>  CAtlTransactionManager::DeleteFile  
 Deletes an existing file as a transacted operation.  
  
```
inline BOOL CAtlTransactionManager::DeleteFile(LPCTSTR lpFileName);
```  
  
### Parameters  
 `lpFileName`  
 The name of the file to be deleted.  
  
### Remarks  
 This wrapper calls the `DeleteFileTransacted` function.  
  
##  <a name="catltransactionmanager__findfirstfile"></a>  CAtlTransactionManager::FindFirstFile  
 Searches a directory for a file or subdirectory as a transacted operation.  
  
```
inline HANDLE CAtlTransactionManager::FindFirstFile(LPCTSTR lpFileName,
    WIN32_FIND_DATA* pNextInfo);
```  
  
### Parameters  
 `lpFileName`  
 The directory or path, and the file name to search for. This parameter can include wildcard characters, such as an asterisk (*) or a question mark ().  
  
 `pNextInfo`  
 A pointer to the WIN32_FIND_DATA structure that receives information about a found file or subdirectory.  
  
### Return Value  
 If the function succeeds, the return value is a search handle used in a subsequent call to `FindNextFile` or `FindClose`. If the function fails or fails to locate files from the search string in the `lpFileName` parameter, the return value is INVALID_HANDLE_VALUE.  
  
### Remarks  
 This wrapper calls the `FindFirstFileTransacted` function.  
  
##  <a name="catltransactionmanager__getfileattributes"></a>  CAtlTransactionManager::GetFileAttributes  
 Retrieves file system attributes for a specified file or directory as a transacted operation.  
  
```
inline DWORD CAtlTransactionManager::GetFileAttributes(LPCTSTR lpFileName);
```  
  
### Parameters  
 `lpFileName`  
 The name of the file or directory.  
  
### Remarks  
 This wrapper calls the `GetFileAttributesTransacted` function.  
  
##  <a name="catltransactionmanager__getfileattributesex"></a>  CAtlTransactionManager::GetFileAttributesEx  
 Retrieves file system attributes for a specified file or directory as a transacted operation.  
  
```
inline BOOL CAtlTransactionManager::GetFileAttributesEx(LPCTSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation);
```  
  
### Parameters  
 `lpFileName`  
 The name of the file or directory.  
  
 `fInfoLevelId`  
 The level of attribute information to retrieve.  
  
 `lpFileInformation`  
 A pointer to a buffer that receives the attribute information. The type of attribute information that is stored into this buffer is determined by the value of `fInfoLevelId`. If the `fInfoLevelId` parameter is GetFileExInfoStandard then this parameter points to a WIN32_FILE_ATTRIBUTE_DATA structure.  
  
### Remarks  
 This wrapper calls the `GetFileAttributesTransacted` function.  
  
##  <a name="catltransactionmanager__gethandle"></a>  CAtlTransactionManager::GetHandle  
 Returns the transaction handle.  
  
```
HANDLE GetHandle() const;
```  
  
### Return Value  
 Returns the transaction handle for a class. Returns `NULL` if the `CAtlTransactionManager` is not attached to a handle.  
  
### Remarks  
  
##  <a name="catltransactionmanager__isfallback"></a>  CAtlTransactionManager::IsFallback  
 Determines whether the fallback calls are enabled.  
  
```
BOOL IsFallback() const;
```  
  
### Return Value  
 Returns `TRUE` is the class supports fallback calls. `FALSE` otherwise.  
  
### Remarks  
  
##  <a name="catltransactionmanager__m_bfallback"></a>  CAtlTransactionManager::m_bFallback  
 `TRUE` if the fallback is supported; `FALSE` otherwise.  
  
```
BOOL m_bFallback;
```  
  
### Remarks  
  
##  <a name="catltransactionmanager__m_htransaction"></a>  CAtlTransactionManager::m_hTransaction  
 The transaction handle.  
  
```
HANDLE m_hTransaction;
```  
  
### Remarks  
  
##  <a name="catltransactionmanager__movefile"></a>  CAtlTransactionManager::MoveFile  
 Moves an existing file or a directory, including its children, as a transacted operation.  
  
```
inline BOOL CAtlTransactionManager::MoveFile(LPCTSTR lpOldFileName,  LPCTSTR lpNewFileName);
```  
  
### Parameters  
 `lpOldFileName`  
 The current name of the existing file or directory on the local computer.  
  
 `lpNewFileName`  
 The new name for the file or directory. This name must not already exist. A new file may be on a different file system or drive. A new directory must be on the same drive.  
  
### Remarks  
 This wrapper calls the `MoveFileTransacted` function.  
  
##  <a name="catltransactionmanager__regcreatekeyex"></a>  CAtlTransactionManager::RegCreateKeyEx  
 Creates the specified registry key and associates it with a transaction. If the key already exists, the function opens it.  
  
```
inline LSTATUS CAtlTransactionManager::RegCreateKeyEx(HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD dwReserved,
    LPTSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition);
```  
  
### Parameters  
 `hKey`  
 A handle to an open registry key.  
  
 `lpSubKey`  
 The name of a subkey that this function opens or creates.  
  
 `dwReserved`  
 This parameter is reserved and must be zero.  
  
 `lpClass`  
 The user-defined class of this key. This parameter may be ignored. This parameter can be NULL.  
  
 `dwOptions`  
 This parameter can be one of the following values: REG_OPTION_BACKUP_RESTORE, REG_OPTION_NON_VOLATILE, or REG_OPTION_VOLATILE.  
  
 `samDesired`  
 A mask that specifies the access rights for the key.  
  
 `lpSecurityAttributes`  
 Pointer to a SECURITY_ATTRIBUTES structure that determines whether the returned handle can be inherited by child processes. If `lpSecurityAttributes` is `NULL`, the handle cannot be inherited.  
  
 `phkResult`  
 A pointer to a variable that receives a handle to the opened or created key. If the key is not one of the predefined registry keys, call the `RegCloseKey` function after you have finished using the handle.  
  
 `lpdwDisposition`  
 A pointer to a variable that receives one of the following disposition values: REG_CREATED_NEW_KEY or REG_OPENED_EXISTING_KEY.  
  
### Return Value  
 If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.  
  
### Remarks  
 This wrapper calls the `RegCreateKeyTransacted` function.  
  
##  <a name="catltransactionmanager__regdeletekey"></a>  CAtlTransactionManager::RegDeleteKey  
 Deletes a subkey and its values from the specified platform-specific view of the registry as a transacted operation.  
  
```
inline LSTATUS CAtlTransactionManager::RegDeleteKeyEx(HKEY hKey,  LPCTSTR lpSubKey);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`hKey`|A handle to an open registry key.|  
|`lpSubKey`|The name of the key to be deleted.|  
  
### Return Value  
 If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.  
  
### Remarks  
 This wrapper calls the `RegDeleteKeyTransacted` function.  
  
##  <a name="catltransactionmanager__regopenkeyex"></a>  CAtlTransactionManager::RegOpenKeyEx  
 Opens the specified registry key and associates it with a transaction.  
  
```
inline LSTATUS CAtlTransactionManager::RegOpenKeyEx(HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult);
```  
  
### Parameters  
 `hKey`  
 A handle to an open registry key.  
  
 `lpSubKey`  
 The name of the registry subkey to be opened.  
  
 `ulOptions`  
 This parameter is reserved and must be zero.  
  
 `samDesired`  
 A mask that specifies the access rights for the key.  
  
 `phkResult`  
 A pointer to a variable that receives a handle to the opened or created key. If the key is not one of the predefined registry keys, call the `RegCloseKey` function after you have finished using the handle.  
  
### Return Value  
 If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h  
  
### Remarks  
 This wrapper calls the `RegOpenKeyTransacted` function.  
  
##  <a name="catltransactionmanager__rollback"></a>  CAtlTransactionManager::Rollback  
 Requests that the transaction be rolled back.  
  
```
inline BOOL CAtlTransactionManager::Rollback();
```  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 This wrapper calls the `RollbackTransaction` function.  
  
##  <a name="catltransactionmanager__setfileattributes"></a>  CAtlTransactionManager::SetFileAttributes  
 Sets the attributes for a file or directory as a transacted operation.  
  
```
inline BOOL CAtlTransactionManager::SetFileAttributes(LPCTSTR lpFileName,  DWORD dwAttributes);
```  
  
### Parameters  
 `lpFileName`  
 The name of the file or directory.  
  
 `dwAttributes`  
 The file attributes to set for the file. For more information, see [SetFileAttributesTransacted](http://go.microsoft.com/fwlink/linkid=158699).  
  
### Remarks  
 This wrapper calls the `SetFileAttributesTransacted` function.  
  
## See Also  
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)









