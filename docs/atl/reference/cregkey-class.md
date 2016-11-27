---
title: "CRegKey Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRegKey"
  - "ATL::CRegKey"
  - "ATL.CRegKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRegKey class"
  - "ATL, registry"
  - "registry, deleting values"
  - "registry, writing to"
  - "registry, deleting keys"
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
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
# CRegKey Class
This class provides methods for manipulating entries in the system registry.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CRegKey
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRegKey::CRegKey](#cregkey__cregkey)|The constructor.|  
|[CRegKey::~CRegKey](#cregkey___dtorcregkey)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRegKey::Attach](#cregkey__attach)|Call this method to attach an HKEY to the `CRegKey` object by setting the [m_hKey](#cregkey__m_hkey) member handle to `hKey`.|  
|[CRegKey::Close](#cregkey__close)|Call this method to release the [m_hKey](#cregkey__m_hkey) member handle and set it to NULL.|  
|[CRegKey::Create](#cregkey__create)|Call this method to create the specified key, if it does not exist as a subkey of `hKeyParent`.|  
|[CRegKey::DeleteSubKey](#cregkey__deletesubkey)|Call this method to remove the specified key from the registry.|  
|[CRegKey::DeleteValue](#cregkey__deletevalue)|Call this method to remove a value field from [m_hKey](#cregkey__m_hkey).|  
|[CRegKey::Detach](#cregkey__detach)|Call this method to detach the [m_hKey](#cregkey__m_hkey) member handle from the `CRegKey` object and set `m_hKey` to NULL.|  
|[CRegKey::EnumKey](#cregkey__enumkey)|Call this method to enumerate the subkeys of the open registry key.|  
|[CRegKey::Flush](#cregkey__flush)|Call this method to write all of the attributes of the open registry key into the registry.|  
|[CRegKey::GetKeySecurity](#cregkey__getkeysecurity)|Call this method to retrieve a copy of the security descriptor protecting the open registry key.|  
|[CRegKey::NotifyChangeKeyValue](#cregkey__notifychangekeyvalue)|This method notifies the caller about changes to the attributes or contents of the open registry key.|  
|[CRegKey::Open](#cregkey__open)|Call this method to open the specified key and set [m_hKey](#cregkey__m_hkey) to the handle of this key.|  
|[CRegKey::QueryBinaryValue](#cregkey__querybinaryvalue)|Call this method to retrieve the binary data for a specified value name.|  
|[CRegKey::QueryDWORDValue](#cregkey__querydwordvalue)|Call this method to retrieve the DWORD data for a specified value name.|  
|[CRegKey::QueryGUIDValue](#cregkey__queryguidvalue)|Call this method to retrieve the GUID data for a specified value name.|  
|[CRegKey::QueryMultiStringValue](#cregkey__querymultistringvalue)|Call this method to retrieve the multistring data for a specified value name.|  
|[CRegKey::QueryQWORDValue](#cregkey__queryqwordvalue)|Call this method to retrieve the QWORD data for a specified value name.|  
|[CRegKey::QueryStringValue](#cregkey__querystringvalue)|Call this method to retrieve the string data for a specified value name.|  
|[CRegKey::QueryValue](#cregkey__queryvalue)|Call this method to retrieve the data for the specified value field of [m_hKey](#cregkey__m_hkey). Earlier versions of this method are no longer supported and are marked as **ATL_DEPRECATED**.|  
|[CRegKey::RecurseDeleteKey](#cregkey__recursedeletekey)|Call this method to remove the specified key from the registry and explicitly remove any subkeys.|  
|[CRegKey::SetBinaryValue](#cregkey__setbinaryvalue)|Call this method to set the binary value of the registry key.|  
|[CRegKey::SetDWORDValue](#cregkey__setdwordvalue)|Call this method to set the DWORD value of the registry key.|  
|[CRegKey::SetGUIDValue](#cregkey__setguidvalue)|Call this method to set the GUID value of the registry key.|  
|[CRegKey::SetKeySecurity](#cregkey__setkeysecurity)|Call this method to set the security of the registry key.|  
|[CRegKey::SetKeyValue](#cregkey__setkeyvalue)|Call this method to store data in a specified value field of a specified key.|  
|[CRegKey::SetMultiStringValue](#cregkey__setmultistringvalue)|Call this method to set the multistring value of the registry key.|  
|[CRegKey::SetQWORDValue](#cregkey__setqwordvalue)|Call this method to set the QWORD value of the registry key.|  
|[CRegKey::SetStringValue](#cregkey__setstringvalue)|Call this method to set the string value of the registry key.|  
|[CRegKey::SetValue](#cregkey__setvalue)|Call this method to store data in the specified value field of [m_hKey](#cregkey__m_hkey). Earlier versions of this method are no longer supported and are marked as **ATL_DEPRECATED**.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CRegKey::operator HKEY](#cregkey__operator_hkey)|Converts a `CRegKey` object to an HKEY.|  
|[CRegKey::operator =](#cregkey__operator_eq)|Assignment operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CRegKey::m_hKey](#cregkey__m_hkey)|Contains a handle of the registry key associated with the `CRegKey` object.|  
|[CRegKey::m_pTM](#cregkey__m_ptm)|Pointer to `CAtlTransactionManager` object|  
  
## Remarks  
 `CRegKey` provides methods for creating and deleting keys and values in the system registry. The registry contains an installation-specific set of definitions for system components, such as software version numbers, logical-to-physical mappings of installed hardware, and COM objects.  
  
 `CRegKey` provides a programming interface to the system registry for a given machine. For example, to open a particular registry key, call `CRegKey::Open`. To retrieve or modify a data value, call `CRegKey::QueryValue` or `CRegKey::SetValue`, respectively. To close a key, call `CRegKey::Close`.  
  
 When you close a key, its registry data is written (flushed) to the hard disk. This process may take several seconds. If your application must explicitly write registry data to the hard disk, you can call the [RegFlushKey](http://msdn.microsoft.com/library/windows/desktop/ms724867) Win32 function. However, **RegFlushKey** uses many system resources and should be called only when absolutely necessary.  
  
> [!IMPORTANT]
>  Any methods that allow the caller to specify a registry location have the potential to read data that cannot be trusted. Methods that make use of [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) should take into consideration that this function does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="cregkey__attach"></a>  CRegKey::Attach  
 Call this method to attach an HKEY to the `CRegKey` object by setting the [m_hKey](#cregkey__m_hkey) member handle to `hKey`.  
  
```
void Attach(HKEY hKey) throw();
```  
  
### Parameters  
 `hKey`  
 The handle of a registry key.  
  
### Remarks  
 **Attach** will assert if `m_hKey` is non-NULL.  
  
##  <a name="cregkey__close"></a>  CRegKey::Close  
 Call this method to release the [m_hKey](#cregkey__m_hkey) member handle and set it to NULL.  
  
```
LONG Close() throw();
```  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise returns an error value.  
  
##  <a name="cregkey__create"></a>  CRegKey::Create  
 Call this method to create the specified key, if it does not exist as a subkey of `hKeyParent`.  
  
```
LONG Create(HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPTSTR lpszClass = REG_NONE,
    DWORD dwOptions = REG_OPTION_NON_VOLATILE,
    REGSAM samDesired = KEY_READ | KEY_WRITE,
    LPSECURITY_ATTRIBUTES lpSecAttr = NULL,
    LPDWORD lpdwDisposition = NULL) throw();
```  
  
### Parameters  
 `hKeyParent`  
 The handle of an open key.  
  
 `lpszKeyName`  
 Specifies the name of a key to be created or opened. This name must be a subkey of `hKeyParent`.  
  
 `lpszClass`  
 Specifies the class of the key to be created or opened. The default value is REG_NONE.  
  
 `dwOptions`  
 Options for the key. The default value is REG_OPTION_NON_VOLATILE. For a list of possible values and descriptions, see [RegCreateKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724844) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `samDesired`  
 The security access for the key. The default value is KEY_READ &#124; KEY_WRITE. For a list of possible values and descriptions, see **RegCreateKeyEx**.  
  
 *lpSecAttr*  
 A pointer to a [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) structure that indicates whether the handle of the key can be inherited by a child process. By default, this parameter is NULL (meaning the handle cannot be inherited).  
  
 *lpdwDisposition*  
 [out] If non-NULL, retrieves either REG_CREATED_NEW_KEY (if the key did not exist and was created) or REG_OPENED_EXISTING_KEY (if the key existed and was opened).  
  
### Return Value  
 If successful, returns ERROR_SUCCESS and opens the key. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 **Create** sets the [m_hKey](#cregkey__m_hkey) member to the handle of this key.  
  
##  <a name="cregkey__cregkey"></a>  CRegKey::CRegKey  
 The constructor.  
  
```
CRegKey() throw();
CRegKey(CRegKey& key) throw();
explicit CRegKey(HKEY   hKey) throw();
CRegKey(CAtlTransactionManager* pTM) throw();
```  
  
### Parameters  
 `key`  
 A reference to a `CRegKey` object.  
  
 `hKey`  
 A handle to a registry key.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 Creates a new `CRegKey` object. The object can be created from an existing `CRegKey` object, or from a handle to a registry key.  
  
##  <a name="cregkey___dtorcregkey"></a>  CRegKey::~CRegKey  
 The destructor.  
  
```
~CRegKey() throw();
```  
  
### Remarks  
 The destructor releases `m_hKey`.  
  
##  <a name="cregkey__deletesubkey"></a>  CRegKey::DeleteSubKey  
 Call this method to remove the specified key from the registry.  
  
```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```  
  
### Parameters  
 `lpszSubKey`  
 Specifies the name of the key to delete. This name must be a subkey of [m_hKey](#cregkey__m_hkey).  
  
### Return Value  
 If successful, returns ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 `DeleteSubKey` can only delete a key that has no subkeys. If the key has subkeys, call [RecurseDeleteKey](#cregkey__recursedeletekey) instead.  
  
##  <a name="cregkey__deletevalue"></a>  CRegKey::DeleteValue  
 Call this method to remove a value field from [m_hKey](#cregkey__m_hkey).  
  
```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```  
  
### Parameters  
 `lpszValue`  
 Specifies the value field to remove.  
  
### Return Value  
 If successful, returns ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
##  <a name="cregkey__detach"></a>  CRegKey::Detach  
 Call this method to detach the [m_hKey](#cregkey__m_hkey) member handle from the `CRegKey` object and set `m_hKey` to NULL.  
  
```
HKEY Detach() throw();
```  
  
### Return Value  
 The HKEY associated with the `CRegKey` object.  
  
##  <a name="cregkey__enumkey"></a>  CRegKey::EnumKey  
 Call this method to enumerate the subkeys of the open registry key.  
  
```
LONG EnumKey(DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```  
  
### Parameters  
 `iIndex`  
 The subkey index. This parameter should be zero for the first call and then incremented for subsequent calls  
  
 `pszName`  
 Pointer to a buffer that receives the name of the subkey, including the terminating null character. Only the name of the subkey is copied to the buffer, not the full key hierarchy.  
  
 *pnNameLength*  
 Pointer to a variable that specifies the size, in TCHARs, of the buffer specified by the `pszName` parameter. This size should include the terminating null character. When the method returns, the variable pointed to by *pnNameLength* contains the number of characters stored in the buffer. The count returned does not include the terminating null character.  
  
 *pftLastWriteTime*  
 Pointer to a variable that receives the time the enumerated subkey was last written to.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 To enumerate the subkeys, call `CRegKey::EnumKey` with an index of zero. Increment the index value and repeat until the method returns ERROR_NO_MORE_ITEMS. For more information, see [RegEnumKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724862) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cregkey__flush"></a>  CRegKey::Flush  
 Call this method to write all of the attributes of the open registry key into the registry.  
  
```
LONG Flush() throw();
```  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 For more information, see [RegEnumFlush](http://msdn.microsoft.com/library/windows/desktop/ms724867) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cregkey__getkeysecurity"></a>  CRegKey::GetKeySecurity  
 Call this method to retrieve a copy of the security descriptor protecting the open registry key.  
  
```
LONG GetKeySecurity(SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```  
  
### Parameters  
 `si`  
 The [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) value that indicates the requested security information.  
  
 `psd`  
 A pointer to a buffer that receives a copy of the requested security descriptor.  
  
 `pnBytes`  
 The size, in bytes, of the buffer pointed to by `psd`.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code is defined in WINERROR.H.  
  
### Remarks  
 For more information, see [RegGetKeySecurity](http://msdn.microsoft.com/library/windows/desktop/aa379313).  
  
##  <a name="cregkey__m_hkey"></a>  CRegKey::m_hKey  
 Contains a handle of the registry key associated with the `CRegKey` object.  
  
```
HKEY m_hKey;
```  
  
##  <a name="cregkey__m_ptm"></a>  CRegKey::m_pTM  
 Pointer to a `CAtlTransactionManager` object.  
  
```
CAtlTransactionManager* m_pTM;
```  
  
### Remarks  
  
##  <a name="cregkey__notifychangekeyvalue"></a>  CRegKey::NotifyChangeKeyValue  
 This method notifies the caller about changes to the attributes or contents of the open registry key.  
  
```
LONG NotifyChangeKeyValue(BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```  
  
### Parameters  
 *bWatchSubtree*  
 Specifies a flag that indicates whether to report changes in the specified key and all of its subkeys or only in the specified key. If this parameter is TRUE, the method reports changes in the key and its subkeys. If the parameter is FALSE, the method reports changes only in the key.  
  
 *dwNotifyFilter*  
 Specifies a set of flags that control which changes should be reported. This parameter can be a combination of the following values:  
  
|Value|Meaning|  
|-----------|-------------|  
|REG_NOTIFY_CHANGE_NAME|Notify the caller if a subkey is added or deleted.|  
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notify the caller of changes to the attributes of the key, such as the security descriptor information.|  
|REG_NOTIFY_CHANGE_LAST_SET|Notify the caller of changes to a value of the key. This can include adding or deleting a value, or changing an existing value.|  
|REG_NOTIFY_CHANGE_SECURITY|Notify the caller of changes to the security descriptor of the key.|  
  
 `hEvent`  
 Handle to an event. If the *bAsync* parameter is TRUE, the method returns immediately and changes are reported by signaling this event. If `bAsync` is FALSE, `hEvent` is ignored.  
  
 `bAsync`  
 Specifies a flag that indicates how the method reports changes. If this parameter is TRUE, the method returns immediately and reports changes by signaling the specified event. When this parameter is FALSE, the method does not return until a change has occurred. If `hEvent` does not specify a valid event, the `bAsync` parameter cannot be TRUE.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
  
> [!NOTE]
>  This method does not notify the caller if the specified key is deleted.  
  
 For more details and a sample program, see [RegNotifyChangeKeyValue](http://msdn.microsoft.com/library/windows/desktop/ms724892).  
  
##  <a name="cregkey__open"></a>  CRegKey::Open  
 Call this method to open the specified key and set [m_hKey](#cregkey__m_hkey) to the handle of this key.  
  
```
LONG Open(HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```  
  
### Parameters  
 `hKeyParent`  
 The handle of an open key.  
  
 `lpszKeyName`  
 Specifies the name of a key to be created or opened. This name must be a subkey of `hKeyParent`.  
  
 `samDesired`  
 The security access for the key. The default value is KEY_ALL_ACCESS. For a list of possible values and descriptions, see [RegCreateKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724844) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise, a non-zero error value defined in WINERROR.H.  
  
### Remarks  
 If the `lpszKeyName` parameter is NULL or points to an empty string, **Open** opens a new handle of the key identified by `hKeyParent`, but does not close any previously opened handle.  
  
 Unlike [CRegKey::Create](#cregkey__create), **Open** will not create the specified key if it does not exist.  
  
##  <a name="cregkey__operator_hkey"></a>  CRegKey::operator HKEY  
 Converts a `CRegKey` object to an HKEY.  
  
```operator HKEY() const throw();
```  
  
##  <a name="cregkey__operator_eq"></a>  CRegKey::operator =  
 Assignment operator.  
  
```
CRegKey& operator= (CRegKey& key) throw();
```  
  
### Parameters  
 `key`  
 The key to copy.  
  
### Return Value  
 Returns a reference to the new key.  
  
### Remarks  
 This operator detaches `key` from its current object and assigns it to the `CRegKey` object instead.  
  
##  <a name="cregkey__querybinaryvalue"></a>  CRegKey::QueryBinaryValue  
 Call this method to retrieve the binary data for a specified value name.  
  
```
LONG QueryBinaryValue(LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `pValue`  
 Pointer to a buffer that receives the value's data.  
  
 `pnBytes`  
 Pointer to a variable that specifies the size, in bytes, of the buffer pointed to by the `pValue` parameter. When the method returns, this variable contains the size of the data copied to the buffer.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_BINARY, ERROR_INVALID_DATA is returned.  
  
### Remarks  
 This method makes use of **RegQueryValueEx** and confirms that the correct type of data is returned. See [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) for more details.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__querydwordvalue"></a>  CRegKey::QueryDWORDValue  
 Call this method to retrieve the DWORD data for a specified value name.  
  
```
LONG QueryDWORDValue(LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `dwValue`  
 Pointer to a buffer that receives the DWORD.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_DWORD, ERROR_INVALID_DATA is returned.  
  
### Remarks  
 This method makes use of **RegQueryValueEx** and confirms that the correct type of data is returned. See [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) for more details.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__queryguidvalue"></a>  CRegKey::QueryGUIDValue  
 Call this method to retrieve the GUID data for a specified value name.  
  
```
LONG QueryGUIDValue(LPCTSTR pszValueName,
    GUID& guidValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `guidValue`  
 Pointer to a variable that receives the GUID.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not a valid GUID, ERROR_INVALID_DATA is returned.  
  
### Remarks  
 This method makes use of `CRegKey::QueryStringValue` and converts the string into a GUID using [CLSIDFromString](http://msdn.microsoft.com/library/windows/desktop/ms680589).  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted.  
  
##  <a name="cregkey__querymultistringvalue"></a>  CRegKey::QueryMultiStringValue  
 Call this method to retrieve the multistring data for a specified value name.  
  
```
LONG QueryMultiStringValue(LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `pszValue`  
 Pointer to a buffer that receives the multistring data. A multistring is an array of null-terminated strings, terminated by two null characters.  
  
 `pnChars`  
 The size, in TCHARs, of the buffer pointed to by `pszValue`. When the method returns, `pnChars` contains the size, in TCHARs, of the multistring retrieved, including a terminating null character.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_MULTI_SZ, ERROR_INVALID_DATA is returned.  
  
### Remarks  
 This method makes use of **RegQueryValueEx** and confirms that the correct type of data is returned. See [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) for more details.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__queryqwordvalue"></a>  CRegKey::QueryQWORDValue  
 Call this method to retrieve the QWORD data for a specified value name.  
  
```
LONG QueryQWORDValue(LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `qwValue`  
 Pointer to a buffer that receives the QWORD.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_QWORD, ERROR_INVALID_DATA is returned.  
  
### Remarks  
 This method makes use of **RegQueryValueEx** and confirms that the correct type of data is returned. See [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) for more details.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__querystringvalue"></a>  CRegKey::QueryStringValue  
 Call this method to retrieve the string data for a specified value name.  
  
```
LONG QueryStringValue(LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query.  
  
 `pszValue`  
 Pointer to a buffer that receives the string data.  
  
 `pnChars`  
 The size, in TCHARs, of the buffer pointed to by `pszValue`. When the method returns, `pnChars` contains the size, in TCHARs, of the string retrieved, including a terminating null character.  
  
### Return Value  
 If the method succeeds, ERROR_SUCCESS is returned. If the method fails to read a value, it returns a nonzero error code defined in WINERROR.H. If the data referenced is not of type REG_SZ, ERROR_INVALID_DATA is returned. If the method returns ERROR_MORE_DATA, `pnChars` equals zero, not the required buffer size in bytes.  
  
### Remarks  
 This method makes use of **RegQueryValueEx** and confirms that the correct type of data is returned. See [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) for more details.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) function used by this method does not explicitly handle strings which are NULL terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__queryvalue"></a>  CRegKey::QueryValue  
 Call this method to retrieve the data for the specified value field of [m_hKey](#cregkey__m_hkey). Earlier versions of this method are no longer supported and are marked as **ATL_DEPRECATED**.  
  
```
LONG QueryValue(LPCTSTR pszValueName,
    DWORD* pdwType,
    void* pData,
    ULONG* pnBytes) throw();
ATL_DEPRECATED LONG QueryValue(
    DWORD& dwValue,
    LPCTSTR lpszValueName);

    ATL_DEPRECATED LONG QueryValue(LPTSTR szValue,
    LPCTSTR lpszValueName,
    DWORD* pdwCount);
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a null-terminated string containing the name of the value to query. If `pszValueName` is NULL or an empty string, "", the method retrieves the type and data for the key's unnamed or default value, if any.  
  
 `pdwType`  
 Pointer to a variable that receives a code indicating the type of data stored in the specified value. The `pdwType` parameter can be NULL if the type code is not required.  
  
 `pData`  
 Pointer to a buffer that receives the value's data. This parameter can be NULL if the data is not required.  
  
 `pnBytes`  
 Pointer to a variable that specifies the size, in bytes, of the buffer pointed to by the `pData` parameter. When the method returns, this variable contains the size of the data copied to *pData.*  
  
 `dwValue`  
 The value field's numerical data.  
  
 `lpszValueName`  
 Specifies the value field to be queried.  
  
 `szValue`  
 The value field's string data.  
  
 `pdwCount`  
 The size of the string data. Its value is initially set to the size of the `szValue` buffer.  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 The two original versions of `QueryValue` are no longer supported and are marked as **ATL_DEPRECATED**. The compiler will issue a warning if these forms are used.  
  
 The remaining method calls RegQueryValueEx.  
  
> [!IMPORTANT]
>  This method allows the caller to specify any registry location, potentially reading data which cannot be trusted. Also, the RegQueryValueEx function used by this method does not explicitly handle strings which are `NULL` terminated. Both conditions should be checked for by the calling code.  
  
##  <a name="cregkey__recursedeletekey"></a>  CRegKey::RecurseDeleteKey  
 Call this method to remove the specified key from the registry and explicitly remove any subkeys.  
  
```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```  
  
### Parameters  
 *lpszKey*  
 Specifies the name of the key to delete. This name must be a subkey of [m_hKey](#cregkey__m_hkey).  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise, a non-zero error value defined in WINERROR.H.  
  
### Remarks  
 If the key has subkeys, you must call this method to delete the key.  
  
##  <a name="cregkey__setbinaryvalue"></a>  CRegKey::SetBinaryValue  
 Call this method to set the binary value of the registry key.  
  
```
LONG SetBinaryValue(LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `pValue`  
 Pointer to a buffer containing the data to be stored with the specified value name.  
  
 `nBytes`  
 Specifies the size, in bytes, of the information pointed to by the `pValue` parameter.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method uses [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) to write the value to the registry.  
  
##  <a name="cregkey__setdwordvalue"></a>  CRegKey::SetDWORDValue  
 Call this method to set the DWORD value of the registry key.  
  
```
LONG SetDWORDValue(LPCTSTR pszValueName,  DWORD dwValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `dwValue`  
 The DWORD data to be stored with the specified value name.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method uses [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) to write the value to the registry.  
  
##  <a name="cregkey__setguidvalue"></a>  CRegKey::SetGUIDValue  
 Call this method to set the GUID value of the registry key.  
  
```
LONG SetGUIDValue(LPCTSTR pszValueName,  REFGUID guidValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `guidValue`  
 Reference to the GUID to be stored with the specified value name.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method makes use of `CRegKey::SetStringValue` and converts the GUID into a string using [StringFromGUID2](http://msdn.microsoft.com/library/windows/desktop/ms683893).  
  
##  <a name="cregkey__setkeyvalue"></a>  CRegKey::SetKeyValue  
 Call this method to store data in a specified value field of a specified key.  
  
```
LONG SetKeyValue(LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```  
  
### Parameters  
 `lpszKeyName`  
 Specifies the name of the key to be created or opened. This name must be a subkey of [m_hKey](#cregkey__m_hkey).  
  
 `lpszValue`  
 Specifies the data to be stored. This parameter must be non-NULL.  
  
 `lpszValueName`  
 Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 Call this method to create or open the `lpszKeyName` key and store the `lpszValue` data in the `lpszValueName` value field.  
  
##  <a name="cregkey__setkeysecurity"></a>  CRegKey::SetKeySecurity  
 Call this method to set the security of the registry key.  
  
```
LONG SetKeySecurity(SECURITY_INFORMATION si,  PSECURITY_DESCRIPTOR psd) throw();
```  
  
### Parameters  
 `si`  
 Specifies the components of the security descriptor to set. The value can be a combination of the following values:  
  
|Value|Meaning|  
|-----------|-------------|  
|DACL_SECURITY_INFORMATION|Sets the key's discretionary access-control list (DACL). The key must have WRITE_DAC access, or the calling process must be the object's owner.|  
|GROUP_SECURITY_INFORMATION|Sets the key's primary group security identifier (SID). The key must have WRITE_OWNER access, or the calling process must be the object's owner.|  
|OWNER_SECURITY_INFORMATION|Sets the key's owner SID. The key must have WRITE_OWNER access, or the calling process must be the object's owner or have the SE_TAKE_OWNERSHIP_NAME privilege enabled.|  
|SACL_SECURITY_INFORMATION|Sets the key's system access-control list (SACL). The key must have ACCESS_SYSTEM_SECURITY access. The proper way to get this access is to enable the SE_SECURITY_NAME [privilege](http://msdn.microsoft.com/library/windows/desktop/aa379306) in the caller's current access token, open the handle for ACCESS_SYSTEM_SECURITY access, and then disable the privilege.|  
  
 `psd`  
 Pointer to a [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561) structure that specifies the security attributes to set for the specified key.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 Sets the key's security attributes. See [RegSetKeySecurity](http://msdn.microsoft.com/library/windows/desktop/aa379314) for more details.  
  
##  <a name="cregkey__setmultistringvalue"></a>  CRegKey::SetMultiStringValue  
 Call this method to set the multistring value of the registry key.  
  
```
LONG SetMultiStringValue(LPCTSTR pszValueName,  LPCTSTR pszValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `pszValue`  
 Pointer to the multistring data to be stored with the specified value name. A multistring is an array of null-terminated strings, terminated by two null characters.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method uses [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) to write the value to the registry.  
  
##  <a name="cregkey__setqwordvalue"></a>  CRegKey::SetQWORDValue  
 Call this method to set the QWORD value of the registry key.  
  
```
LONG SetQWORDValue(LPCTSTR pszValueName,  ULONGLONG qwValue) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `qwValue`  
 The QWORD data to be stored with the specified value name.  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method uses [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) to write the value to the registry.  
  
##  <a name="cregkey__setstringvalue"></a>  CRegKey::SetStringValue  
 Call this method to set the string value of the registry key.  
  
```
LONG SetStringValue(LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present, the method adds it to the key.  
  
 `pszValue`  
 Pointer to the string data to be stored with the specified value name.  
  
 `dwType`  
 The type of the string to write to the registry: either REG_SZ (the default) or REG_EXPAND_SZ (for multistrings).  
  
### Return Value  
 If the method succeeds, the return value is ERROR_SUCCESS. If the method fails, the return value is a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 This method uses [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923\(v=vs.85\).aspx) to write the value to the registry.  
  
##  <a name="cregkey__setvalue"></a>  CRegKey::SetValue  
 Call this method to store data in the specified value field of [m_hKey](#cregkey__m_hkey). Earlier versions of this method are no longer supported and are marked as **ATL_DEPRECATED**.  
  
```
LONG SetValue(LPCTSTR pszValueName,
    DWORD dwType,
    const void* pValue,
    ULONG nBytes) throw();
static LONG WINAPI SetValue(HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL);

    ATL_DEPRECATED LONG SetValue(DWORD dwValue,
    LPCTSTR lpszValueName);

    ATL_DEPRECATED LONG SetValue(LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL,
    bool bMulti = false,
    int nValueLen = -1);
```  
  
### Parameters  
 `pszValueName`  
 Pointer to a string containing the name of the value to set. If a value with this name is not already present in the key, the method adds it to the key. If `pszValueName` is NULL or an empty string, "", the method sets the type and data for the key's unnamed or default value.  
  
 `dwType`  
 Specifies a code indicating the type of data pointed to by the `pValue` parameter.  
  
 `pValue`  
 Pointer to a buffer containing the data to be stored with the specified value name.  
  
 `nBytes`  
 Specifies the size, in bytes, of the information pointed to by the `pValue` parameter. If the data is of type REG_SZ, REG_EXPAND_SZ, or REG_MULTI_SZ, `nBytes` must include the size of the terminating null character.  
  
 `hKeyParent`  
 The handle of an open key.  
  
 `lpszKeyName`  
 Specifies the name of a key to be created or opened. This name must be a subkey of `hKeyParent`.  
  
 `lpszValue`  
 Specifies the data to be stored. This parameter must be non-NULL.  
  
 `lpszValueName`  
 Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.  
  
 `dwValue`  
 Specifies the data to be stored.  
  
 `bMulti`  
 If false, indicates the string is of type REG_SZ. If true, indicates the string is a multistring of type REG_MULTI_SZ.  
  
 `nValueLen`  
 If `bMulti` is true, `nValueLen` is the length of the *lpszValue* string in characters. If `bMulti` is false, a value of -1 indicates that the method will calculate the length automatically.  
  
### Return Value  
 If successful, returns ERROR_SUCCESS; otherwise, a nonzero error code defined in WINERROR.H.  
  
### Remarks  
 The two original versions of `SetValue` are marked as **ATL_DEPRECATED** and should no longer be used. The compiler will issue a warning if these forms are used.  
  
 The third method calls [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923).  
  
## See Also  
 [DCOM Sample](../../visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)
