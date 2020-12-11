---
description: "Learn more about: CSacl Class"
title: "CSacl Class"
ms.date: "11/04/2016"
f1_keywords: ["CSacl", "ATLSECURITY/ATL::CSacl", "ATLSECURITY/ATL::CSacl::CSacl", "ATLSECURITY/ATL::CSacl::AddAuditAce", "ATLSECURITY/ATL::CSacl::GetAceCount", "ATLSECURITY/ATL::CSacl::RemoveAce", "ATLSECURITY/ATL::CSacl::RemoveAllAces"]
helpviewer_keywords: ["CSacl class"]
ms.assetid: 8624889b-aebc-4183-9d29-a20f07837f05
---
# CSacl Class

This class is a wrapper for a SACL (system access-control list) structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CSacl : public CAcl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSacl::CSacl](#csacl)|The constructor.|
|[CSacl::~CSacl](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSacl::AddAuditAce](#addauditace)|Adds an audit access-control entry (ACE) to the `CSacl` object.|
|[CSacl::GetAceCount](#getacecount)|Returns the number of access-control entries (ACEs) in the `CSacl` object.|
|[CSacl::RemoveAce](#removeace)|Removes a specific ACE (access-control entry) from the `CSacl` object.|
|[CSacl::RemoveAllAces](#removeallaces)|Removes all of the ACEs contained in the `CSacl` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CSacl::operator =](#operator_eq)|Assignment operator.|

## Remarks

A SACL contains access-control entries (ACEs) that specify the types of access attempts that generate audit records in the security event log of a domain controller. Note that a SACL generates log entries only on the domain controller where the access attempt occurred, not on every domain controller that contains a replica of the object.

To set or retrieve the SACL in an object's security descriptor, the SE_SECURITY_NAME privilege must be enabled in the access token of the requesting thread. The administrators group has this privilege granted by default, and it can be granted to other users or groups. Having the privilege granted is not all that is required: before the operation defined by the privilege can be performed, the privilege must be enabled in the security access token in order to take effect. The model allows privileges to be enabled only for specific system operations, and then disabled when they are no longer needed. See [AtlGetSacl](security-global-functions.md#atlgetsacl) and [AtlSetSacl](security-global-functions.md#atlsetsacl) for examples of enabling SE_SECURITY_NAME.

Use the class methods provided to add, remove, create, and delete ACEs from the `SACL` object. See also [AtlGetSacl](security-global-functions.md#atlgetsacl) and [AtlSetSacl](security-global-functions.md#atlsetsacl).

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Inheritance Hierarchy

[CAcl](../../atl/reference/cacl-class.md)

`CSacl`

## Requirements

**Header:** atlsecurity.h

## <a name="addauditace"></a> CSacl::AddAuditAce

Adds an audit access-control entry (ACE) to the `CSacl` object.

```
bool AddAuditAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    bool bSuccess,
    bool bFailure,
    BYTE AceFlags = 0) throw(...);

bool AddAuditAce(
    const CSid& rSid,
    ACCESS_MASK AccessMask,
    bool bSuccess,
    bool bFailure,
    BYTE AceFlags,
    const GUID* pObjectType,
    const GUID* pInheritedObjectType) throw(...);
```

### Parameters

*rSid*<br/>
The [CSid](../../atl/reference/csid-class.md) object.

*AccessMask*<br/>
Specifies the mask of access rights to be audited for the specified `CSid` object.

*bSuccess*<br/>
Specifies whether allowed access attempts are to be audited. Set this flag to true to enable auditing; otherwise, set it to false.

*bFailure*<br/>
Specifies whether denied access attempts are to be audited. Set this flag to true to enable auditing; otherwise, set it to false.

*AceFlags*<br/>
A set of bit flags that control ACE inheritance.

*pObjectType*<br/>
The object type.

*pInheritedObjectType*<br/>
The inherited object type.

### Return Value

Returns TRUE if the ACE is added to the `CSacl` object, FALSE on failure.

### Remarks

A `CSacl` object contains access-control entries (ACEs) that specify the types of access attempts that generate audit records in the security event log. This method adds such an ACE to the `CSacl` object.

See [ACE_HEADER](/windows/win32/api/winnt/ns-winnt-ace_header) for a description of the various flags which can be set in the *AceFlags* parameter.

## <a name="csacl"></a> CSacl::CSacl

The constructor.

```
CSacl() throw();
CSacl(const ACL& rhs) throw(...);
```

### Parameters

*rhs*<br/>
An existing `ACL` (access-control list) structure.

### Remarks

The `CSacl` object can be optionally created using an existing `ACL` structure. Ensure that this parameter is a system access-control list (SACL) and not a discretionary access-control list (DACL). In debug builds, if a DACL is supplied an assertion will occur. In release builds any entries from a DACL are ignored.

## <a name="dtor"></a> CSacl::~CSacl

The destructor.

```
~CSacl() throw();
```

### Remarks

The destructor frees any resources acquired by the object, including all access-control entries (ACEs).

## <a name="getacecount"></a> CSacl::GetAceCount

Returns the number of access-control entries (ACEs) in the `CSacl` object.

```
UINT GetAceCount() const throw();
```

### Return Value

Returns the number of ACEs contained in the `CSacl` object.

## <a name="operator_eq"></a> CSacl::operator =

Assignment operator.

```
CSacl& operator=(const ACL& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `ACL` (access-control list) to assign to the existing object.

### Return Value

Returns a reference to the updated `CSacl` object. Ensure that the `ACL` parameter is actually a system access-control list (SACL) and not a discretionary access-control list (DACL). In debug builds an assertion will occur, and in release builds the `ACL` parameter will be ignored.

## <a name="removeace"></a> CSacl::RemoveAce

Removes a specific ACE (access-control entry) from the `CSacl` object.

```cpp
void RemoveAce(UINT nIndex) throw();
```

### Parameters

*nIndex*<br/>
Index to the ACE entry to remove.

### Remarks

This method is derived from [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).

## <a name="removeallaces"></a> CSacl::RemoveAllAces

Removes all of the access-control entries (ACEs) contained in the `CSacl` object.

```cpp
void RemoveAllAces() throw();
```

### Remarks

Removes every `ACE` structure (if any) in the `CSacl` object.

## See also

[CAcl Class](../../atl/reference/cacl-class.md)<br/>
[ACLs](/windows/win32/SecAuthZ/access-control-lists)<br/>
[ACEs](/windows/win32/SecAuthZ/access-control-entries)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
