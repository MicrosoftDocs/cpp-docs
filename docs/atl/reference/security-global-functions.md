---
title: "Security Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SIDs [C++], modifying SID objects"
  - "ACL object global functions"
  - "security IDs [C++]"
ms.assetid: 6a584bfe-16b7-47f4-8439-9c789c41567a
caps.latest.revision: 20
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
# Security Global Functions
These functions provide support for modifying SID and ACL objects.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
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
  
##  <a name="atlgetdacl"></a>  AtlGetDacl  
 Call this function to retrieve the discretionary access-control list (DACL) information of a specified object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CDacl* pDacl) throw();
```  
  
### Parameters  
 `hObject`  
 Handle to the object for which to retrieve the security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `pDacl`  
 Pointer to a DACL object which will contain the retrieved security information.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 In debug builds, an assertion error will occur if either `hObject` or `pDacl` is invalid *.*  
  
##  <a name="atlsetdacl"></a>  AtlSetDacl  
 Call this function to set the discretionary access-control list (DACL) information of a specified object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CDacl& rDacl,
    DWORD dwInheritanceFlowControl = 0) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object for which to set security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `rDacl`  
 The DACL containing the new security information.  
  
 `dwInheritanceFlowControl`  
 The inheritance flow control. This value can be 0 (the default), PROTECTED_DACL_SECURITY_INFORMATION or UNPROTECTED_DACL_SECURITY_INFORMATION.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 In debug builds, an assertion error will occur if `hObject` is invalid, or if `dwInheritanceFlowControl` is not one of the three permitted values.  
  
##  <a name="atlgetgroupsid"></a>  AtlGetGroupSid  
 Call this function to retrieve the group security identifier (SID) of an object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object from which to retrieve security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `pSid`  
 Pointer to a `CSid` object which will contain the new security information.  
  
### Return Value  
 Returns true on success, false on failure.  
  
##  <a name="atlsetgroupsid"></a>  AtlSetGroupSid  
 Call this function to set the group security identifier (SID) of an object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object for which to set security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `rSid`  
 The `CSid` object containing the new security information.  
  
### Return Value  
 Returns true on success, false on failure.  
  
##  <a name="atlgetownersid"></a>  AtlGetOwnerSid  
 Call this function to retrieve the owner security identifier (SID) of an object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object from which to retrieve security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `pSid`  
 Pointer to a `CSid` object which will contain the new security information.  
  
### Return Value  
 Returns true on success, false on failure.  
  
##  <a name="atlsetownersid"></a>  AtlSetOwnerSid  
 Call this function to set the owner security identifier (SID) of an object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object for which to set security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `rSid`  
 The `CSid` object containing the new security information.  
  
### Return Value  
 Returns true on success, false on failure.  
  
##  <a name="atlgetsacl"></a>  AtlGetSacl  
 Call this function to retrieve the system access-control list (SACL) information of a specified object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSacl* pSacl,
    bool bRequestNeededPrivileges = true) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object from which to retrieve the security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 `pSacl`  
 Pointer to a SACL object which will contain the retrieved security information.  
  
 `bRequestNeededPrivileges`  
 If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 If `AtlGetSacl` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with `bRequestNeededPrivileges` set to false.  
  
##  <a name="atlsetsacl"></a>  AtlSetSacl  
 Call this function to set the system access-control list (SACL) information of a specified object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSacl& rSacl,
    DWORD dwInheritanceFlowControl = 0,
    bool bRequestNeededPrivileges = true) throw(...);
```  
  
### Parameters  
 `hObject`  
 Handle to the object for which to set security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the `hObject` parameter.  
  
 *rSacl*  
 The SACL containing the new security information.  
  
 `dwInheritanceFlowControl`  
 The inheritance flow control. This value can be 0 (the default), PROTECTED_SACL_SECURITY_INFORMATION or UNPROTECTED_SACL_SECURITY_INFORMATION.  
  
 `bRequestNeededPrivileges`  
 If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 In debug builds, an assertion error will occur if `hObject` is invalid, or if `dwInheritanceFlowControl` is not one of the three permitted values.  
  
 If `AtlSetSacl` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with `bRequestNeededPrivileges` set to false.  
  
##  <a name="atlgetsecuritydescriptor"></a>  AtlGetSecurityDescriptor  
 Call this function to retrieve the security descriptor of a given object.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 *pszObjectName*  
 Pointer to a null-terminated string that specifies the name of the object from which to retrieve security information.  
  
 `ObjectType`  
 Specifies a value from the [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumeration that indicates the type of object identified by the *pszObjectName* parameter.  
  
 *pSecurityDescriptor*  
 The object which receives the requested security descriptor.  
  
 *requestedInfo*  
 A set of [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) bit flags that indicate the type of security information to retrieve. This parameter can be a combination of the following values.  
  
 `bRequestNeededPrivileges`  
 If true, the function will attempt to enable the SE_SECURITY_NAME privilege, and restore it on completion.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 If `AtlGetSecurityDescriptor` is to be called many times on many different objects, it will be more efficient to enable the SE_SECURITY_NAME privilege once before calling the function, with `bRequestNeededPrivileges` set to false.  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)
