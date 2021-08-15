---
description: "Learn more about: Security Global Functions"
title: "Security Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlsecurity/ATL::AtlGetDacl", "atlsecurity/ATL::AtlSetDacl", "atlsecurity/ATL::AtlGetGroupSid", "atlsecurity/ATL::AtlSetGroupSid", "atlsecurity/ATL::AtlGetOwnerSid", "atlsecurity/ATL::AtlSetOwnerSid", "atlsecurity/ATL::AtlGetSacl", "atlsecurity/ATL::AtlSetSacl", "atlsecurity/ATL::AtlGetSecurityDescriptor"]
helpviewer_keywords: ["SIDs [C++], modifying SID objects", "ACL object global functions", "security IDs [C++]"]
ms.assetid: 6a584bfe-16b7-47f4-8439-9c789c41567a
---
# Security Global Functions

These functions provide support for modifying SID and ACL objects.

> [!IMPORTANT]
> The functions listed in the following table cannot be used in applications that execute in the Windows Runtime.

|Name|Description|
|-|-|
|[AtlGetDacl](#atlgetdacl)|Call this function to retrieve the discretionary access-control list (DACL) information of a specified object.|
|[AtlSetDacl](#atlsetdacl)|Call this function to set the discretionary access-control list (DACL) information of a specified object.|
|[AtlGetGroupSid](#atlgetgroupsid)|Call this function to retrieve the group security identifier (SID) of an object.|
|[AtlSetGroupSid](#atlsetgroupsid)|Call this function to set the group security identifier (SID) of an object.|
|[AtlGetOwnerSid](#atlgetownersid)|Call this function to retrieve the owner security identifier (SID) of an object.|
|[AtlSetOwnerSid](#atlsetownersid)|Call this function to set the owner security identifier (SID) of an object.|
|[AtlGetSacl](#atlgetsacl)|Call this function to retrieve the system access-control list (SACL) information of a specified object.|
|[AtlSetSacl](#atlsetsacl)|Call this function to set the system access-control list (SACL) information of a specified object.|
|[AtlGetSecurityDescriptor](#atlgetsecuritydescriptor)|Call this function to retrieve the security descriptor of a given object.|

## Requirements

**Header:** atlsecurity.h

## <a name="atlgetdacl"></a> AtlGetDacl

Call this function to retrieve the discretionary access-control list (DACL) information of a specified object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlGetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CDacl* pDacl) throw();
```

### Parameters

*hObject*<br/>
Handle to the object for which to retrieve the security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*pDacl*<br/>
Pointer to a DACL object which will contain the retrieved security information.

### Return Value

Returns true on success, false on failure.

### Remarks

In debug builds, an assertion error will occur if either *hObject* or *pDacl* is invalid.

## <a name="atlsetdacl"></a> AtlSetDacl

Call this function to set the discretionary access-control list (DACL) information of a specified object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlSetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CDacl& rDacl,
    DWORD dwInheritanceFlowControl = 0) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object for which to set security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*rDacl*<br/>
The DACL containing the new security information.

*dwInheritanceFlowControl*<br/>
The inheritance flow control. This value can be 0 (the default), PROTECTED_DACL_SECURITY_INFORMATION or UNPROTECTED_DACL_SECURITY_INFORMATION.

### Return Value

Returns true on success, false on failure.

### Remarks

In debug builds, an assertion error will occur if *hObject* is invalid, or if *dwInheritanceFlowControl* is not one of the three permitted values.

### Requirements

**Header:** atlsecurity.h

## <a name="atlgetgroupsid"></a> AtlGetGroupSid

Call this function to retrieve the group security identifier (SID) of an object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlGetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object from which to retrieve security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*pSid*<br/>
Pointer to a `CSid` object which will contain the new security information.

### Return Value

Returns true on success, false on failure.

### Requirements

**Header:** atlsecurity.h

## <a name="atlsetgroupsid"></a> AtlSetGroupSid

Call this function to set the group security identifier (SID) of an object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlSetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object for which to set security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*rSid*<br/>
The `CSid` object containing the new security information.

### Return Value

Returns true on success, false on failure.

### Requirements

**Header:** atlsecurity.h

## <a name="atlgetownersid"></a> AtlGetOwnerSid

Call this function to retrieve the owner security identifier (SID) of an object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlGetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object from which to retrieve security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*pSid*<br/>
Pointer to a `CSid` object which will contain the new security information.

### Return Value

Returns true on success, false on failure.

### Requirements

**Header:** atlsecurity.h

## <a name="atlsetownersid"></a> AtlSetOwnerSid

Call this function to set the owner security identifier (SID) of an object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlSetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object for which to set security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*rSid*<br/>
The `CSid` object containing the new security information.

### Return Value

Returns true on success, false on failure.

### Requirements

**Header:** atlsecurity.h

## <a name="atlgetsacl"></a> AtlGetSacl

Call this function to retrieve the system access-control list (SACL) information of a specified object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlGetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSacl* pSacl,
    bool bRequestNeededPrivileges = true) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object from which to retrieve the security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*pSacl*<br/>
Pointer to a SACL object which will contain the retrieved security information.

*bRequestNeededPrivileges*<br/>
If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.

### Return Value

Returns true on success, false on failure.

### Remarks

If `AtlGetSacl` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with *bRequestNeededPrivileges* set to false.

### Requirements

**Header:** atlsecurity.h

## <a name="atlsetsacl"></a> AtlSetSacl

Call this function to set the system access-control list (SACL) information of a specified object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlSetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSacl& rSacl,
    DWORD dwInheritanceFlowControl = 0,
    bool bRequestNeededPrivileges = true) throw(...);
```

### Parameters

*hObject*<br/>
Handle to the object for which to set security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *hObject* parameter.

*rSacl*<br/>
The SACL containing the new security information.

*dwInheritanceFlowControl*<br/>
The inheritance flow control. This value can be 0 (the default), PROTECTED_SACL_SECURITY_INFORMATION or UNPROTECTED_SACL_SECURITY_INFORMATION.

*bRequestNeededPrivileges*<br/>
If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.

### Return Value

Returns true on success, false on failure.

### Remarks

In debug builds, an assertion error will occur if *hObject* is invalid, or if *dwInheritanceFlowControl* is not one of the three permitted values.

If `AtlSetSacl` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with *bRequestNeededPrivileges* set to false.

### Requirements

**Header:** atlsecurity.h

## <a name="atlgetsecuritydescriptor"></a> AtlGetSecurityDescriptor

Call this function to retrieve the security descriptor of a given object.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
inline bool AtlGetSecurityDescriptor(
    LPCTSTR pszObjectName,
    SE_OBJECT_TYPE ObjectType,
    CSecurityDesc* pSecurityDescriptor,
    SECURITY_INFORMATION requestedInfo = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION,
bool bRequestNeededPrivileges = true) throw(...);
```

### Parameters

*pszObjectName*<br/>
Pointer to a null-terminated string that specifies the name of the object from which to retrieve security information.

*ObjectType*<br/>
Specifies a value from the [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) enumeration that indicates the type of object identified by the *pszObjectName* parameter.

*pSecurityDescriptor*<br/>
The object which receives the requested security descriptor.

*requestedInfo*<br/>
A set of [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) bit flags that indicate the type of security information to retrieve. This parameter can be a combination of the following values.

*bRequestNeededPrivileges*<br/>
If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.

### Return Value

Returns true on success, false on failure.

### Remarks

If `AtlGetSecurityDescriptor` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with *bRequestNeededPrivileges* set to false.

### Requirements

**Header:** atlsecurity.h

## See also

[Functions](../../atl/reference/atl-functions.md)
