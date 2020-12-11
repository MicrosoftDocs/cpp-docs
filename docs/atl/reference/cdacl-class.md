---
description: "Learn more about: CDacl Class"
title: "CDacl Class"
ms.date: "11/04/2016"
f1_keywords: ["CDacl", "ATLSECURITY/ATL::CDacl", "ATLSECURITY/ATL::CDacl::CDacl", "ATLSECURITY/ATL::CDacl::AddAllowedAce", "ATLSECURITY/ATL::CDacl::AddDeniedAce", "ATLSECURITY/ATL::CDacl::GetAceCount", "ATLSECURITY/ATL::CDacl::RemoveAce", "ATLSECURITY/ATL::CDacl::RemoveAllAces"]
helpviewer_keywords: ["CDacl class"]
ms.assetid: 2dc76616-6362-4967-b6cf-e2d39ca37ddd
---
# CDacl Class

This class is a wrapper for a DACL (discretionary access-control list) structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CDacl : public CAcl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDacl::CDacl](#cdacl)|The constructor.|
|[CDacl::~CDacl](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDacl::AddAllowedAce](#addallowedace)|Adds an allowed ACE (access-control entry) to the `CDacl` object.|
|[CDacl::AddDeniedAce](#adddeniedace)|Adds a denied ACE to the `CDacl` object.|
|[CDacl::GetAceCount](#getacecount)|Returns the number of ACEs (access-control entries) in the `CDacl` object.|
|[CDacl::RemoveAce](#removeace)|Removes a specific ACE (access-control entry) from the `CDacl` object.|
|[CDacl::RemoveAllAces](#removeallaces)|Removes all of the ACEs contained in the `CDacl` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CDacl::operator =](#operator_eq)|Assignment operator.|

## Remarks

An object's security descriptor can contain a DACL. A DACL contains zero or more ACEs (access-control entries) that identify the users and groups who can access the object. If a DACL is empty (that is, it contains zero ACEs), no access is explicitly granted, so access is implicitly denied. However, if an object's security descriptor does not have a DACL, the object is unprotected and everyone has complete access.

To retrieve an object's DACL, you must be the object's owner or have READ_CONTROL access to the object. To change an object's DACL, you must have WRITE_DAC access to the object.

Use the class methods provided to create, add, remove, and delete ACEs from the `CDacl` object. See also [AtlGetDacl](security-global-functions.md#atlgetdacl) and [AtlSetDacl](security-global-functions.md#atlsetdacl).

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Inheritance Hierarchy

[CAcl](../../atl/reference/cacl-class.md)

`CDacl`

## Requirements

**Header:** atlsecurity.h

## <a name="addallowedace"></a> CDacl::AddAllowedAce

Adds an allowed ACE (access-control entry) to the `CDacl` object.

```
bool AddAllowedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags = 0) throw(...);

bool AddAllowedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### Parameters

*rSid*<br/>
A [CSid](../../atl/reference/csid-class.md) object.

*AccessMask*<br/>
Specifies the mask of access rights to be allowed for the specified `CSid` object.

*AceFlags*<br/>
A set of bit flags that control ACE inheritance.

*pObjectType*<br/>
The object type.

*pInheritedObjectType*<br/>
The inherited object type.

### Return Value

Returns TRUE if the ACE is added to the `CDacl` object, FALSE on failure.

### Remarks

A `CDacl` object contains zero or more ACEs (access-control entries) that identify the users and groups who can access the object. This method adds an ACE that allows access to the `CDacl` object.

See [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) for a description of the various flags which can be set in the `AceFlags` parameter.

## <a name="adddeniedace"></a> CDacl::AddDeniedAce

Adds a denied ACE (access-control entry) to the `CDacl` object.

```
bool AddDeniedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags = 0) throw(...);

bool AddDeniedAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### Parameters

*rSid*<br/>
A `CSid` object.

*AccessMask*<br/>
Specifies the mask of access rights to be denied for the specified `CSid` object.

*AceFlags*<br/>
A set of bit flags that control ACE inheritance. Defaults to 0 in the first form of the method.

*pObjectType*<br/>
The object type.

*pInheritedObjectType*<br/>
The inherited object type.

### Return Value

Returns TRUE if the ACE is added to the `CDacl` object, FALSE on failure.

### Remarks

A `CDacl` object contains zero or more ACEs (access-control entries) that identify the users and groups who can access the object. This method adds an ACE that denies access to the `CDacl` object.

See [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) for a description of the various flags which can be set in the `AceFlags` parameter.

## <a name="cdacl"></a> CDacl::CDacl

The constructor.

```
CDacl (const ACL& rhs) throw(...);
CDacl () throw();
```

### Parameters

*rhs*<br/>
An existing `ACL` (access-control list) structure.

### Remarks

The `CDacl` object can be optionally created using an existing `ACL` structure. It is important to note that only a DACL (discretionary access-control list), and not a SACL (system access-control list), should be passed as this parameter. In debug builds, passing a SACL will cause an ASSERT. In release builds, passing a SACL will cause the ACEs (access-control entries) in the ACL to be ignored, and no error will occur.

## <a name="dtor"></a> CDacl::~CDacl

The destructor.

```
~CDacl () throw();
```

### Remarks

The destructor frees any resources acquired by the object, including all ACEs (access-control entries) using [CDacl::RemoveAllAces](#removeallaces).

## <a name="getacecount"></a> CDacl::GetAceCount

Returns the number of ACEs (access-control entries) in the `CDacl` object.

```
UINT GetAceCount() const throw();
```

### Return Value

Returns the number of ACEs contained in the `CDacl` object.

## <a name="operator_eq"></a> CDacl::operator =

Assignment operator.

```
CDacl& operator= (const ACL& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The ACL (access-control list) to assign to the existing object.

### Return Value

Returns a reference to the updated `CDacl` object.

### Remarks

You should ensure that you only pass a DACL (discretionary access-control list) to this function. Passing a SACL (system access-control list) to this function will cause an ASSERT in debug builds but will cause no error in release builds.

## <a name="removeace"></a> CDacl::RemoveAce

Removes a specific ACE (access-control entry) from the `CDacl` object.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### Parameters

*nIndex*<br/>
Index to the ACE entry to remove.

### Remarks

This method is derived from [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="removeallaces"></a> CDacl::RemoveAllAces

Removes all of the ACEs (access-control entries) contained in the `CDacl` object.

```cpp
void RemoveAllAces() throw();
```

### Remarks

Removes every `ACE` (access-control entry) structure (if any) in the `CDacl` object.

## See also

[Security Sample](../../overview/visual-cpp-samples.md)<br/>
[CAcl Class](../../atl/reference/cacl-class.md)<br/>
[ACLs](/windows/win32/SecAuthZ/access-control-lists)<br/>
[ACEs](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
