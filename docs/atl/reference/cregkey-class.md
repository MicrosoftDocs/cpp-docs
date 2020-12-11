---
description: "Learn more about: CRegKey Class"
title: "CRegKey Class"
ms.date: "11/04/2016"
f1_keywords: ["CRegKey", "ATLBASE/ATL::CRegKey", "ATLBASE/ATL::CRegKey::CRegKey", "ATLBASE/ATL::CRegKey::Attach", "ATLBASE/ATL::CRegKey::Close", "ATLBASE/ATL::CRegKey::Create", "ATLBASE/ATL::CRegKey::DeleteSubKey", "ATLBASE/ATL::CRegKey::DeleteValue", "ATLBASE/ATL::CRegKey::Detach", "ATLBASE/ATL::CRegKey::EnumKey", "ATLBASE/ATL::CRegKey::Flush", "ATLBASE/ATL::CRegKey::GetKeySecurity", "ATLBASE/ATL::CRegKey::NotifyChangeKeyValue", "ATLBASE/ATL::CRegKey::Open", "ATLBASE/ATL::CRegKey::QueryBinaryValue", "ATLBASE/ATL::CRegKey::QueryDWORDValue", "ATLBASE/ATL::CRegKey::QueryGUIDValue", "ATLBASE/ATL::CRegKey::QueryMultiStringValue", "ATLBASE/ATL::CRegKey::QueryQWORDValue", "ATLBASE/ATL::CRegKey::QueryStringValue", "ATLBASE/ATL::CRegKey::QueryValue", "ATLBASE/ATL::CRegKey::RecurseDeleteKey", "ATLBASE/ATL::CRegKey::SetBinaryValue", "ATLBASE/ATL::CRegKey::SetDWORDValue", "ATLBASE/ATL::CRegKey::SetGUIDValue", "ATLBASE/ATL::CRegKey::SetKeySecurity", "ATLBASE/ATL::CRegKey::SetKeyValue", "ATLBASE/ATL::CRegKey::SetMultiStringValue", "ATLBASE/ATL::CRegKey::SetQWORDValue", "ATLBASE/ATL::CRegKey::SetStringValue", "ATLBASE/ATL::CRegKey::SetValue", "ATLBASE/ATL::CRegKey::m_hKey", "ATLBASE/ATL::CRegKey::m_pTM"]
helpviewer_keywords: ["CRegKey class", "ATL, registry", "registry, deleting values", "registry, writing to", "registry, deleting keys"]
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
---
# CRegKey Class

This class provides methods for manipulating entries in the system registry.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CRegKey
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRegKey::CRegKey](#cregkey)|The constructor.|
|[CRegKey::~CRegKey](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRegKey::Attach](#attach)|Call this method to attach an HKEY to the `CRegKey` object by setting the [m_hKey](#m_hkey) member handle to `hKey`.|
|[CRegKey::Close](#close)|Call this method to release the [m_hKey](#m_hkey) member handle and set it to NULL.|
|[CRegKey::Create](#create)|Call this method to create the specified key, if it does not exist as a subkey of `hKeyParent`.|
|[CRegKey::DeleteSubKey](#deletesubkey)|Call this method to remove the specified key from the registry.|
|[CRegKey::DeleteValue](#deletevalue)|Call this method to remove a value field from [m_hKey](#m_hkey).|
|[CRegKey::Detach](#detach)|Call this method to detach the [m_hKey](#m_hkey) member handle from the `CRegKey` object and set `m_hKey` to NULL.|
|[CRegKey::EnumKey](#enumkey)|Call this method to enumerate the subkeys of the open registry key.|
|[CRegKey::Flush](#flush)|Call this method to write all of the attributes of the open registry key into the registry.|
|[CRegKey::GetKeySecurity](#getkeysecurity)|Call this method to retrieve a copy of the security descriptor protecting the open registry key.|
|[CRegKey::NotifyChangeKeyValue](#notifychangekeyvalue)|This method notifies the caller about changes to the attributes or contents of the open registry key.|
|[CRegKey::Open](#open)|Call this method to open the specified key and set [m_hKey](#m_hkey) to the handle of this key.|
|[CRegKey::QueryBinaryValue](#querybinaryvalue)|Call this method to retrieve the binary data for a specified value name.|
|[CRegKey::QueryDWORDValue](#querydwordvalue)|Call this method to retrieve the DWORD data for a specified value name.|
|[CRegKey::QueryGUIDValue](#queryguidvalue)|Call this method to retrieve the GUID data for a specified value name.|
|[CRegKey::QueryMultiStringValue](#querymultistringvalue)|Call this method to retrieve the multistring data for a specified value name.|
|[CRegKey::QueryQWORDValue](#queryqwordvalue)|Call this method to retrieve the QWORD data for a specified value name.|
|[CRegKey::QueryStringValue](#querystringvalue)|Call this method to retrieve the string data for a specified value name.|
|[CRegKey::QueryValue](#queryvalue)|Call this method to retrieve the data for the specified value field of [m_hKey](#m_hkey). Earlier versions of this method are no longer supported and are marked as ATL_DEPRECATED.|
|[CRegKey::RecurseDeleteKey](#recursedeletekey)|Call this method to remove the specified key from the registry and explicitly remove any subkeys.|
|[CRegKey::SetBinaryValue](#setbinaryvalue)|Call this method to set the binary value of the registry key.|
|[CRegKey::SetDWORDValue](#setdwordvalue)|Call this method to set the DWORD value of the registry key.|
|[CRegKey::SetGUIDValue](#setguidvalue)|Call this method to set the GUID value of the registry key.|
|[CRegKey::SetKeySecurity](#setkeysecurity)|Call this method to set the security of the registry key.|
|[CRegKey::SetKeyValue](#setkeyvalue)|Call this method to store data in a specified value field of a specified key.|
|[CRegKey::SetMultiStringValue](#setmultistringvalue)|Call this method to set the multistring value of the registry key.|
|[CRegKey::SetQWORDValue](#setqwordvalue)|Call this method to set the QWORD value of the registry key.|
|[CRegKey::SetStringValue](#setstringvalue)|Call this method to set the string value of the registry key.|
|[CRegKey::SetValue](#setvalue)|Call this method to store data in the specified value field of [m_hKey](#m_hkey). Earlier versions of this method are no longer supported and are marked as ATL_DEPRECATED.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CRegKey::operator HKEY](#operator_hkey)|Converts a `CRegKey` object to an HKEY.|
|[CRegKey::operator =](#operator_eq)|Assignment operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CRegKey::m_hKey](#m_hkey)|Contains a handle of the registry key associated with the `CRegKey` object.|
|[CRegKey::m_pTM](#m_ptm)|Pointer to `CAtlTransactionManager` object|

## Remarks

`CRegKey` provides methods for creating and deleting keys and values in the system registry. The registry contains an installation-specific set of definitions for system components, such as software version numbers, logical-to-physical mappings of installed hardware, and COM objects.

`CRegKey` provides a programming interface to the system registry for a given machine. For example, to open a particular registry key, call `CRegKey::Open`. To retrieve or modify a data value, call `CRegKey::QueryValue` or `CRegKey::SetValue`, respectively. To close a key, call `CRegKey::Close`.

When you close a key, its registry data is written (flushed) to the hard disk. This process may take several seconds. If your application must explicitly write registry data to the hard disk, you can call the [RegFlushKey](/windows/win32/api/winreg/nf-winreg-regflushkey) Win32 function. However, `RegFlushKey` uses many system resources and should be called only when absolutely necessary.

> [!IMPORTANT]
> Any methods that allow the caller to specify a registry location have the potential to read data that cannot be trusted. Methods that make use of [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) should take into consideration that this function does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## Requirements

**Header:** atlbase.h

## <a name="attach"></a> CRegKey::Attach

Call this method to attach an HKEY to the `CRegKey` object by setting the [m_hKey](#m_hkey) member handle to *hKey*.

```cpp
void Attach(HKEY hKey) throw();
```

### Parameters

*hKey*<br/>
The handle of a registry key.

### Remarks

`Attach` will assert if `m_hKey` is non-NULL.

## <a name="close"></a> CRegKey::Close

Call this method to release the [m_hKey](#m_hkey) member handle and set it to NULL.

```
LONG Close() throw();
```

### Return Value

If successful, returns ERROR_SUCCESS; otherwise returns an error value.

## <a name="create"></a> CRegKey::Create

Call this method to create the specified key, if it does not exist as a subkey of *hKeyParent*.

```
LONG Create(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPTSTR lpszClass = REG_NONE,
    DWORD dwOptions = REG_OPTION_NON_VOLATILE,
    REGSAM samDesired = KEY_READ | KEY_WRITE,
    LPSECURITY_ATTRIBUTES lpSecAttr = NULL,
    LPDWORD lpdwDisposition = NULL) throw();
```

### Parameters

*hKeyParent*<br/>
The handle of an open key.

*lpszKeyName*<br/>
Specifies the name of a key to be created or opened. This name must be a subkey of *hKeyParent*.

*lpszClass*<br/>
Specifies the class of the key to be created or opened. The default value is REG_NONE.

*dwOptions*<br/>
Options for the key. The default value is REG_OPTION_NON_VOLATILE. For a list of possible values and descriptions, see [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) in the Windows SDK.

*samDesired*<br/>
The security access for the key. The default value is KEY_READ &#124; KEY_WRITE. For a list of possible values and descriptions, see `RegCreateKeyEx`.

*lpSecAttr*<br/>
A pointer to a [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that indicates whether the handle of the key can be inherited by a child process. By default, this parameter is NULL (meaning the handle cannot be inherited).

*lpdwDisposition*<br/>
[out] If non-NULL, retrieves either REG_CREATED_NEW_KEY (if the key did not exist and was created) or REG_OPENED_EXISTING_KEY (if the key existed and was opened).

### Return Value

If successful, returns ERROR_SUCCESS and opens the key. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

`Create` sets the [m_hKey](#m_hkey) member to the handle of this key.

## <a name="cregkey"></a> CRegKey::CRegKey

The constructor.

```
CRegKey() throw();
CRegKey(CRegKey& key) throw();
explicit CRegKey(HKEY hKey) throw();
CRegKey(CAtlTransactionManager* pTM) throw();
```

### Parameters

*key*<br/>
A reference to a `CRegKey` object.

*hKey*<br/>
A handle to a registry key.

*pTM*<br/>
Pointer to CAtlTransactionManager object

### Remarks

Creates a new `CRegKey` object. The object can be created from an existing `CRegKey` object, or from a handle to a registry key.

## <a name="dtor"></a> CRegKey::~CRegKey

The destructor.

```
~CRegKey() throw();
```

### Remarks

The destructor releases `m_hKey`.

## <a name="deletesubkey"></a> CRegKey::DeleteSubKey

Call this method to remove the specified key from the registry.

```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```

### Parameters

*lpszSubKey*<br/>
Specifies the name of the key to delete. This name must be a subkey of [m_hKey](#m_hkey).

### Return Value

If successful, returns ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

`DeleteSubKey` can only delete a key that has no subkeys. If the key has subkeys, call [RecurseDeleteKey](#recursedeletekey) instead.

## <a name="deletevalue"></a> CRegKey::DeleteValue

Call this method to remove a value field from [m_hKey](#m_hkey).

```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```

### Parameters

*lpszValue*<br/>
Specifies the value field to remove.

### Return Value

If successful, returns ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

## <a name="detach"></a> CRegKey::Detach

Call this method to detach the [m_hKey](#m_hkey) member handle from the `CRegKey` object and set `m_hKey` to NULL.

```
HKEY Detach() throw();
```

### Return Value

The HKEY associated with the `CRegKey` object.

## <a name="enumkey"></a> CRegKey::EnumKey

Call this method to enumerate the subkeys of the open registry key.

```
LONG EnumKey(
    DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```

### Parameters

*iIndex*<br/>
The subkey index. This parameter should be zero for the first call and then incremented for subsequent calls

*pszName*<br/>
Pointer to a buffer that receives the name of the subkey, including the terminating null character. Only the name of the subkey is copied to the buffer, not the full key hierarchy.

*pnNameLength*<br/>
Pointer to a variable that specifies the size, in TCHARs, of the buffer specified by the *pszName* parameter. This size should include the terminating null character. When the method returns, the variable pointed to by *pnNameLength* contains the number of characters stored in the buffer. The count returned does not include the terminating null character.

*pftLastWriteTime*<br/>
Pointer to a variable that receives the time the enumerated subkey was last written to.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

To enumerate the subkeys, call `CRegKey::EnumKey` with an index of zero. Increment the index value and repeat until the method returns ERROR_NO_MORE_ITEMS. For more information, see [RegEnumKeyEx](/windows/win32/api/winreg/nf-winreg-regenumkeyexw) in the Windows SDK.

## <a name="flush"></a> CRegKey::Flush

Call this method to write all of the attributes of the open registry key into the registry.

```
LONG Flush() throw();
```

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

For more information, see [RegEnumFlush](/windows/win32/api/winreg/nf-winreg-regflushkey) in the Windows SDK.

## <a name="getkeysecurity"></a> CRegKey::GetKeySecurity

Call this method to retrieve a copy of the security descriptor protecting the open registry key.

```
LONG GetKeySecurity(
    SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```

### Parameters

*si*<br/>
The [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) value that indicates the requested security information.

*psd*<br/>
A pointer to a buffer that receives a copy of the requested security descriptor.

*pnBytes*<br/>
The size, in bytes, of the buffer pointed to by *psd*.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code is defined in WINERROR.H.

### Remarks

For more information, see [RegGetKeySecurity](/windows/win32/api/winreg/nf-winreg-reggetkeysecurity).

## <a name="m_hkey"></a> CRegKey::m_hKey

Contains a handle of the registry key associated with the `CRegKey` object.

```
HKEY m_hKey;
```

## <a name="m_ptm"></a> CRegKey::m_pTM

Pointer to a `CAtlTransactionManager` object.

```
CAtlTransactionManager* m_pTM;
```

### Remarks

## <a name="notifychangekeyvalue"></a> CRegKey::NotifyChangeKeyValue

This method notifies the caller about changes to the attributes or contents of the open registry key.

```
LONG NotifyChangeKeyValue(
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```

### Parameters

*bWatchSubtree*<br/>
Specifies a flag that indicates whether to report changes in the specified key and all of its subkeys or only in the specified key. If this parameter is TRUE, the method reports changes in the key and its subkeys. If the parameter is FALSE, the method reports changes only in the key.

*dwNotifyFilter*<br/>
Specifies a set of flags that control which changes should be reported. This parameter can be a combination of the following values:

|Value|Meaning|
|-----------|-------------|
|REG_NOTIFY_CHANGE_NAME|Notify the caller if a subkey is added or deleted.|
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notify the caller of changes to the attributes of the key, such as the security descriptor information.|
|REG_NOTIFY_CHANGE_LAST_SET|Notify the caller of changes to a value of the key. This can include adding or deleting a value, or changing an existing value.|
|REG_NOTIFY_CHANGE_SECURITY|Notify the caller of changes to the security descriptor of the key.|

*hEvent*<br/>
Handle to an event. If the *bAsync* parameter is TRUE, the method returns immediately and changes are reported by signaling this event. If *bAsync* is FALSE, *hEvent* is ignored.

*bAsync*<br/>
Specifies a flag that indicates how the method reports changes. If this parameter is TRUE, the method returns immediately and reports changes by signaling the specified event. When this parameter is FALSE, the method does not return until a change has occurred. If *hEvent* does not specify a valid event, the *bAsync* parameter cannot be TRUE.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

> [!NOTE]
> This method does not notify the caller if the specified key is deleted.

For more details and a sample program, see [RegNotifyChangeKeyValue](/windows/win32/api/winreg/nf-winreg-regnotifychangekeyvalue).

## <a name="open"></a> CRegKey::Open

Call this method to open the specified key and set [m_hKey](#m_hkey) to the handle of this key.

```
LONG Open(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```

### Parameters

*hKeyParent*<br/>
The handle of an open key.

*lpszKeyName*<br/>
Specifies the name of a key to be created or opened. This name must be a subkey of *hKeyParent*.

*samDesired*<br/>
The security access for the key. The default value is KEY_ALL_ACCESS. For a list of possible values and descriptions, see [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) in the Windows SDK.

### Return Value

If successful, returns ERROR_SUCCESS; otherwise, a non-zero error value defined in WINERROR.H.

### Remarks

If the *lpszKeyName* parameter is NULL or points to an empty string, `Open` opens a new handle of the key identified by *hKeyParent*, but does not close any previously opened handle.

Unlike [CRegKey::Create](#create), `Open` will not create the specified key if it does not exist.

## <a name="operator_hkey"></a> CRegKey::operator HKEY

Converts a `CRegKey` object to an HKEY.

```
operator HKEY() const throw();
```

## <a name="operator_eq"></a> CRegKey::operator =

Assignment operator.

```
CRegKey& operator= (CRegKey& key) throw();
```

### Parameters

*key*<br/>
The key to copy.

### Return Value

Returns a reference to the new key.

### Remarks

This operator detaches *key* from its current object and assigns it to the `CRegKey` object instead.

## <a name="querybinaryvalue"></a> CRegKey::QueryBinaryValue

Call this method to retrieve the binary data for a specified value name.

```
LONG QueryBinaryValue(
    LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*pValue*<br/>
Pointer to a buffer that receives the value's data.

*pnBytes*<br/>
Pointer to a variable that specifies the size, in bytes, of the buffer pointed to by the *pValue* parameter. When the method returns, this variable contains the size of the data copied to the buffer.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_BINARY, ERROR_INVALID_DATA is returned.

### Remarks

This method makes use of `RegQueryValueEx` and confirms that the correct type of data is returned. See [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) for more details.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="querydwordvalue"></a> CRegKey::QueryDWORDValue

Call this method to retrieve the DWORD data for a specified value name.

```
LONG QueryDWORDValue(
    LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*dwValue*<br/>
Pointer to a buffer that receives the DWORD.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_DWORD, ERROR_INVALID_DATA is returned.

### Remarks

This method makes use of `RegQueryValueEx` and confirms that the correct type of data is returned. See [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) for more details.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="queryguidvalue"></a> CRegKey::QueryGUIDValue

Call this method to retrieve the GUID data for a specified value name.

```
LONG QueryGUIDValue(
    LPCTSTR pszValueName,
    GUID& guidValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*guidValue*<br/>
Pointer to a variable that receives the GUID.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not a valid GUID, ERROR_INVALID_DATA is returned.

### Remarks

This method makes use of `CRegKey::QueryStringValue` and converts the string into a GUID using [CLSIDFromString](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring).

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted.

## <a name="querymultistringvalue"></a> CRegKey::QueryMultiStringValue

Call this method to retrieve the multistring data for a specified value name.

```
LONG QueryMultiStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*pszValue*<br/>
Pointer to a buffer that receives the multistring data. A multistring is an array of null-terminated strings, terminated by two null characters.

*pnChars*<br/>
The size, in TCHARs, of the buffer pointed to by *pszValue*. When the method returns, *pnChars* contains the size, in TCHARs, of the multistring retrieved, including a terminating null character.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_MULTI_SZ, ERROR_INVALID_DATA is returned.

### Remarks

This method makes use of `RegQueryValueEx` and confirms that the correct type of data is returned. See [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) for more details.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="queryqwordvalue"></a> CRegKey::QueryQWORDValue

Call this method to retrieve the QWORD data for a specified value name.

```
LONG QueryQWORDValue(
    LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*qwValue*<br/>
Pointer to a buffer that receives the QWORD.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_QWORD, ERROR_INVALID_DATA is returned.

### Remarks

This method makes use of `RegQueryValueEx` and confirms that the correct type of data is returned. See [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) for more details.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="querystringvalue"></a> CRegKey::QueryStringValue

Call this method to retrieve the string data for a specified value name.

```
LONG QueryStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query.

*pszValue*<br/>
Pointer to a buffer that receives the string data.

*pnChars*<br/>
The size, in TCHARs, of the buffer pointed to by *pszValue*. When the method returns, *pnChars* contains the size, in TCHARs, of the string retrieved, including a terminating null character.

### Return Value

If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_SZ, ERROR_INVALID_DATA is returned. If the method returns ERROR_MORE_DATA, *pnChars* equals zero, not the required buffer size in bytes.

### Remarks

This method makes use of `RegQueryValueEx` and confirms that the correct type of data is returned. See [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) for more details.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="queryvalue"></a> CRegKey::QueryValue

Call this method to retrieve the data for the specified value field of [m_hKey](#m_hkey). Earlier versions of this method are no longer supported and are marked as ATL_DEPRECATED.

```
LONG QueryValue(
    LPCTSTR pszValueName,
    DWORD* pdwType,
    void* pData,
    ULONG* pnBytes) throw();

ATL_DEPRECATED LONG QueryValue(
    DWORD& dwValue,
    LPCTSTR lpszValueName);

ATL_DEPRECATED LONG QueryValue(
    LPTSTR szValue,
    LPCTSTR lpszValueName,
    DWORD* pdwCount);
```

### Parameters

*pszValueName*<br/>
Pointer to a null-terminated string containing the name of the value to query. If *pszValueName* is NULL or an empty string, "", the method retrieves the type and data for the key's unnamed or default value, if any.

*pdwType*<br/>
Pointer to a variable that receives a code indicating the type of data stored in the specified value. The *pdwType* parameter can be NULL if the type code is not required.

*pData*<br/>
Pointer to a buffer that receives the value's data. This parameter can be NULL if the data is not required.

*pnBytes*<br/>
Pointer to a variable that specifies the size, in bytes, of the buffer pointed to by the *pData* parameter. When the method returns, this variable contains the size of the data copied to *pData.*

*dwValue*<br/>
The value field's numerical data.

*lpszValueName*<br/>
Specifies the value field to be queried.

*szValue*<br/>
The value field's string data.

*pdwCount*<br/>
The size of the string data. Its value is initially set to the size of the *szValue* buffer.

### Return Value

If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.

### Remarks

The two original versions of `QueryValue` are no longer supported and are marked as ATL_DEPRECATED. The compiler will issue a warning if these forms are used.

The remaining method calls RegQueryValueEx.

> [!IMPORTANT]
> This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the RegQueryValueEx function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.

## <a name="recursedeletekey"></a> CRegKey::RecurseDeleteKey

Call this method to remove the specified key from the registry and explicitly remove any subkeys.

```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```

### Parameters

*lpszKey*<br/>
Specifies the name of the key to delete. This name must be a subkey of [m_hKey](#m_hkey).

### Return Value

If successful, returns ERROR_SUCCESS; otherwise, a non-zero error value defined in WINERROR.H.

### Remarks

If the key has subkeys, you must call this method to delete the key.

## <a name="setbinaryvalue"></a> CRegKey::SetBinaryValue

Call this method to set the binary value of the registry key.

```
LONG SetBinaryValue(
    LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*pValue*<br/>
Pointer to a buffer containing the data to be stored with the specified value name.

*nBytes*<br/>
Specifies the size, in bytes, of the information pointed to by the *pValue* parameter.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method uses [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) to write the value to the registry.

## <a name="setdwordvalue"></a> CRegKey::SetDWORDValue

Call this method to set the DWORD value of the registry key.

```
LONG SetDWORDValue(LPCTSTR pszValueName, DWORD dwValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*dwValue*<br/>
The DWORD data to be stored with the specified value name.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method uses [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) to write the value to the registry.

## <a name="setguidvalue"></a> CRegKey::SetGUIDValue

Call this method to set the GUID value of the registry key.

```
LONG SetGUIDValue(LPCTSTR pszValueName, REFGUID guidValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*guidValue*<br/>
Reference to the GUID to be stored with the specified value name.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method makes use of `CRegKey::SetStringValue` and converts the GUID into a string using [StringFromGUID2](/windows/win32/api/combaseapi/nf-combaseapi-stringfromguid2).

## <a name="setkeyvalue"></a> CRegKey::SetKeyValue

Call this method to store data in a specified value field of a specified key.

```
LONG SetKeyValue(
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```

### Parameters

*lpszKeyName*<br/>
Specifies the name of the key to be created or opened. This name must be a subkey of [m_hKey](#m_hkey).

*lpszValue*<br/>
Specifies the data to be stored. This parameter must be non-NULL.

*lpszValueName*<br/>
Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.

### Return Value

If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.

### Remarks

Call this method to create or open the *lpszKeyName* key and store the *lpszValue* data in the *lpszValueName* value field.

## <a name="setkeysecurity"></a> CRegKey::SetKeySecurity

Call this method to set the security of the registry key.

```
LONG SetKeySecurity(SECURITY_INFORMATION si, PSECURITY_DESCRIPTOR psd) throw();
```

### Parameters

*si*<br/>
Specifies the components of the security descriptor to set. The value can be a combination of the following values:

|Value|Meaning|
|-----------|-------------|
|DACL_SECURITY_INFORMATION|Sets the key's discretionary access-control list (DACL). The key must have WRITE_DAC access, or the calling process must be the object's owner.|
|GROUP_SECURITY_INFORMATION|Sets the key's primary group security identifier (SID). The key must have WRITE_OWNER access, or the calling process must be the object's owner.|
|OWNER_SECURITY_INFORMATION|Sets the key's owner SID. The key must have WRITE_OWNER access, or the calling process must be the object's owner or have the SE_TAKE_OWNERSHIP_NAME privilege enabled.|
|SACL_SECURITY_INFORMATION|Sets the key's system access-control list (SACL). The key must have ACCESS_SYSTEM_SECURITY access. The proper way to get this access is to enable the SE_SECURITY_NAME [privilege](/windows/win32/secauthz/privileges) in the caller's current access token, open the handle for ACCESS_SYSTEM_SECURITY access, and then disable the privilege.|

*psd*<br/>
Pointer to a [SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor) structure that specifies the security attributes to set for the specified key.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

Sets the key's security attributes. See [RegSetKeySecurity](/windows/win32/api/winreg/nf-winreg-regsetkeysecurity) for more details.

## <a name="setmultistringvalue"></a> CRegKey::SetMultiStringValue

Call this method to set the multistring value of the registry key.

```
LONG SetMultiStringValue(LPCTSTR pszValueName, LPCTSTR pszValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*pszValue*<br/>
Pointer to the multistring data to be stored with the specified value name. A multistring is an array of null-terminated strings, terminated by two null characters.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method uses [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) to write the value to the registry.

## <a name="setqwordvalue"></a> CRegKey::SetQWORDValue

Call this method to set the QWORD value of the registry key.

```
LONG SetQWORDValue(LPCTSTR pszValueName, ULONGLONG qwValue) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*qwValue*<br/>
The QWORD data to be stored with the specified value name.

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method uses [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) to write the value to the registry.

## <a name="setstringvalue"></a> CRegKey::SetStringValue

Call this method to set the string value of the registry key.

```
LONG SetStringValue(
    LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.

*pszValue*<br/>
Pointer to the string data to be stored with the specified value name.

*dwType*<br/>
The type of the string to write to the registry: either REG_SZ (the default) or REG_EXPAND_SZ (for multistrings).

### Return Value

If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.

### Remarks

This method uses [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) to write the value to the registry.

## <a name="setvalue"></a> CRegKey::SetValue

Call this method to store data in the specified value field of [m_hKey](#m_hkey). Earlier versions of this method are no longer supported and are marked as ATL_DEPRECATED.

```
LONG SetValue(
    LPCTSTR pszValueName,
    DWORD dwType,
    const void* pValue,
    ULONG nBytes) throw();

static LONG WINAPI SetValue(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL);

ATL_DEPRECATED LONG SetValue(
    DWORD dwValue,
    LPCTSTR lpszValueName);

ATL_DEPRECATED LONG SetValue(
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL,
    bool bMulti = false,
    int nValueLen = -1);
```

### Parameters

*pszValueName*<br/>
Pointer to a string containing the name of the value to set. If a value with this name is not already present in the key, the method adds it to the key. If *pszValueName* is NULL or an empty string, "", the method sets the type and data for the key's unnamed or default value.

*dwType*<br/>
Specifies a code indicating the type of data pointed to by the *pValue* parameter.

*pValue*<br/>
Pointer to a buffer containing the data to be stored with the specified value name.

*nBytes*<br/>
Specifies the size, in bytes, of the information pointed to by the *pValue* parameter. If the data is of type REG_SZ, REG_EXPAND_SZ, or REG_MULTI_SZ, *nBytes* must include the size of the terminating null character.

*hKeyParent*<br/>
The handle of an open key.

*lpszKeyName*<br/>
Specifies the name of a key to be created or opened. This name must be a subkey of *hKeyParent*.

*lpszValue*<br/>
Specifies the data to be stored. This parameter must be non-NULL.

*lpszValueName*<br/>
Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.

*dwValue*<br/>
Specifies the data to be stored.

*bMulti*<br/>
If false, indicates the string is of type REG_SZ. If true, indicates the string is a multistring of type REG_MULTI_SZ.

*nValueLen*<br/>
If *bMulti* is true, *nValueLen* is the length of the *lpszValue* string in characters. If *bMulti* is false, a value of -1 indicates that the method will calculate the length automatically.

### Return Value

If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.

### Remarks

The two original versions of `SetValue` are marked as ATL_DEPRECATED and should no longer be used. The compiler will issue a warning if these forms are used.

The third method calls [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw).

## See also

[DCOM Sample](../../overview/visual-cpp-samples.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
