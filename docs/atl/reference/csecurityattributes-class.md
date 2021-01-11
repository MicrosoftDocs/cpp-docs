---
description: "Learn more about: CSecurityAttributes Class"
title: "CSecurityAttributes Class"
ms.date: "11/04/2016"
f1_keywords: ["CSecurityAttributes", "ATLSECURITY/ATL::CSecurityAttributes", "ATLSECURITY/ATL::CSecurityAttributes::CSecurityAttributes", "ATLSECURITY/ATL::CSecurityAttributes::Set"]
helpviewer_keywords: ["CSecurityAttributes class"]
ms.assetid: a094880c-52e1-4a28-97ff-752d5869908e
---
# CSecurityAttributes Class

This class is a thin wrapper for the security attributes structure.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSecurityAttributes::CSecurityAttributes](#csecurityattributes)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSecurityAttributes::Set](#set)|Call this method to set the attributes of the `CSecurityAttributes` object.|

## Remarks

The `SECURITY_ATTRIBUTES` structure contains a [security descriptor](/windows/win32/api/winnt/ns-winnt-security_descriptor) used for the creation of an object and specifies whether the handle retrieved by specifying this structure is inheritable.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Inheritance Hierarchy

`SECURITY_ATTRIBUTES`

`CSecurityAttributes`

## Requirements

**Header:** atlsecurity.h

## <a name="csecurityattributes"></a> CSecurityAttributes::CSecurityAttributes

The constructor.

```
CSecurityAttributes() throw();
explicit CSecurityAttributes(const CSecurityDesc& rSecurityDescriptor, bool bInheritsHandle = false) throw(...);
```

### Parameters

*rSecurityDescriptor*<br/>
Reference to a security descriptor.

*bInheritsHandle*<br/>
Specifies whether the returned handle is inherited when a new process is created. If this member is true, the new process inherits the handle.

## <a name="set"></a> CSecurityAttributes::Set

Call this method to set the attributes of the `CSecurityAttributes` object.

```cpp
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```

### Parameters

*rSecurityDescriptor*<br/>
Reference to a security descriptor.

*bInheritHandle*<br/>
Specifies whether the returned handle is inherited when a new process is created. If this member is true, the new process inherits the handle.

### Remarks

This method is used by the constructor to initialize the `CSecurityAttributes` object.

## See also

[Security Sample](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\))<br/>
[security descriptor](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Security Global Functions](../../atl/reference/security-global-functions.md)
