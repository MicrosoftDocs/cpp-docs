---
description: "Learn more about: CAcl Class"
title: "CAcl Class"
ms.date: "11/04/2016"
f1_keywords: ["CAcl", "ATLSECURITY/ATL::CAcl", "ATLSECURITY/ATL::CAcl::CAccessMaskArray", "ATLSECURITY/ATL::CAcl::CAceFlagArray", "ATLSECURITY/ATL::CAcl::CAceTypeArray", "ATLSECURITY/ATL::CAcl::CAcl", "ATLSECURITY/ATL::CAcl::GetAceCount", "ATLSECURITY/ATL::CAcl::GetAclEntries", "ATLSECURITY/ATL::CAcl::GetAclEntry", "ATLSECURITY/ATL::CAcl::GetLength", "ATLSECURITY/ATL::CAcl::GetPACL", "ATLSECURITY/ATL::CAcl::IsEmpty", "ATLSECURITY/ATL::CAcl::IsNull", "ATLSECURITY/ATL::CAcl::RemoveAce", "ATLSECURITY/ATL::CAcl::RemoveAces", "ATLSECURITY/ATL::CAcl::SetEmpty", "ATLSECURITY/ATL::CAcl::SetNull"]
helpviewer_keywords: ["CAcl class"]
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
---
# CAcl Class

This class is a wrapper for an `ACL` (access-control list) structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAcl
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CAcl::CAccessMaskArray](#caccessmaskarray)|An array of ACCESS_MASKs.|
|[CAcl::CAceFlagArray](#caceflagarray)|An array of BYTEs.|
|[CAcl::CAceTypeArray](#cacetypearray)|An array of BYTEs.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAcl::CAcl](#cacl)|The constructor.|
|[CAcl::~CAcl](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAcl::GetAceCount](#getacecount)|Returns the number of access-control entry (ACE) objects.|
|[CAcl::GetAclEntries](#getaclentries)|Retrieves the access-control list (ACL) entries from the `CAcl` object.|
|[CAcl::GetAclEntry](#getaclentry)|Retrieves all of the information about an entry in a `CAcl` object.|
|[CAcl::GetLength](#getlength)|Returns the length of the ACL.|
|[CAcl::GetPACL](#getpacl)|Returns a PACL (pointer to an ACL).|
|[CAcl::IsEmpty](#isempty)|Tests the `CAcl` object for entries.|
|[CAcl::IsNull](#isnull)|Returns the status of the `CAcl` object.|
|[CAcl::RemoveAce](#removeace)|Removes a specific ACE (access-control entry) from the `CAcl` object.|
|[CAcl::RemoveAces](#removeaces)|Removes all ACEs (access-control entries) from the `CAcl` that apply to the given `CSid`.|
|[CAcl::SetEmpty](#setempty)|Marks the `CAcl` object as empty.|
|[CAcl::SetNull](#setnull)|Marks the `CAcl` object as NULL.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAcl::operator const ACL *](#operator_const_acl__star)|Casts a `CAcl` object to an `ACL` structure.|
|[CAcl::operator =](#operator_eq)|Assignment operator.|

## Remarks

The `ACL` structure is the header of an ACL (access-control list). An ACL includes a sequential list of zero or more [ACEs](/windows/win32/SecAuthZ/access-control-entries) (access-control entries). The individual ACEs in an ACL are numbered from 0 to *n-1*, where *n* is the number of ACEs in the ACL. When editing an ACL, an application refers to an access-control entry (ACE) within the ACL by its index.

There are two ACL types:

- Discretionary

- System

A discretionary ACL is controlled by the owner of an object or anyone granted WRITE_DAC access to the object. It specifies the access particular users and groups can have to an object. For example, the owner of a file can use a discretionary ACL to control which users and groups can and cannot have access to the file.

An object can also have system-level security information associated with it, in the form of a system ACL controlled by a system administrator. A system ACL can allow the system administrator to audit any attempts to gain access to an object.

For more details, see the [ACL](/windows/win32/SecAuthZ/access-control-lists) discussion in the Windows SDK.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Requirements

**Header:** atlsecurity.h

## <a name="caccessmaskarray"></a> CAcl::CAccessMaskArray

An array of ACCESS_MASK objects.

```cpp
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```

### Remarks

This typedef specifies the array type that can be used to store access rights used in access-control entries (ACEs).

## <a name="caceflagarray"></a> CAcl::CAceFlagArray

An array of BYTEs.

```cpp
typedef CAtlArray<BYTE> CAceFlagArray;
```

### Remarks

This typedef specifies the array type used to define the access-control entry (ACE) type-specific control flags. See the [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) definition for the complete list of possible flags.

## <a name="cacetypearray"></a> CAcl::CAceTypeArray

An array of BYTEs.

```cpp
typedef CAtlArray<BYTE> CAceTypeArray;
```

### Remarks

This typedef specifies the array type used to define the nature of the access-control entry (ACE) objects, such as ACCESS_ALLOWED_ACE_TYPE or ACCESS_DENIED_ACE_TYPE. See the [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) definition for the complete list of possible types.

## <a name="cacl"></a> CAcl::CAcl

The constructor.

```cpp
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```

### Parameters

*rhs*<br/>
An existing `CAcl` object.

### Remarks

The `CAcl` object can be optionally created using an existing `CAcl` object.

## <a name="dtor"></a> CAcl::~CAcl

The destructor.

```cpp
virtual ~CAcl() throw();
```

### Remarks

The destructor frees any resources acquired by the object.

## <a name="getacecount"></a> CAcl::GetAceCount

Returns the number of access-control entry (ACE) objects.

```cpp
virtual UINT GetAceCount() const throw() = 0;
```

### Return Value

Returns the number of ACE entries in the `CAcl` object.

## <a name="getaclentries"></a> CAcl::GetAclEntries

Retrieves the access-control list (ACL) entries from the `CAcl` object.

```cpp
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
    CAceTypeArray* pAceTypes = NULL,
    CAceFlagArray* pAceFlags = NULL) const throw(...);
```

### Parameters

*pSids*<br/>
A pointer to an array of [CSid](../../atl/reference/csid-class.md) objects.

*pAccessMasks*<br/>
The access masks.

*pAceTypes*<br/>
The access-control entry (ACE) types.

*pAceFlags*<br/>
The ACE flags.

### Remarks

This method fills the array parameters with the details of every ACE object contained in the `CAcl` object. Use NULL when the details for that particular array are not required.

The contents of each array correspond to each other, that is, the first element of the `CAccessMaskArray` array corresponds to the first element in the `CSidArray` array, and so on.

See [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) for more details on ACE types and flags.

## <a name="getaclentry"></a> CAcl::GetAclEntry

Retrieves all of the information about an entry in an access-control list (ACL).

```cpp
void GetAclEntry(
    UINT nIndex,
    CSid* pSid,
    ACCESS_MASK* pMask = NULL,
    BYTE* pType = NULL,
    BYTE* pFlags = NULL,
    GUID* pObjectType = NULL,
    GUID* pInheritedObjectType = NULL) const throw(...);
```

### Parameters

*nIndex*<br/>
Index to the ACL entry to retrieve.

*pSid*<br/>
The [CSid](../../atl/reference/csid-class.md) object to which the ACL entry applies.

*pMask*<br/>
The mask specifying permissions to grant or deny access.

*pType*<br/>
The ACE type.

*pFlags*<br/>
The ACE flags.

*pObjectType*<br/>
The object type. This will be set to GUID_NULL if the object type is not specified in the ACE, or if the ACE is not an OBJECT ACE.

*pInheritedObjectType*<br/>
The inherited object type. This will be set to GUID_NULL if the inherited object type is not specified in the ACE, or if the ACE is not an OBJECT ACE.

### Remarks

This method will retrieve all of the information about an individual ACE, providing more information than [CAcl::GetAclEntries](#getaclentries) alone makes available.

See [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) for more details on ACE types and flags.

## <a name="getlength"></a> CAcl::GetLength

Returns the length of the access-control list (ACL).

```cpp
UINT GetLength() const throw();
```

### Return Value

Returns the required length in bytes necessary to hold the `ACL` structure.

## <a name="getpacl"></a> CAcl::GetPACL

Returns a pointer to an access-control list (ACL).

```cpp
const ACL* GetPACL() const throw(...);
```

### Return Value

Returns a pointer to the `ACL` structure.

## <a name="isempty"></a> CAcl::IsEmpty

Tests the `CAcl` object for entries.

```cpp
bool IsEmpty() const throw();
```

### Remarks

Returns TRUE if the `CAcl` object is not NULL, and contains no entries. Returns FALSE if the `CAcl` object is either NULL, or contains at least one entry.

## <a name="isnull"></a> CAcl::IsNull

Returns the status of the `CAcl` object.

```cpp
bool IsNull() const throw();
```

### Return Value

Returns TRUE if the `CAcl` object is NULL, FALSE otherwise.

## <a name="operator_const_acl__star"></a> CAcl::operator const ACL *

Casts a `CAcl` object to an `ACL` (access-control list) structure.

```cpp
operator const ACL *() const throw(...);
```

### Remarks

Returns the address of the `ACL` structure.

## <a name="operator_eq"></a> CAcl::operator =

Assignment operator.

```cpp
CAcl& operator= (const CAcl& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `CAcl` to assign to the existing object.

### Return Value

Returns a reference to the updated `CAcl` object.

## <a name="removeace"></a> CAcl::RemoveAce

Removes a specific ACE (access-control entry) from the `CAcl` object.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### Parameters

*nIndex*<br/>
Index to the ACE entry to remove.

### Remarks

This method is derived from [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="removeaces"></a> CAcl::RemoveAces

Removes alls ACEs (access-control entries) from the `CAcl` that apply to the given `CSid`.

```cpp
bool RemoveAces(const CSid& rSid) throw(...)
```

### Parameters

*rSid*<br/>
A reference to a `CSid` object.

## <a name="setempty"></a> CAcl::SetEmpty

Marks the `CAcl` object as empty.

```cpp
void SetEmpty() throw();
```

### Remarks

The `CAcl` can be set to empty or to NULL: the two states are distinct.

## <a name="setnull"></a> CAcl::SetNull

Marks the `CAcl` object as NULL.

```cpp
void SetNull() throw();
```

### Remarks

The `CAcl` can be set to empty or to NULL: the two states are distinct.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
