---
description: "Learn more about: CTokenGroups Class"
title: "CTokenGroups Class"
ms.date: "11/04/2016"
f1_keywords: ["CTokenGroups", "ATLSECURITY/ATL::CTokenGroups", "ATLSECURITY/ATL::CTokenGroups::CTokenGroups", "ATLSECURITY/ATL::CTokenGroups::Add", "ATLSECURITY/ATL::CTokenGroups::Delete", "ATLSECURITY/ATL::CTokenGroups::DeleteAll", "ATLSECURITY/ATL::CTokenGroups::GetCount", "ATLSECURITY/ATL::CTokenGroups::GetLength", "ATLSECURITY/ATL::CTokenGroups::GetPTOKEN_GROUPS", "ATLSECURITY/ATL::CTokenGroups::GetSidsAndAttributes", "ATLSECURITY/ATL::CTokenGroups::LookupSid"]
helpviewer_keywords: ["CTokenGroups class"]
ms.assetid: 2ab08076-4b08-4487-bc70-ec6dee304190
---
# CTokenGroups Class

This class is a wrapper for the `TOKEN_GROUPS` structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CTokenGroups
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CTokenGroups::CTokenGroups](#ctokengroups)|The constructor.|
|[CTokenGroups::~CTokenGroups](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTokenGroups::Add](#add)|Adds a `CSid` or existing `TOKEN_GROUPS` structure to the `CTokenGroups` object.|
|[CTokenGroups::Delete](#delete)|Deletes a `CSid` and its associated attributes from the `CTokenGroups` object.|
|[CTokenGroups::DeleteAll](#deleteall)|Deletes all `CSid` objects and their associated attributes from the `CTokenGroups` object.|
|[CTokenGroups::GetCount](#getcount)|Returns the number of `CSid` objects and associated attributes contained in the `CTokenGroups` object.|
|[CTokenGroups::GetLength](#getlength)|Returns the size of the `CTokenGroups` object.|
|[CTokenGroups::GetPTOKEN_GROUPS](#getptoken_groups)|Retrieves a pointer to the `TOKEN_GROUPS` structure.|
|[CTokenGroups::GetSidsAndAttributes](#getsidsandattributes)|Retrieves the `CSid` objects and attributes belonging to the `CTokenGroups` object.|
|[CTokenGroups::LookupSid](#lookupsid)|Retrieves the attributes associated with a `CSid` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CTokenGroups::operator const TOKEN_GROUPS *](#operator_const_token_groups__star)|Casts the `CTokenGroups` object to a pointer to the `TOKEN_GROUPS` structure.|
|[CTokenGroups::operator =](#operator_eq)|Assignment operator.|

## Remarks

An [access token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

The `CTokenGroups` class is a wrapper for the [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure, containing information about the group security identifiers (SIDs) in an access token.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Requirements

**Header:** atlsecurity.h

## <a name="add"></a> CTokenGroups::Add

Adds a `CSid` or existing `TOKEN_GROUPS` structure to the `CTokenGroups` object.

```cpp
void Add(const CSid& rSid, DWORD dwAttributes) throw(... );
void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```

### Parameters

*rSid*<br/>
A [CSid](../../atl/reference/csid-class.md) object.

*dwAttributes*<br/>
The attributes to associate with the `CSid` object.

*rTokenGroups*<br/>
A [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure.

### Remarks

These methods add one or more `CSid` objects and their associated attributes to the `CTokenGroups` object.

## <a name="ctokengroups"></a> CTokenGroups::CTokenGroups

The constructor.

```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(... );
CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `CTokenGroups` object or [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure with which to construct the `CTokenGroups` object.

### Remarks

The `CTokenGroups` object can optionally be created using a `TOKEN_GROUPS` structure or a previously defined `CTokenGroups` object.

## <a name="dtor"></a> CTokenGroups::~CTokenGroups

The destructor.

```
virtual ~CTokenGroups() throw();
```

### Remarks

The destructor frees all allocated resources.

## <a name="delete"></a> CTokenGroups::Delete

Deletes a `CSid` and its associated attributes from the `CTokenGroups` object.

```
bool Delete(const CSid& rSid) throw();
```

### Parameters

*rSid*<br/>
The [CSid](../../atl/reference/csid-class.md) object for which the security identifier (SID) and attributes should be removed.

### Return Value

Returns true if the `CSid` is removed, false otherwise.

## <a name="deleteall"></a> CTokenGroups::DeleteAll

Deletes all `CSid` objects and their associated attributes from the `CTokenGroups` object.

```cpp
void DeleteAll() throw();
```

## <a name="getcount"></a> CTokenGroups::GetCount

Returns the number of `CSid` objects contained in `CTokenGroups`.

```
UINT GetCount() const throw();
```

### Return Value

Returns the number of [CSid](../../atl/reference/csid-class.md) objects and their associated attributes contained in the `CTokenGroups` object.

## <a name="getlength"></a> CTokenGroups::GetLength

Returns the size of the `CTokenGroup` object.

```
UINT GetLength() const throw();
```

### Remarks

Returns the total size of the `CTokenGroup` object, in bytes.

## <a name="getptoken_groups"></a> CTokenGroups::GetPTOKEN_GROUPS

Retrieves a pointer to the `TOKEN_GROUPS` structure.

```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```

### Return Value

Retrieves a pointer to the [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure belonging to the `CTokenGroups` access token object.

## <a name="getsidsandattributes"></a> CTokenGroups::GetSidsAndAttributes

Retrieves the `CSid` objects and (optionally) the attributes belonging to the `CTokenGroups` object.

```cpp
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```

### Parameters

*pSids*<br/>
Pointer to an array of [CSid](../../atl/reference/csid-class.md) objects.

*pAttributes*<br/>
Pointer to an array of DWORDs. If this parameter is omitted or NULL, the attributes are not retrieved.

### Remarks

This method will enumerate all of the `CSid` objects contained in the `CTokenGroups` object and place them and (optionally) the attribute flags into array objects.

## <a name="lookupsid"></a> CTokenGroups::LookupSid

Retrieves the attributes associated with a `CSid` object.

```
bool LookupSid(
    const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```

### Parameters

*rSid*<br/>
The [CSid](../../atl/reference/csid-class.md) object.

*pdwAttributes*<br/>
Pointer to a DWORD which will accept the `CSid` object's attribute. If omitted or NULL, the attribute will not be retrieved.

### Return Value

Returns true if the `CSid` is found, false otherwise.

### Remarks

Setting *pdwAttributes* to NULL provides a way of confirming the existence of the `CSid` without accessing the attribute. Note that this method should not be used to check access rights. Applications should instead use the [CAccessToken::CheckTokenMembership](../../atl/reference/caccesstoken-class.md#checktokenmembership) method.

## <a name="operator_eq"></a> CTokenGroups::operator =

Assignment operator.

```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);
CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `CTokenGroups` object or [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure to assign to the `CTokenGroups` object.

### Return Value

Returns the updated `CTokenGroups` object.

## <a name="operator_const_token_groups__star"></a> CTokenGroups::operator const TOKEN_GROUPS *

Casts a value to a pointer to the `TOKEN_GROUPS` structure.

```
operator const TOKEN_GROUPS *() const throw(...);
```

### Remarks

Casts a value to a pointer to the [TOKEN_GROUPS](/windows/win32/api/winnt/ns-winnt-token_groups) structure.

## See also

[Security Sample](../../overview/visual-cpp-samples.md)<br/>
[CSid Class](../../atl/reference/csid-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
