---
description: "Learn more about: CPrivateObjectSecurityDesc Class"
title: "CPrivateObjectSecurityDesc Class"
ms.date: "11/04/2016"
f1_keywords: ["CPrivateObjectSecurityDesc", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc::ConvertToAutoInherit", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Create", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Get", "ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Set"]
helpviewer_keywords: ["CPrivateObjectSecurityDesc class"]
ms.assetid: 2c4bbb13-bf99-4833-912a-197f6815bb5d
---
# CPrivateObjectSecurityDesc Class

This class represents a private object security descriptor object.

## Syntax

```
class CPrivateObjectSecurityDesc : public CSecurityDesc
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc)|The constructor.|
|[CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](#converttoautoinherit)|Call this method to convert a security descriptor and its access-control lists (ACLs) to a format that supports automatic propagation of inheritable access-control entries (ACEs).|
|[CPrivateObjectSecurityDesc::Create](#create)|Call this method to allocate and initialize a self-relative security descriptor for the private object created by the calling resource manager.|
|[CPrivateObjectSecurityDesc::Get](#get)|Call this method to retrieve information from a private object's security descriptor.|
|[CPrivateObjectSecurityDesc::Set](#set)|Call this method to modify a private object's security descriptor.|

### Operators

|Operator|Description|
|-|-|
|[operator =](#operator_eq)|Assignment operator.|

## Remarks

This class, derived from [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), provides methods for creating and managing the security descriptor of a private object.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Inheritance Hierarchy

[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)

`CPrivateObjectSecurityDesc`

## Requirements

**Header:** atlsecurity.h

## <a name="converttoautoinherit"></a> CPrivateObjectSecurityDesc::ConvertToAutoInherit

Call this method to convert a security descriptor and its access-control lists (ACLs) to a format that supports automatic propagation of inheritable access-control entries (ACEs).

```
bool ConvertToAutoInherit(
    const CSecurityDesc* pParent,
    GUID* ObjectType,
    bool bIsDirectoryObject,
    PGENERIC_MAPPING GenericMapping) throw();
```

### Parameters

*pParent*<br/>
Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object referencing the parent container of the object. If there is no parent container, this parameter is NULL.

*ObjectType*<br/>
Pointer to a `GUID` structure that identifies the type of object associated with the current object. Set *ObjectType* to NULL if the object does not have a GUID.

*bIsDirectoryObject*<br/>
Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.

*GenericMapping*<br/>
Pointer to a [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) structure that specifies the mapping from each generic right to specific rights for the object.

### Return Value

Returns true on success, false on failure.

### Remarks

This method attempts to determine whether the ACEs in the discretionary access-control list (DACL) and system access-control list (SACL) of the current security descriptor were inherited from the parent security descriptor. It calls the [ConvertToAutoInheritPrivateObjectSecurity](/windows/win32/api/securitybaseapi/nf-securitybaseapi-converttoautoinheritprivateobjectsecurity) function.

## <a name="cprivateobjectsecuritydesc"></a> CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc

The constructor.

```
CPrivateObjectSecurityDesc() throw();
```

### Remarks

Initializes the `CPrivateObjectSecurityDesc` object.

## <a name="dtor"></a> CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc

The destructor.

```
~CPrivateObjectSecurityDesc() throw();
```

### Remarks

The destructor frees all allocated resources and deletes the private object's security descriptor.

## <a name="create"></a> CPrivateObjectSecurityDesc::Create

Call this method to allocate and initialize a self-relative security descriptor for the private object created by the calling resource manager.

```
bool Create(
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    bool bIsDirectoryObject,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();

bool Create(
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    GUID* ObjectType,
    bool bIsContainerObject,
    ULONG AutoInheritFlags,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();
```

### Parameters

*pParent*<br/>
Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object referencing the parent directory in which a new object is being created. Set to NULL if there is no parent directory.

*pCreator*<br/>
Pointer to a security descriptor provided by the creator of the object. If the object's creator does not explicitly pass security information for the new object, set this parameter to NULL.

*bIsDirectoryObject*<br/>
Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.

*Token*<br/>
Reference to the [CAccessToken](../../atl/reference/caccesstoken-class.md) object for the client process on whose behalf the object is being created.

*GenericMapping*<br/>
Pointer to a [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) structure that specifies the mapping from each generic right to specific rights for the object.

*ObjectType*<br/>
Pointer to a `GUID` structure that identifies the type of object associated with the current object. Set *ObjectType* to NULL if the object does not have a GUID.

*bIsContainerObject*<br/>
Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.

*AutoInheritFlags*<br/>
A set of bit flags that control how access-control entries (ACEs) are inherited from *pParent*. See [CreatePrivateObjectSecurityEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex) for more details.

### Return Value

Returns true on success, false on failure.

### Remarks

This method calls [CreatePrivateObjectSercurity](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurity) or [CreatePrivateObjectSecurityEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex).

The second method permits specifying the object type GUID of the new object or controlling how ACEs are inherited.

> [!NOTE]
> A self-relative security descriptor is a security descriptor that stores all of its security information in a contiguous block of memory.

## <a name="get"></a> CPrivateObjectSecurityDesc::Get

Call this method to retrieve information from a private object's security descriptor.

```
bool Get(
    SECURITY_INFORMATION si,
    CSecurityDesc* pResult) const throw();
```

### Parameters

*si*<br/>
A set of bit flags that indicate the parts of the security descriptor to retrieve. This value can be a combination of the [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) bit flags.

*pResult*<br/>
Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object that receives a copy of the requested information from the specified security descriptor.

### Return Value

Returns true on success, false on failure.

### Remarks

The security descriptor is a structure and associated data that contains the security information for a securable object.

## <a name="operator_eq"></a> CPrivateObjectSecurityDesc::operator =

Assignment operator.

```
CPrivateObjectSecurityDesc& operator= (const CPrivateObjectSecurityDesc& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `CPrivateObjectSecurityDesc` object to assign to the current object.

### Return Value

Returns the updated `CPrivateObjectSecurityDesc` object.

## <a name="set"></a> CPrivateObjectSecurityDesc::Set

Call this method to modify a private object's security descriptor.

```
bool Set(
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();

bool Set(
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    ULONG AutoInheritFlags,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();
```

### Parameters

*si*<br/>
A set of bit flags that indicate the parts of the security descriptor to set. This value can be a combination of the [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) bit flags.

*Modification*<br/>
Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object. The parts of this security descriptor indicated by the *si* parameter are applied to the object's security descriptor.

*GenericMapping*<br/>
Pointer to a [GENERIC_MAPPING](/windows/win32/api/winnt/ns-winnt-generic_mapping) structure that specifies the mapping from each generic right to specific rights for the object.

*Token*<br/>
Reference to the [CAccessToken](../../atl/reference/caccesstoken-class.md) object for the client process on whose behalf the object is being created.

*AutoInheritFlags*<br/>
A set of bit flags that control how access-control entries (ACEs) are inherited from *pParent*. See [CreatePrivateObjectSecurityEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createprivateobjectsecurityex) for more details.

### Return Value

Returns true on success, false on failure.

### Remarks

The second method permits specifying the object type GUID of the object or controlling how ACEs are inherited.

## See also

[SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)<br/>
[CSecurityDesc Class](../../atl/reference/csecuritydesc-class.md)
