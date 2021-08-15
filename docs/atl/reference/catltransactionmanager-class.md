---
description: "Learn more about: CAtlTransactionManager Class"
title: "CAtlTransactionManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlTransactionManager", "ATLTRANSACTIONMANAGER/ATL::CAtlTransactionManager", "ATLTRANSACTIONMANAGER/ATL::Close", "ATLTRANSACTIONMANAGER/ATL::Commit", "ATLTRANSACTIONMANAGER/ATL::Create", "ATLTRANSACTIONMANAGER/ATL::CreateFile", "ATLTRANSACTIONMANAGER/ATL::DeleteFile", "ATLTRANSACTIONMANAGER/ATL::FindFirstFile", "ATLTRANSACTIONMANAGER/ATL::GetFileAttributes", "ATLTRANSACTIONMANAGER/ATL::GetFileAttributesEx", "ATLTRANSACTIONMANAGER/ATL::GetHandle", "ATLTRANSACTIONMANAGER/ATL::IsFallback", "ATLTRANSACTIONMANAGER/ATL::MoveFile", "ATLTRANSACTIONMANAGER/ATL::RegCreateKeyEx", "ATLTRANSACTIONMANAGER/ATL::RegDeleteKey", "ATLTRANSACTIONMANAGER/ATL::RegOpenKeyEx", "ATLTRANSACTIONMANAGER/ATL::Rollback", "ATLTRANSACTIONMANAGER/ATL::SetFileAttributes", "ATLTRANSACTIONMANAGER/ATL::m_bFallback", "ATLTRANSACTIONMANAGER/ATL::m_hTransaction"]
helpviewer_keywords: ["CAtlTransactionManager class"]
ms.assetid: b01732dc-1d16-4b42-bfac-b137fca2b740
---
# CAtlTransactionManager Class

CAtlTransactionManager class provides a wrapper to Kernel Transaction Manager (KTM) functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAtlTransactionManager;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[~CAtlTransactionManager](#dtor)|CAtlTransactionManager destructor.|
|[CAtlTransactionManager](#catltransactionmanager)|CAtlTransactionManager constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Close](#close)|Closes one the transaction handle.|
|[Commit](#commit)|Requests that the transaction be committed.|
|[Create](#create)|Creates the transaction handle.|
|[CreateFile](#createfile)|Creates or opens a file, file stream, or directory as a transacted operation.|
|[DeleteFile](#deletefile)|Deletes an existing file as a transacted operation.|
|[FindFirstFile](#findfirstfile)|Searches a directory for a file or subdirectory as a transacted operation.|
|[GetFileAttributes](#getfileattributes)|Retrieves file system attributes for a specified file or directory as a transacted operation.|
|[GetFileAttributesEx](#getfileattributesex)|Retrieves file system attributes for a specified file or directory as a transacted operation.|
|[GetHandle](#gethandle)|Returns the transaction handle.|
|[IsFallback](#isfallback)|Determines whether the fallback calls are enabled.|
|[MoveFile](#movefile)|Moves an existing file or a directory, including its children, as a transacted operation.|
|[RegCreateKeyEx](#regcreatekeyex)|Creates the specified registry key and associates it with a transaction. If the key already exists, the function opens it.|
|[RegDeleteKey](#regdeletekey)|Deletes a subkey and its values from the specified platform-specific view of the registry as a transacted operation.|
|[RegOpenKeyEx](#regopenkeyex)|Opens the specified registry key and associates it with a transaction.|
|[Rollback](#rollback)|Requests that the transaction be rolled back.|
|[SetFileAttributes](#setfileattributes)|Sets the attributes for a file or directory as a transacted operation.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[m_bFallback](#m_bfallback)|TRUE if the fallback is supported; FALSE otherwise.|
|[m_hTransaction](#m_htransaction)|The transaction handle.|

## Remarks

## Inheritance Hierarchy

[ATL::CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)

## Requirements

**Header:** atltransactionmanager.h

## <a name="dtor"></a>  ~CAtlTransactionManager

CAtlTransactionManager destructor.

```cpp
virtual ~CAtlTransactionManager();
```

### Remarks

In normal processing, the transaction is automatically committed and closed. If the destructor is called during an exception unwind, the transaction is rolled back and closed.

## <a name="catltransactionmanager"></a> CAtlTransactionManager

CAtlTransactionManager constructor.

```cpp
CAtlTransactionManager(BOOL bFallback = TRUE, BOOL bAutoCreateTransaction = TRUE);
```

### Parameters

*bFallback*<br/>
TRUE indicates support fallback. If transacted function fails, the class automatically calls the "non-transacted" function. FALSE indicates no "fallback" calls.

*bAutoCreateTransaction*<br/>
TRUE indicates that the transaction handler is created automatically in the constructor. FALSE indicates that it is not.

### Remarks

## <a name="close"></a> Close

Closes the transaction handle.

```cpp
inline BOOL Close();
```

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

This wrapper calls the `CloseHandle` function. The method is automatically called in the destructor.

## <a name="commit"></a> Commit

Requests that the transaction be committed.

```cpp
inline BOOL Commit();
```

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

This wrapper calls the `CommitTransaction` function. The method is automatically called in the destructor.

## <a name="create"></a> Create

Creates the transaction handle.

```cpp
inline BOOL Create();
```

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

This wrapper calls the `CreateTransaction` function. Check it for

## <a name="createfile"></a> CreateFile

Creates or opens a file, file stream, or directory as a transacted operation.

```cpp
inline HANDLE CreateFile(
    LPCTSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile);
```

### Parameters

*lpFileName*<br/>
The name of an object to be created or opened.

*dwDesiredAccess*<br/>
The access to the object, which can be summarized as read, write, both, or neither (zero). The most commonly used values are GENERIC_READ, GENERIC_WRITE, or both: GENERIC_READ &#124; GENERIC_WRITE.

*dwShareMode*<br/>
The sharing mode of an object, which can be read, write, both, delete, all of these, or none: 0, FILE_SHARE_DELETE, FILE_SHARE_READ, FILE_SHARE_WRITE.

*lpSecurityAttributes*<br/>
A pointer to a SECURITY_ATTRIBUTES structure that contains an optional security descriptor and also determines whether or not the returned handle can be inherited by child processes. The parameter can be NULL.

*dwCreationDisposition*<br/>
An action to take on files that exist and do not exist. This parameter must be one of the following values, which cannot be combined: CREATE_ALWAYS, CREATE_NEW, OPEN_ALWAYS, OPEN_EXISTING, or TRUNCATE_EXISTING.

*dwFlagsAndAttributes*<br/>
The file attributes and flags. This parameter can include any combination of the available file attributes (FILE_ATTRIBUTE_*). All other file attributes override FILE_ATTRIBUTE_NORMAL. This parameter can also contain combinations of flags (FILE_FLAG_\*) for control of buffering behavior, access modes, and other special-purpose flags. These combine with any FILE_ATTRIBUTE_\* values.

*hTemplateFile*<br/>
A valid handle to a template file with the GENERIC_READ access right. The template file supplies file attributes and extended attributes for the file that is being created. This parameter can be NULL.

### Return Value

Returns a handle that can be used to access the object.

### Remarks

This wrapper calls the `CreateFileTransacted` function.

## <a name="deletefile"></a> DeleteFile

Deletes an existing file as a transacted operation.

```cpp
inline BOOL DeleteFile(LPCTSTR lpFileName);
```

### Parameters

*lpFileName*<br/>
The name of the file to be deleted.

### Remarks

This wrapper calls the `DeleteFileTransacted` function.

## <a name="findfirstfile"></a> FindFirstFile

Searches a directory for a file or subdirectory as a transacted operation.

```cpp
inline HANDLE FindFirstFile(
    LPCTSTR lpFileName,
    WIN32_FIND_DATA* pNextInfo);
```

### Parameters

*lpFileName*<br/>
The directory or path, and the file name to search for. This parameter can include wildcard characters, such as an asterisk (*) or a question mark ().

*pNextInfo*<br/>
A pointer to the WIN32_FIND_DATA structure that receives information about a found file or subdirectory.

### Return Value

If the function succeeds, the return value is a search handle used in a subsequent call to `FindNextFile` or `FindClose`. If the function fails or fails to locate files from the search string in the *lpFileName* parameter, the return value is INVALID_HANDLE_VALUE.

### Remarks

This wrapper calls the `FindFirstFileTransacted` function.

## <a name="getfileattributes"></a> GetFileAttributes

Retrieves file system attributes for a specified file or directory as a transacted operation.

```cpp
inline DWORD GetFileAttributes(LPCTSTR lpFileName);
```

### Parameters

*lpFileName*<br/>
The name of the file or directory.

### Remarks

This wrapper calls the `GetFileAttributesTransacted` function.

## <a name="getfileattributesex"></a> GetFileAttributesEx

Retrieves file system attributes for a specified file or directory as a transacted operation.

```cpp
inline BOOL GetFileAttributesEx(
    LPCTSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation);
```

### Parameters

*lpFileName*<br/>
The name of the file or directory.

*fInfoLevelId*<br/>
The level of attribute information to retrieve.

*lpFileInformation*<br/>
A pointer to a buffer that receives the attribute information. The type of attribute information that is stored into this buffer is determined by the value of *fInfoLevelId*. If the *fInfoLevelId* parameter is GetFileExInfoStandard then this parameter points to a WIN32_FILE_ATTRIBUTE_DATA structure.

### Remarks

This wrapper calls the `GetFileAttributesTransacted` function.

## <a name="gethandle"></a> GetHandle

Returns the transaction handle.

```cpp
HANDLE GetHandle() const;
```

### Return Value

Returns the transaction handle for a class. Returns NULL if the `CAtlTransactionManager` is not attached to a handle.

### Remarks

## <a name="isfallback"></a> IsFallback

Determines whether the fallback calls are enabled.

```cpp
BOOL IsFallback() const;
```

### Return Value

Returns TRUE is the class supports fallback calls. FALSE otherwise.

### Remarks

## <a name="m_bfallback"></a> m_bFallback

TRUE if the fallback is supported; FALSE otherwise.

```cpp
BOOL m_bFallback;
```

### Remarks

## <a name="m_htransaction"></a> m_hTransaction

The transaction handle.

```cpp
HANDLE m_hTransaction;
```

### Remarks

## <a name="movefile"></a> MoveFile

Moves an existing file or a directory, including its children, as a transacted operation.

```cpp
inline BOOL MoveFile(LPCTSTR lpOldFileName, LPCTSTR lpNewFileName);
```

### Parameters

*lpOldFileName*<br/>
The current name of the existing file or directory on the local computer.

*lpNewFileName*<br/>
The new name for the file or directory. This name must not already exist. A new file may be on a different file system or drive. A new directory must be on the same drive.

### Remarks

This wrapper calls the `MoveFileTransacted` function.

## <a name="regcreatekeyex"></a> RegCreateKeyEx

Creates the specified registry key and associates it with a transaction. If the key already exists, the function opens it.

```cpp
inline LSTATUS RegCreateKeyEx(
    HKEY hKey,
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

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of a subkey that this function opens or creates.

*dwReserved*<br/>
This parameter is reserved and must be zero.

*lpClass*<br/>
The user-defined class of this key. This parameter may be ignored. This parameter can be NULL.

*dwOptions*<br/>
This parameter can be one of the following values: REG_OPTION_BACKUP_RESTORE, REG_OPTION_NON_VOLATILE, or REG_OPTION_VOLATILE.

*samDesired*<br/>
A mask that specifies the access rights for the key.

*lpSecurityAttributes*<br/>
Pointer to a SECURITY_ATTRIBUTES structure that determines whether the returned handle can be inherited by child processes. If *lpSecurityAttributes* is NULL, the handle cannot be inherited.

*phkResult*<br/>
A pointer to a variable that receives a handle to the opened or created key. If the key is not one of the predefined registry keys, call the `RegCloseKey` function after you have finished using the handle.

*lpdwDisposition*<br/>
A pointer to a variable that receives one of the following disposition values: REG_CREATED_NEW_KEY or REG_OPENED_EXISTING_KEY.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Remarks

This wrapper calls the `RegCreateKeyTransacted` function.

## <a name="regdeletekey"></a> RegDeleteKey

Deletes a subkey and its values from the specified platform-specific view of the registry as a transacted operation.

```cpp
inline LSTATUS RegDeleteKeyEx(HKEY hKey, LPCTSTR lpSubKey);
```

### Parameters

*hKey*\
A handle to an open registry key.

*lpSubKey*\
The name of the key to be deleted.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Remarks

This wrapper calls the `RegDeleteKeyTransacted` function.

## <a name="regopenkeyex"></a> RegOpenKeyEx

Opens the specified registry key and associates it with a transaction.

```cpp
inline LSTATUS RegOpenKeyEx(
    HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult);
```

### Parameters

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of the registry subkey to be opened.

*ulOptions*<br/>
This parameter is reserved and must be zero.

*samDesired*<br/>
A mask that specifies the access rights for the key.

*phkResult*<br/>
A pointer to a variable that receives a handle to the opened or created key. If the key is not one of the predefined registry keys, call the `RegCloseKey` function after you have finished using the handle.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h

### Remarks

This wrapper calls the `RegOpenKeyTransacted` function.

## <a name="rollback"></a> Rollback

Requests that the transaction be rolled back.

```cpp
inline BOOL Rollback();
```

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

This wrapper calls the `RollbackTransaction` function.

## <a name="setfileattributes"></a> SetFileAttributes

Sets the attributes for a file or directory as a transacted operation.

```cpp
inline BOOL SetFileAttributes(LPCTSTR lpFileName, DWORD dwAttributes);
```

### Parameters

*lpFileName*<br/>
The name of the file or directory.

*dwAttributes*<br/>
The file attributes to set for the file. For more information, see [SetFileAttributesTransacted](/windows/win32/api/winbase/nf-winbase-setfileattributestransactedw).

### Remarks

This wrapper calls the `SetFileAttributesTransacted` function.

## See also

[ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)
