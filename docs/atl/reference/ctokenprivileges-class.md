---
description: "Learn more about: CTokenPrivileges Class"
title: "CTokenPrivileges Class"
ms.date: "11/04/2016"
f1_keywords: ["CTokenPrivileges", "ATLSECURITY/ATL::CTokenPrivileges", "ATLSECURITY/ATL::CTokenPrivileges::CTokenPrivileges", "ATLSECURITY/ATL::CTokenPrivileges::Add", "ATLSECURITY/ATL::CTokenPrivileges::Delete", "ATLSECURITY/ATL::CTokenPrivileges::DeleteAll", "ATLSECURITY/ATL::CTokenPrivileges::GetCount", "ATLSECURITY/ATL::CTokenPrivileges::GetDisplayNames", "ATLSECURITY/ATL::CTokenPrivileges::GetLength", "ATLSECURITY/ATL::CTokenPrivileges::GetLuidsAndAttributes", "ATLSECURITY/ATL::CTokenPrivileges::GetNamesAndAttributes", "ATLSECURITY/ATL::CTokenPrivileges::GetPTOKEN_PRIVILEGES", "ATLSECURITY/ATL::CTokenPrivileges::LookupPrivilege"]
helpviewer_keywords: ["CTokenPrivileges class"]
ms.assetid: 89590105-f001-4014-870d-142926091231
---
# CTokenPrivileges Class

This class is a wrapper for the `TOKEN_PRIVILEGES` structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CTokenPrivileges
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CTokenPrivileges::CTokenPrivileges](#ctokenprivileges)|The constructor.|
|[CTokenPrivileges::~CTokenPrivileges](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTokenPrivileges::Add](#add)|Adds one or more privileges to the `CTokenPrivileges` object.|
|[CTokenPrivileges::Delete](#delete)|Deletes a privilege from the `CTokenPrivileges` object.|
|[CTokenPrivileges::DeleteAll](#deleteall)|Deletes all privileges from the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetCount](#getcount)|Returns the number of privilege entries in the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetDisplayNames](#getdisplaynames)|Retrieves display names for the privileges contained in the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetLength](#getlength)|Returns the buffer size in bytes required to hold the `TOKEN_PRIVILEGES` structure represented by the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetLuidsAndAttributes](#getluidsandattributes)|Retrieves the locally unique identifiers (LUIDs) and attribute flags from the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes)|Retrieves the privilege names and attribute flags from the `CTokenPrivileges` object.|
|[CTokenPrivileges::GetPTOKEN_PRIVILEGES](#getptoken_privileges)|Returns a pointer to the `TOKEN_PRIVILEGES` structure.|
|[CTokenPrivileges::LookupPrivilege](#lookupprivilege)|Retrieves the attribute associated with a given privilege name.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CTokenPrivileges::operator const TOKEN_PRIVILEGES *](#operator_const_token_privileges__star)|Casts a value to a pointer to the `TOKEN_PRIVILEGES` structure.|
|[CTokenPrivileges::operator =](#operator_eq)|Assignment operator.|

## Remarks

An [access token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

The access token is used to describe the various security privileges granted to each user. A privilege consists of a 64-bit number called a locally unique identifier ( [LUID](/windows/win32/api/winnt/ns-winnt-luid)) and a descriptor string.

The `CTokenPrivileges` class is a wrapper for the [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure and contains 0 or more privileges. Privileges can be added, deleted, or queried using the supplied class methods.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Requirements

**Header:** atlsecurity.h

## <a name="add"></a> CTokenPrivileges::Add

Adds one or more privileges to the `CTokenPrivileges` access token object.

```
bool Add(LPCTSTR pszPrivilege, bool bEnable) throw(...);
void Add(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### Parameters

*pszPrivilege*<br/>
Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file.

*bEnable*<br/>
If true, the privilege is enabled. If false, the privilege is disabled.

*rPrivileges*<br/>
Reference to a [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure. The privileges and attributes are copied from this structure and added to the `CTokenPrivileges` object.

### Return Value

The first form of this method returns true if the privileges are successfully added, false otherwise.

## <a name="ctokenprivileges"></a> CTokenPrivileges::CTokenPrivileges

The constructor.

```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(... );
CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```

### Parameters

*rhs*<br/>
The `CTokenPrivileges` object to assign to the new object.

*rPrivileges*<br/>
The [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure to assign to the new `CTokenPrivileges` object.

### Remarks

The `CTokenPrivileges` object can optionally be created using a `TOKEN_PRIVILEGES` structure or a previously defined `CTokenPrivileges` object.

## <a name="dtor"></a> CTokenPrivileges::~CTokenPrivileges

The destructor.

```
virtual ~CTokenPrivileges() throw();
```

### Remarks

The destructor frees all allocated resources.

## <a name="delete"></a> CTokenPrivileges::Delete

Deletes a privilege from the `CTokenPrivileges` access token object.

```
bool Delete(LPCTSTR pszPrivilege) throw();
```

### Parameters

*pszPrivilege*<br/>
Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file. For example, this parameter could specify the constant SE_SECURITY_NAME, or its corresponding string, "SeSecurityPrivilege."

### Return Value

Returns true if the privilege was successfully deleted, false otherwise.

### Remarks

This method is useful as a tool for creating restricted tokens.

## <a name="deleteall"></a> CTokenPrivileges::DeleteAll

Deletes all privileges from the `CTokenPrivileges` access token object.

```cpp
void DeleteAll() throw();
```

### Remarks

Deletes all privileges contained in the `CTokenPrivileges` access token object.

## <a name="getdisplaynames"></a> CTokenPrivileges::GetDisplayNames

Retrieves display names for the privileges contained in the `CTokenPrivileges` access token object.

```cpp
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```

### Parameters

*pDisplayNames*<br/>
A pointer to an array of `CString` objects. `CNames` is defined as a typedef: `CTokenPrivileges::CAtlArray<CString>`.

### Remarks

The parameter `pDisplayNames` is a pointer to an array of `CString` objects which will receive the display names corresponding to the privileges contained in the `CTokenPrivileges` object. This method retrieves display names only for the privileges specified in the Defined Privileges section of WINNT.H.

This method retrieves a displayable name: for example, if the attribute name is SE_REMOTE_SHUTDOWN_NAME, the displayable name is "Force shutdown from a remote system." To obtain the system name, use [CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes).

## <a name="getcount"></a> CTokenPrivileges::GetCount

Returns the number of privilege entries in the `CTokenPrivileges` object.

```
UINT GetCount() const throw();
```

### Return Value

Returns the number of privileges contained in the `CTokenPrivileges` object.

## <a name="getlength"></a> CTokenPrivileges::GetLength

Returns the length of the `CTokenPrivileges` object.

```
UINT GetLength() const throw();
```

### Return Value

Returns the number of bytes required to hold a `TOKEN_PRIVILEGES` structure represented by the `CTokenPrivileges` object, including all of the privilege entries it contains.

## <a name="getluidsandattributes"></a> CTokenPrivileges::GetLuidsAndAttributes

Retrieves the locally unique identifiers (LUIDs) and attribute flags from the `CTokenPrivileges` object.

```cpp
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```

### Parameters

*pPrivileges*<br/>
Pointer to an array of [LUID](/windows/win32/api/winnt/ns-winnt-luid) objects. `CLUIDArray` is a typedef defined as `CAtlArray<LUID> CLUIDArray`.

*pAttributes*<br/>
Pointer to an array of DWORD objects. If this parameter is omitted or NULL, the attributes are not retrieved. `CAttributes` is a typedef defined as `CAtlArray <DWORD> CAttributes`.

### Remarks

This method will enumerate all of the privileges contained in the `CTokenPrivileges` access token object and place the individual LUIDs and (optionally) the attribute flags into array objects.

## <a name="getnamesandattributes"></a> CTokenPrivileges::GetNamesAndAttributes

Retrieves the name and attribute flags from the `CTokenPrivileges` object.

```cpp
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```

### Parameters

*pNames*<br/>
Pointer to an array of `CString` objects. `CNames` is a typedef defined as `CAtlArray <CString> CNames`.

*pAttributes*<br/>
Pointer to an array of DWORD objects. If this parameter is omitted or NULL, the attributes are not retrieved. `CAttributes` is a typedef defined as `CAtlArray <DWORD> CAttributes`.

### Remarks

This method will enumerate all of the privileges contained in the `CTokenPrivileges` object, placing the name and (optionally) the attribute flags into array objects.

This method retrieves the attribute name, rather than the displayable name: for example, if the attribute name is SE_REMOTE_SHUTDOWN_NAME, the system name is "SeRemoteShutdownPrivilege." To obtain the displayable name, use the method [CTokenPrivileges::GetDisplayNames](#getdisplaynames).

## <a name="getptoken_privileges"></a> CTokenPrivileges::GetPTOKEN_PRIVILEGES

Returns a pointer to the `TOKEN_PRIVILEGES` structure.

```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```

### Return Value

Returns a pointer to the [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure.

## <a name="lookupprivilege"></a> CTokenPrivileges::LookupPrivilege

Retrieves the attribute associated with a given privilege name.

```
bool LookupPrivilege(
    LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```

### Parameters

*pszPrivilege*<br/>
Pointer to a null-terminated string that specifies the name of the privilege, as defined in the WINNT.H header file. For example, this parameter could specify the constant SE_SECURITY_NAME, or its corresponding string, "SeSecurityPrivilege."

*pdwAttributes*<br/>
Pointer to a variable that receives the attributes.

### Return Value

Returns true if the attribute is successfully retrieved, false otherwise.

## <a name="operator_eq"></a> CTokenPrivileges::operator =

Assignment operator.

```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);
CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```

### Parameters

*rPrivileges*<br/>
The [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure to assign to the `CTokenPrivileges` object.

*rhs*<br/>
The `CTokenPrivileges` object to assign to the object.

### Return Value

Returns the updated `CTokenPrivileges` object.

## <a name="operator_const_token_privileges__star"></a> CTokenPrivileges::operator const TOKEN_PRIVILEGES \*

Casts a value to a pointer to the `TOKEN_PRIVILEGES` structure.

```
operator const TOKEN_PRIVILEGES *() const throw(...);
```

### Remarks

Casts a value to a pointer to the [TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges) structure.

## See also

[Security Sample](../../overview/visual-cpp-samples.md)<br/>
[TOKEN_PRIVILEGES](/windows/win32/api/winnt/ns-winnt-token_privileges)<br/>
[LUID](/windows/win32/api/winnt/ns-winnt-luid)<br/>
[LUID_AND_ATTRIBUTES](/windows/win32/api/winnt/ns-winnt-luid_and_attributes)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
