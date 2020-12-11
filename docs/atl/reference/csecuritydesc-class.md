---
description: "Learn more about: CSecurityDesc Class"
title: "CSecurityDesc Class"
ms.date: "11/04/2016"
f1_keywords: ["CSecurityDesc", "ATLSECURITY/ATL::CSecurityDesc", "ATLSECURITY/ATL::CSecurityDesc::CSecurityDesc", "ATLSECURITY/ATL::CSecurityDesc::FromString", "ATLSECURITY/ATL::CSecurityDesc::GetControl", "ATLSECURITY/ATL::CSecurityDesc::GetDacl", "ATLSECURITY/ATL::CSecurityDesc::GetGroup", "ATLSECURITY/ATL::CSecurityDesc::GetOwner", "ATLSECURITY/ATL::CSecurityDesc::GetPSECURITY_DESCRIPTOR", "ATLSECURITY/ATL::CSecurityDesc::GetSacl", "ATLSECURITY/ATL::CSecurityDesc::IsDaclAutoInherited", "ATLSECURITY/ATL::CSecurityDesc::IsDaclDefaulted", "ATLSECURITY/ATL::CSecurityDesc::IsDaclPresent", "ATLSECURITY/ATL::CSecurityDesc::IsDaclProtected", "ATLSECURITY/ATL::CSecurityDesc::IsGroupDefaulted", "ATLSECURITY/ATL::CSecurityDesc::IsOwnerDefaulted", "ATLSECURITY/ATL::CSecurityDesc::IsSaclAutoInherited", "ATLSECURITY/ATL::CSecurityDesc::IsSaclDefaulted", "ATLSECURITY/ATL::CSecurityDesc::IsSaclPresent", "ATLSECURITY/ATL::CSecurityDesc::IsSaclProtected", "ATLSECURITY/ATL::CSecurityDesc::IsSelfRelative", "ATLSECURITY/ATL::CSecurityDesc::MakeAbsolute", "ATLSECURITY/ATL::CSecurityDesc::MakeSelfRelative", "ATLSECURITY/ATL::CSecurityDesc::SetControl", "ATLSECURITY/ATL::CSecurityDesc::SetDacl", "ATLSECURITY/ATL::CSecurityDesc::SetGroup", "ATLSECURITY/ATL::CSecurityDesc::SetOwner", "ATLSECURITY/ATL::CSecurityDesc::SetSacl", "ATLSECURITY/ATL::CSecurityDesc::ToString"]
helpviewer_keywords: ["CSecurityDesc class"]
ms.assetid: 3767a327-378f-4690-ba40-4d9f6a1f5ee4
---
# CSecurityDesc Class

This class is a wrapper for the `SECURITY_DESCRIPTOR` structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CSecurityDesc
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSecurityDesc::CSecurityDesc](#csecuritydesc)|The constructor.|
|[CSecurityDesc::~CSecurityDesc](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSecurityDesc::FromString](#fromstring)|Converts a string-format security descriptor into a valid, functional security descriptor.|
|[CSecurityDesc::GetControl](#getcontrol)|Retrieves control information from the security descriptor.|
|[CSecurityDesc::GetDacl](#getdacl)|Retrieves discretionary access-control list (DACL) information from the security descriptor.|
|[CSecurityDesc::GetGroup](#getgroup)|Retrieves the primary group information from the security descriptor.|
|[CSecurityDesc::GetOwner](#getowner)|Retrieves owner informaton from the security descriptor.|
|[CSecurityDesc::GetPSECURITY_DESCRIPTOR](#getpsecurity_descriptor)|Returns a pointer to the `SECURITY_DESCRIPTOR` structure.|
|[CSecurityDesc::GetSacl](#getsacl)|Retrieves system access-control list (SACL) information from the security descriptor.|
|[CSecurityDesc::IsDaclAutoInherited](#isdaclautoinherited)|Determines if the DACL is configured to support automatic propagation.|
|[CSecurityDesc::IsDaclDefaulted](#isdacldefaulted)|Determines if the security descriptor is configured with a default DACL.|
|[CSecurityDesc::IsDaclPresent](#isdaclpresent)|Determines if the security descriptor contains a DACL.|
|[CSecurityDesc::IsDaclProtected](#isdaclprotected)|Determines if the DACL is configured to prevent modifications.|
|[CSecurityDesc::IsGroupDefaulted](#isgroupdefaulted)|Determines if the security descriptor's group security identifier (SID) was set by default.|
|[CSecurityDesc::IsOwnerDefaulted](#isownerdefaulted)|Determines if the security descriptor's owner SID was set by default.|
|[CSecurityDesc::IsSaclAutoInherited](#issaclautoinherited)|Determines if the SACL is configured to support automatic propagation.|
|[CSecurityDesc::IsSaclDefaulted](#issacldefaulted)|Determines if the security descriptor is configured with a default SACL.|
|[CSecurityDesc::IsSaclPresent](#issaclpresent)|Determines if the security descriptor contains a SACL.|
|[CSecurityDesc::IsSaclProtected](#issaclprotected)|Determines if the SACL is configured to prevent modifications.|
|[CSecurityDesc::IsSelfRelative](#isselfrelative)|Determines if the security descriptor is in self-relative format.|
|[CSecurityDesc::MakeAbsolute](#makeabsolute)|Call this method to convert the security descriptor to absolute format.|
|[CSecurityDesc::MakeSelfRelative](#makeselfrelative)|Call this method to convert the security descriptor to self-relative format.|
|[CSecurityDesc::SetControl](#setcontrol)|Sets the control bits of a security descriptor.|
|[CSecurityDesc::SetDacl](#setdacl)|Sets information in a DACL. If a DACL is already present in the security descriptor, it is replaced.|
|[CSecurityDesc::SetGroup](#setgroup)|Sets the primary group information of an absolute format security descriptor, replacing any primary group information already present.|
|[CSecurityDesc::SetOwner](#setowner)|Sets the owner information of an absolute format security descriptor, replacing any owner information already present.|
|[CSecurityDesc::SetSacl](#setsacl)|Sets information in a SACL. If a SACL is already present in the security descriptor, it is replaced.|
|[CSecurityDesc::ToString](#tostring)|Converts a security descriptor to a string format.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CSecurityDesc::operator const SECURITY_DESCRIPTOR *](#operator_const_security_descriptor__star)|Returns a pointer to the `SECURITY_DESCRIPTOR` structure.|
|[CSecurityDesc::operator =](#operator_eq)|Assignment operator.|

## Remarks

The `SECURITY_DESCRIPTOR` structure contains the security information associated with an object. Applications use this structure to set and query an object's security status. See also [AtlGetSecurityDescriptor](security-global-functions.md#atlgetsecuritydescriptor).

Applications should not modify the `SECURITY_DESCRIPTOR` structure directly, and instead should use the class methods provided.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Requirements

**Header:** atlsecurity.h

## <a name="csecuritydesc"></a> CSecurityDesc::CSecurityDesc

The constructor.

```
CSecurityDesc() throw();
CSecurityDesc(const CSecurityDesc& rhs) throw(... );
CSecurityDesc(const SECURITY_DESCRIPTOR& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `CSecurityDesc` object or `SECURITY_DESCRIPTOR` structure to assign to the new `CSecurityDesc` object.

### Remarks

The `CSecurityDesc` object can optionally be created using a `SECURITY_DESCRIPTOR` structure or a previously defined `CSecurityDesc` object.

## <a name="dtor"></a> CSecurityDesc::~CSecurityDesc

The destructor.

```
virtual ~CSecurityDesc() throw();
```

### Remarks

The destructor frees all allocated resources.

## <a name="fromstring"></a> CSecurityDesc::FromString

Converts a string-format security descriptor into a valid, functional security descriptor.

```
bool FromString(LPCTSTR pstr) throw(...);
```

### Parameters

*pstr*<br/>
Pointer to a null-terminated string that contains the [string-format security descriptor](/windows/win32/SecAuthZ/security-descriptor-string-format) to be converted.

### Return Value

Returns true on success. Throws an exception on failure.

### Remarks

The string can be created by using [CSecurityDesc::ToString](#tostring). Converting the security descriptor into a string makes it easier to store and transmit.

This method calls [ConvertStringSecurityDescriptorToSecurityDescriptor](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

## <a name="getcontrol"></a> CSecurityDesc::GetControl

Retrieves control information from the security descriptor.

```
bool GetControl(SECURITY_DESCRIPTOR_CONTROL* psdc) const throw();
```

### Parameters

*psdc*<br/>
Pointer to a `SECURITY_DESCRIPTOR_CONTROL` structure that receives the security descriptor's control information.

### Return Value

Returns true if the method succeeds, false if it fails.

### Remarks

This method calls [GetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-getsecuritydescriptorcontrol).

## <a name="getdacl"></a> CSecurityDesc::GetDacl

Retrieves discretionary access-control list (DACL) information from the security descriptor.

```
bool GetDacl(
    CDacl* pDacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### Parameters

*pDacl*<br/>
Pointer to an `CDacl` structure in which to store a copy of the security descriptor's DACL. If a discretionary ACL exists, the method sets *pDacl* to the address of the security descriptor's discretionary ACL. If a discretionary ACL does not exist, no value is stored.

*pbPresent*<br/>
Pointer to a value that indicates the presence of a discretionary ACL in the specified security descriptor. If the security descriptor contains a discretionary ACL, this parameter is set to true. If the security descriptor does not contain a discretionary ACL, this parameter is set to false.

*pbDefaulted*<br/>
Pointer to a flag set to the value of the SE_DACL_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure if a discretionary ACL exists for the security descriptor. If this flag is true, the discretionary ACL was retrieved by a default mechanism; if false, the discretionary ACL was explicitly specified by a user.

### Return Value

Returns true if the method succeeds, false if it fails.

## <a name="getgroup"></a> CSecurityDesc::GetGroup

Retrieves the primary group information from the security descriptor.

```
bool GetGroup(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid](../../atl/reference/csid-class.md) (security identifier) that receives a copy of the group stored in the CDacl.

*pbDefaulted*<br/>
Pointer to a flag set to the value of the SE_GROUP_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure when the method returns.

### Return Value

Returns true if the method succeeds, false if it fails.

## <a name="getowner"></a> CSecurityDesc::GetOwner

Retrieves owner informaton from the security descriptor.

```
bool GetOwner(
    CSid* pSid,
    bool* pbDefaulted = NULL) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid](../../atl/reference/csid-class.md) (security identifier) that receives a copy of the group stored in the CDacl.

*pbDefaulted*<br/>
Pointer to a flag set to the value of the SE_OWNER_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure when the method returns.

### Return Value

Returns true if the method succeeds, false if it fails.

## <a name="getpsecurity_descriptor"></a> CSecurityDesc::GetPSECURITY_DESCRIPTOR

Returns a pointer to the `SECURITY_DESCRIPTOR` structure.

```
const SECURITY_DESCRIPTOR* GetPSECURITY_DESCRIPTOR() const throw();
```

### Return Value

Returns a pointer to the [SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor) structure.

## <a name="getsacl"></a> CSecurityDesc::GetSacl

Retrieves system access-control list (SACL) information from the security descriptor.

```
bool GetSacl(
    CSacl* pSacl,
    bool* pbPresent = NULL,
    bool* pbDefaulted = NULL) const throw(...);
```

### Parameters

*pSacl*<br/>
Pointer to an `CSacl` structure in which to store a copy of the security descriptor's SACL. If a system ACL exists, the method sets *pSacl* to the address of the security descriptor's system ACL. If a system ACL does not exist, no value is stored.

*pbPresent*<br/>
Pointer to a flag the method sets to indicate the presence of a system ACL in the specified security descriptor. If the security descriptor contains a system ACL, this parameter is set to true. If the security descriptor does not contain a system ACL, this parameter is set to false.

*pbDefaulted*<br/>
Pointer to a flag set to the value of the SE_SACL_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure if a system ACL exists for the security descriptor.

### Return Value

Returns true if the method succeeds, false if it fails.

## <a name="isdaclautoinherited"></a> CSecurityDesc::IsDaclAutoInherited

Determines if the discretionary access-control list (DACL) is configured to support automatic propagation.

```
bool IsDaclAutoInherited() const throw();
```

### Return Value

Returns true if the security descriptor contains a DACL which is set up to support automatic propagation of inheritable access-control entries (ACEs) to existing child objects. Returns false otherwise.

### Remarks

The system sets this bit when it performs the automatic inheritance algorithm for the object and its existing child objects.

## <a name="isdacldefaulted"></a> CSecurityDesc::IsDaclDefaulted

Determines if the security descriptor is configured with a default discretionary access-control list (DACL).

```
bool IsDaclDefaulted() const throw();
```

### Return Value

Returns true if the security descriptor contains a default DACL, false otherwise.

### Remarks

This flag can affect how the system treats the DACL, with respect to access-control entry (ACE) inheritance. For example, if an object's creator does not specify a DACL, the object receives the default DACL from the creator's access token. The system ignores this flag if the SE_DACL_PRESENT flag is not set.

This flag is used to determine how the final DACL on the object is to be computed and is not stored physically in the security descriptor control of the securable object.

To set this flag, use the [CSecurityDesc::SetDacl](#setdacl) method.

## <a name="isdaclpresent"></a> CSecurityDesc::IsDaclPresent

Determines if the security descriptor contains a discretionary access-control list (DACL).

```
bool IsDaclPresent() const throw();
```

### Return Value

Returns true if the security descriptor contains a DACL, false otherwise.

### Remarks

If this flag is not set, or if this flag is set and the DACL is NULL, the security descriptor allows full access to everyone.

This flag is used to hold the security information specified by a caller until the security descriptor is associated with a securable object. Once the security descriptor is associated with a securable object, the SE_DACL_PRESENT flag is always set in the security descriptor control.

To set this flag, use the [CSecurityDesc::SetDacl](#setdacl) method.

## <a name="isdaclprotected"></a> CSecurityDesc::IsDaclProtected

Determines if the discretionary access-control list (DACL) is configured to prevent modifications.

```
bool IsDaclProtected() const throw();
```

### Return Value

Returns true if the DACL is configured to prevent the security descriptor from being modified by inheritable access-control entries (ACEs). Returns false otherwise.

### Remarks

To set this flag, use the [CSecurityDesc::SetDacl](#setdacl) method.

This method supports automatic propagation of inheritable ACEs.

## <a name="isgroupdefaulted"></a> CSecurityDesc::IsGroupDefaulted

Determines if the security descriptor's group security identifier (SID) was set by default.

```
bool IsGroupDefaulted() const throw();
```

### Return Value

Returns true if a default mechanism, rather than the original provider of the security descriptor, provided the security descriptor's group SID. Returns false otherwise.

### Remarks

To set this flag, use the [CSecurityDesc::SetGroup](#setgroup) method.

## <a name="isownerdefaulted"></a> CSecurityDesc::IsOwnerDefaulted

Determines if the security descriptor's owner security identifier (SID) was set by default.

```
bool IsOwnerDefaulted() const throw();
```

### Return Value

Returns true if a default mechanism, rather than the original provider of the security descriptor, provided the security descriptor's owner SID. Returns false otherwise.

### Remarks

To set this flag, use the [CSecurityDesc::SetOwner](#setowner) method.

## <a name="issaclautoinherited"></a> CSecurityDesc::IsSaclAutoInherited

Determines if the system access-control list (SACL) is configured to support automatic propagation.

```
bool IsSaclAutoInherited() const throw();
```

### Return Value

Returns true if the security descriptor contains a SACL which is set up to support automatic propagation of inheritable access-control entries (ACEs) to existing child objects. Returns false otherwise.

### Remarks

The system sets this bit when it performs the automatic inheritance algorithm for the object and its existing child objects.

## <a name="issacldefaulted"></a> CSecurityDesc::IsSaclDefaulted

Determines if the security descriptor is configured with a default system access-control list (SACL).

```
bool IsSaclDefaulted() const throw();
```

### Return Value

Returns true if the security descriptor contains a default SACL, false otherwise.

### Remarks

This flag can affect how the system treats the SACL, with respect to access-control entry (ACE) inheritance. The system ignores this flag if the SE_SACL_PRESENT flag is not set.

To set this flag, use the [CSecurityDesc::SetSacl](#setsacl) method.

## <a name="issaclpresent"></a> CSecurityDesc::IsSaclPresent

Determines if the security descriptor contains a system access-control list (SACL).

```
bool IsSaclPresent() const throw();
```

### Return Value

Returns true if the security descriptor contains a SACL, false otherwise.

### Remarks

To set this flag, use the [CSecurityDesc::SetSacl](#setsacl) method.

## <a name="issaclprotected"></a> CSecurityDesc::IsSaclProtected

Determines if the system access-control list (SACL) is configured to prevent modifications.

```
bool IsSaclProtected() const throw();
```

### Return Value

Returns true if the SACL is configured to prevent the security descriptor from being modified by inheritable access-control entries (ACEs). Returns false otherwise.

### Remarks

To set this flag, use the [CSecurityDesc::SetSacl](#setsacl) method.

This method supports automatic propagation of inheritable ACEs.

## <a name="isselfrelative"></a> CSecurityDesc::IsSelfRelative

Determines if the security descriptor is in self-relative format.

```
bool IsSelfRelative() const throw();
```

### Return Value

Returns true if the security descriptor is in self-relative format with all the security information in a contiguous block of memory. Returns false if the security descriptor is in absolute format. For more information, see [Absolute and Self-Relative Security Descriptors](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

## <a name="makeabsolute"></a> CSecurityDesc::MakeAbsolute

Call this method to convert the security descriptor to absolute format.

```
bool MakeAbsolute() throw(...);
```

### Return Value

Returns true if the method succeeds, false otherwise.

### Remarks

A security descriptor in absolute format contains pointers to the information it contains, rather than the information itself. A security descriptor in self-relative format contains the information in a contiguous block of memory. In a self-relative security descriptor, a `SECURITY_DESCRIPTOR` structure always starts the information, but the security descriptor's other components can follow the structure in any order. Instead of using memory addresses, the components of the self-relative security descriptor are identified by offsets from the beginning of the security descriptor. This format is useful when a security descriptor must be stored on a disk or transmitted by means of a communications protocol. For more information, see [Absolute and Self-Relative Security Descriptors](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

## <a name="makeselfrelative"></a> CSecurityDesc::MakeSelfRelative

Call this method to convert the security descriptor to self-relative format.

```
bool MakeSelfRelative() throw(...);
```

### Return Value

Returns true if the method succeeds, false otherwise.

### Remarks

A security descriptor in absolute format contains pointers to the information it contains, rather than containing the information itself. A security descriptor in self-relative format contains the information in a contiguous block of memory. In a self-relative security descriptor, a `SECURITY_DESCRIPTOR` structure always starts the information, but the security descriptor's other components can follow the structure in any order. Instead of using memory addresses, the components of the security descriptor are identified by offsets from the beginning of the security descriptor. This format is useful when a security descriptor must be stored on a disk or transmitted by means of a communications protocol. For more information, see [Absolute and Self-Relative Security Descriptors](/windows/win32/SecAuthZ/absolute-and-self-relative-security-descriptors).

## <a name="operator_eq"></a> CSecurityDesc::operator =

Assignment operator.

```
CSecurityDesc& operator= (const SECURITY_DESCRIPTOR& rhs) throw(...);
CSecurityDesc& operator= (const CSecurityDesc& rhs) throw(...);
```

### Parameters

*rhs*<br/>
The `SECURITY_DESCRIPTOR` structure or `CSecurityDesc` object to assign to the `CSecurityDesc` object.

### Return Value

Returns the updated `CSecurityDesc` object.

## <a name="operator_const_security_descriptor__star"></a> CSecurityDesc::operator const SECURITY_DESCRIPTOR *

Casts a value to a pointer to the `SECURITY_DESCRIPTOR` structure.

```
operator const SECURITY_DESCRIPTOR *() const throw();
```

## <a name="setcontrol"></a> CSecurityDesc::SetControl

Sets the control bits of a security descriptor.

```
bool SetControl(
    SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
    SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet) throw();
```

### Parameters

*ControlBitsOfInterest*<br/>
A SECURITY_DESCRIPTOR_CONTROL mask that indicates the control bits to set. For a list of the flags which can be set, see [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

*ControlBitsToSet*<br/>
A SECURITY_DESCRIPTOR_CONTROL mask that indicates the new values for the control bits specified by the *ControlBitsOfInterest* mask. This parameter can be a combination of the flags listed for the *ControlBitsOfInterest* parameter.

### Return Value

Returns true on success, false on failure.

### Remarks

This method calls [SetSecurityDescriptorControl](/windows/win32/api/securitybaseapi/nf-securitybaseapi-setsecuritydescriptorcontrol).

## <a name="setdacl"></a> CSecurityDesc::SetDacl

Sets information in a discretionary access-control list (DACL). If a DACL is already present in the security descriptor, it is replaced.

```
inline void SetDacl(
    bool bPresent = true,
    bool bDefaulted = false) throw(...);

inline void SetDacl(
    const CDacl& Dacl,
    bool bDefaulted = false) throw(...);
```

### Parameters

*Dacl*<br/>
Reference to a `CDacl` object specifying the DACL for the security descriptor. This parameter must not be NULL. To set a NULL DACL in the security descriptor, the first form of the method should be used with *bPresent* set to false.

*bPresent*<br/>
Specifies a flag indicating the presence of a DACL in the security descriptor. If this parameter is true, the method sets the SE_DACL_PRESENT flag in the `SECURITY_DESCRIPTOR_CONTROL` structure and uses the values in the *Dacl* and *bDefaulted* parameters. If it is false, the method clears the SE_DACL_PRESENT flag, and *bDefaulted* is ignored.

*bDefaulted*<br/>
Specifies a flag indicating the source of the DACL. If this flag is true, the DACL has been retrieved by some default mechanism. If false, the DACL has been explicitly specified by a user. The method stores this value in the SE_DACL_DEFAULTED flag of the `SECURITY_DESCRIPTOR_CONTROL` structure. If this parameter is not specified, the SE_DACL_DEFAULTED flag is cleared.

### Return Value

Returns true on success, false on failure.

### Remarks

There is an important difference between an empty and a nonexistent DACL. When a DACL is empty, it contains no access-control entries and no access rights have been explicitly granted. As a result, access to the object is implicitly denied. When an object has no DACL, on the other hand, no protection is assigned to the object, and any access request is granted.

## <a name="setgroup"></a> CSecurityDesc::SetGroup

Sets the primary group information of an absolute format security descriptor, replacing any primary group information already present.

```
bool SetGroup(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### Parameters

*Sid*<br/>
Reference to a [CSid](../../atl/reference/csid-class.md) object for the security descriptor's new primary group. This parameter must not be NULL. A security descriptor can be marked as not having a DACL or a SACL, but it must have a group and an owner, even it these are the NULL SID (which is a built-in SID with a special meaning).

*bDefaulted*<br/>
Indicates whether the primary group information was derived from a default mechanism. If this value is true, it is default information, and the method stores this value as the SE_GROUP_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure. If this parameter is zero, the SE_GROUP_DEFAULTED flag is cleared.

### Return Value

Returns true on success, false on failure.

## <a name="setowner"></a> CSecurityDesc::SetOwner

Sets the owner information of an absolute format security descriptor. It replaces any owner information already present.

```
bool SetOwner(const CSid& Sid, bool bDefaulted = false) throw(...);
```

### Parameters

*Sid*<br/>
The [CSid](../../atl/reference/csid-class.md) object for the security descriptor's new primary owner. This parameter must not be NULL.

*bDefaulted*<br/>
Indicates whether the owner information is derived from a default mechanism. If this value is true, it is default information. The method stores this value as the SE_OWNER_DEFAULTED flag in the `SECURITY_DESCRIPTOR_CONTROL` structure. If this parameter is zero, the SE_OWNER_DEFAULTED flag is cleared.

### Return Value

Returns true on success, false on failure.

## <a name="setsacl"></a> CSecurityDesc::SetSacl

Sets information in a system access-control list (SACL). If a SACL is already present in the security descriptor, it is replaced.

```
bool SetSacl(const CSacl& Sacl, bool bDefaulted = false) throw(...);
```

### Parameters

*Sacl*<br/>
Pointer to an `CSacl` object specifying the SACL for the security descriptor. This parameter must not be NULL, and must be a CSacl object. Unlike DACLs, there is no difference between NULL and an empty SACL, as SACL objects do not specify access rights, only auditing information.

*bDefaulted*<br/>
Specifies a flag indicating the source of the SACL. If this flag is true, the SACL has been retrieved by some default mechanism. If false, the SACL has been explicitly specified by a user. The method stores this value in the SE_SACL_DEFAULTED flag of the `SECURITY_DESCRIPTOR_CONTROL` structure. If this parameter is not specified, the SE_SACL_DEFAULTED flag is cleared.

### Return Value

Returns true on success, false on failure.

## <a name="tostring"></a> CSecurityDesc::ToString

Converts a security descriptor to a string format.

```
bool ToString(
    CString* pstr, SECURITY_INFORMATION si = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION) const throw(...);
```

### Parameters

*pstr*<br/>
Pointer to a null-terminated string which will receive the [string-format security descriptor](/windows/win32/SecAuthZ/security-descriptor-string-format).

*si*<br/>
Specifies a combination of SECURITY_INFORMATION bit flags to indicate the components of the security descriptor to include in the output string.

### Return Value

Returns true on success, false on failure.

### Remarks

Once the security descriptor is in string format, it can more easily be stored or transmitted. Use the `CSecurityDesc::FromString` method to convert the string back into a security descriptor.

The *si* parameter can contain the following SECURITY_INFORMATION flags:

|Value|Meaning|
|-----------|-------------|
|OWNER_SECURITY_INFORMATION|Include the owner.|
|GROUP_SECURITY_INFORMATION|Include the primary group.|
|DACL_SECURITY_INFORMATION|Include the DACL.|
|SACL_SECURITY_INFORMATION|Include the SACL.|

If the DACL is NULL and the SE_DACL_PRESENT control bit is set in the input security descriptor, the method fails.

If the DACL is NULL and the SE_DACL_PRESENT control bit is not set in the input security descriptor, the resulting security descriptor string does not have a D: component. See [Security Descriptor String Format](/windows/win32/SecAuthZ/security-descriptor-string-format) for more details.

This method calls [ConvertStringSecurityDescriptorToSecurityDescriptor](/windows/win32/api/sddl/nf-sddl-convertstringsecuritydescriptortosecuritydescriptorw).

## See also

[Security Sample](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
