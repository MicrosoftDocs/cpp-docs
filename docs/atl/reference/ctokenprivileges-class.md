---
title: "CTokenPrivileges Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CTokenPrivileges"
  - "CTokenPrivileges"
  - "ATL.CTokenPrivileges"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTokenPrivileges class"
ms.assetid: 89590105-f001-4014-870d-142926091231
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
# CTokenPrivileges Class
This class is a wrapper for the **TOKEN_PRIVILEGES** structure.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CTokenPrivileges
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenPrivileges::CTokenPrivileges](#ctokenprivileges__ctokenprivileges)|The constructor.|  
|[CTokenPrivileges::~CTokenPrivileges](#ctokenprivileges___dtorctokenprivileges)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenPrivileges::Add](#ctokenprivileges__add)|Adds one or more privileges to the `CTokenPrivileges` object.|  
|[CTokenPrivileges::Delete](#ctokenprivileges__delete)|Deletes a privilege from the `CTokenPrivileges` object.|  
|[CTokenPrivileges::DeleteAll](#ctokenprivileges__deleteall)|Deletes all privileges from the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetCount](#ctokenprivileges__getcount)|Returns the number of privilege entries in the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetDisplayNames](#ctokenprivileges__getdisplaynames)|Retrieves display names for the privileges contained in the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetLength](#ctokenprivileges__getlength)|Returns the buffer size in bytes required to hold the **TOKEN_PRIVILEGES** structure represented by the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetLuidsAndAttributes](#ctokenprivileges__getluidsandattributes)|Retrieves the locally unique identifiers (LUIDs) and attribute flags from the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetNamesAndAttributes](#ctokenprivileges__getnamesandattributes)|Retrieves the privilege names and attribute flags from the `CTokenPrivileges` object.|  
|[CTokenPrivileges::GetPTOKEN_PRIVILEGES](#ctokenprivileges__getptoken_privileges)|Returns a pointer to the **TOKEN_PRIVILEGES** structure.|  
|[CTokenPrivileges::LookupPrivilege](#ctokenprivileges__lookupprivilege)|Retrieves the attribute associated with a given privilege name.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenPrivileges::operator const TOKEN_PRIVILEGES *](#ctokenprivileges__operator_const_token_privileges__star)|Casts a value to a pointer to the **TOKEN_PRIVILEGES** structure.|  
|[CTokenPrivileges::operator =](#ctokenprivileges__operator_eq)|Assignment operator.|  
  
## Remarks  
 An [access token](http://msdn.microsoft.com/library/windows/desktop/aa374909) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows NT or Windows 2000 system.  
  
 The access token is used to describe the various security privileges granted to each user. A privilege consists of a 64-bit number called a locally unique identifier ( [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261)) and a descriptor string.  
  
 The `CTokenPrivileges` class is a wrapper for the [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure and contains 0 or more privileges. Privileges can be added, deleted, or queried using the supplied class methods.  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="ctokenprivileges__add"></a>  CTokenPrivileges::Add  
 Adds one or more privileges to the `CTokenPrivileges` access token object.  
  
```
bool Add(LPCTSTR pszPrivilege,  bool bEnable) throw(...);

    void Add(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```  
  
### Parameters  
 `pszPrivilege`  
 Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file.  
  
 `bEnable`  
 If true, the privilege is enabled. If false, the privilege is disabled.  
  
 `rPrivileges`  
 Reference to a [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure. The privileges and attributes are copied from this structure and added to the `CTokenPrivileges` object.  
  
### Return Value  
 The first form of this method returns true if the privileges are successfully added, false otherwise.  
  
##  <a name="ctokenprivileges__ctokenprivileges"></a>  CTokenPrivileges::CTokenPrivileges  
 The constructor.  
  
```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(...);

    CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `CTokenPrivileges` object to assign to the new object.  
  
 `rPrivileges`  
 The [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure to assign to the new `CTokenPrivileges` object.  
  
### Remarks  
 The `CTokenPrivileges` object can optionally be created using a **TOKEN_PRIVILEGES** structure or a previously defined `CTokenPrivileges` object.  
  
##  <a name="ctokenprivileges___dtorctokenprivileges"></a>  CTokenPrivileges::~CTokenPrivileges  
 The destructor.  
  
```
virtual ~CTokenPrivileges() throw();
```  
  
### Remarks  
 The destructor frees all allocated resources.  
  
##  <a name="ctokenprivileges__delete"></a>  CTokenPrivileges::Delete  
 Deletes a privilege from the `CTokenPrivileges` access token object.  
  
```
bool Delete(LPCTSTR pszPrivilege) throw();
```  
  
### Parameters  
 `pszPrivilege`  
 Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file. For example, this parameter could specify the constant SE_SECURITY_NAME, or its corresponding string, "SeSecurityPrivilege."  
  
### Return Value  
 Returns true if the privilege was successfully deleted, false otherwise.  
  
### Remarks  
 This method is useful as a tool for creating restricted tokens under Windows 2000.  
  
##  <a name="ctokenprivileges__deleteall"></a>  CTokenPrivileges::DeleteAll  
 Deletes all privileges from the `CTokenPrivileges` access token object.  
  
```
void DeleteAll() throw();
```  
  
### Remarks  
 Deletes all privileges contained in the `CTokenPrivileges` access token object.  
  
##  <a name="ctokenprivileges__getdisplaynames"></a>  CTokenPrivileges::GetDisplayNames  
 Retrieves display names for the privileges contained in the `CTokenPrivileges` access token object.  
  
```
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```  
  
### Parameters  
 `pDisplayNames`  
 A pointer to an array of `CString` objects. **CNames** is defined as a typedef: **CTokenPrivileges::CAtlArray\<CString>**.  
  
### Remarks  
 The parameter `pDisplayNames` is a pointer to an array of `CString` objects which will receive the display names corresponding to the privileges contained in the `CTokenPrivileges` object. This method retrieves display names only for the privileges specified in the Defined Privileges section of WINNT.H.  
  
 This method retrieves a displayable name: for example, if the attribute name is SE_REMOTE_SHUTDOWN_NAME, the displayable name is "Force shutdown from a remote system." To obtain the system name, use [CTokenPrivileges::GetNamesAndAttributes](#ctokenprivileges__getnamesandattributes).  
  
##  <a name="ctokenprivileges__getcount"></a>  CTokenPrivileges::GetCount  
 Returns the number of privilege entries in the `CTokenPrivileges` object.  
  
```
UINT GetCount() const throw();
```  
  
### Return Value  
 Returns the number of privileges contained in the `CTokenPrivileges` object.  
  
##  <a name="ctokenprivileges__getlength"></a>  CTokenPrivileges::GetLength  
 Returns the length of the `CTokenPrivileges` object.  
  
```
UINT GetLength() const throw();
```  
  
### Return Value  
 Returns the number of bytes required to hold a **TOKEN_PRIVILEGES** structure represented by the `CTokenPrivileges` object, including all of the privilege entries it contains.  
  
##  <a name="ctokenprivileges__getluidsandattributes"></a>  CTokenPrivileges::GetLuidsAndAttributes  
 Retrieves the locally unique identifiers (LUIDs) and attribute flags from the `CTokenPrivileges` object.  
  
```
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```  
  
### Parameters  
 `pPrivileges`  
 Pointer to an array of [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261) objects. **CLUIDArray** is a typedef defined as **CAtlArray\<LUID> CLUIDArray**.  
  
 `pAttributes`  
 Pointer to an array of DWORD objects. If this parameter is omitted or NULL, the attributes are not retrieved. **CAttributes** is a typedef defined as **CAtlArray \<DWORD> CAttributes**.  
  
### Remarks  
 This method will enumerate all of the privileges contained in the `CTokenPrivileges` access token object and place the individual LUIDs and (optionally) the attribute flags into array objects.  
  
##  <a name="ctokenprivileges__getnamesandattributes"></a>  CTokenPrivileges::GetNamesAndAttributes  
 Retrieves the name and attribute flags from the `CTokenPrivileges` object.  
  
```
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```  
  
### Parameters  
 *pNames*  
 Pointer to an array of `CString` objects. **CNames** is a typedef defined as **CAtlArray \<CString> CNames**.  
  
 `pAttributes`  
 Pointer to an array of DWORD objects. If this parameter is omitted or NULL, the attributes are not retrieved. **CAttributes** is a typedef defined as **CAtlArray \<DWORD> CAttributes**.  
  
### Remarks  
 This method will enumerate all of the privileges contained in the `CTokenPrivileges` object, placing the name and (optionally) the attribute flags into array objects.  
  
 This method retrieves the attribute name, rather than the displayable name: for example, if the attribute name is SE_REMOTE_SHUTDOWN_NAME, the system name is "SeRemoteShutdownPrivilege." To obtain the displayable name, use the method [CTokenPrivileges::GetDisplayNames](#ctokenprivileges__getdisplaynames).  
  
##  <a name="ctokenprivileges__getptoken_privileges"></a>  CTokenPrivileges::GetPTOKEN_PRIVILEGES  
 Returns a pointer to the **TOKEN_PRIVILEGES** structure.  
  
```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```  
  
### Return Value  
 Returns a pointer to the [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure.  
  
##  <a name="ctokenprivileges__lookupprivilege"></a>  CTokenPrivileges::LookupPrivilege  
 Retrieves the attribute associated with a given privilege name.  
  
```
bool LookupPrivilege(LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```  
  
### Parameters  
 `pszPrivilege`  
 Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file. For example, this parameter could specify the constant SE_SECURITY_NAME, or its corresponding string, "SeSecurityPrivilege."  
  
 `pdwAttributes`  
 Pointer to a variable that receives the attributes.  
  
### Return Value  
 Returns true if the attribute is successfully retrieved, false otherwise.  
  
##  <a name="ctokenprivileges__operator_eq"></a>  CTokenPrivileges::operator =  
 Assignment operator.  
  
```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);

    CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```  
  
### Parameters  
 `rPrivileges`  
 The [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure to assign to the `CTokenPrivileges` object.  
  
 `rhs`  
 The `CTokenPrivileges` object to assign to the object.  
  
### Return Value  
 Returns the updated `CTokenPrivileges` object.  
  
##  <a name="ctokenprivileges__operator_const_token_privileges__star"></a>  CTokenPrivileges::operator const TOKEN_PRIVILEGES *  
 Casts a value to a pointer to the **TOKEN_PRIVILEGES** structure.  
  
```operator const TOKEN_PRIVILEGES *() const throw(...);
```  
  
### Remarks  
 Casts a value to a pointer to the [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) structure.  
  
## See Also  
 [Security Sample](../../visual-cpp-samples.md)   
 [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630)   
 [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261)   
 [LUID_AND_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379263)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)
