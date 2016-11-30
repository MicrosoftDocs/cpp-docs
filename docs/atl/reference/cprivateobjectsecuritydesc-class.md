---
title: "CPrivateObjectSecurityDesc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CPrivateObjectSecurityDesc"
  - "ATL::CPrivateObjectSecurityDesc"
  - "CPrivateObjectSecurityDesc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrivateObjectSecurityDesc class"
ms.assetid: 2c4bbb13-bf99-4833-912a-197f6815bb5d
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
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc__cprivateobjectsecuritydesc)|The constructor.|  
|[CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc___dtorcprivateobjectsecuritydesc)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](#cprivateobjectsecuritydesc__converttoautoinherit)|Call this method to convert a security descriptor and its access-control lists (ACLs) to a format that supports automatic propagation of inheritable access-control entries (ACEs).|  
|[CPrivateObjectSecurityDesc::Create](#cprivateobjectsecuritydesc__create)|Call this method to allocate and initialize a self-relative security descriptor for the private object created by the calling resource manager.|  
|[CPrivateObjectSecurityDesc::Get](#cprivateobjectsecuritydesc__get)|Call this method to retrieve information from a private object's security descriptor.|  
|[CPrivateObjectSecurityDesc::Set](#cprivateobjectsecuritydesc__set)|Call this method to modify a private object's security descriptor.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#cprivateobjectsecuritydesc__operator_eq)|Assignment operator.|  
  
## Remarks  
 This class, derived from [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), provides methods for creating and managing the security descriptor of a private object.  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Inheritance Hierarchy  
 [CSecurityDesc](../../atl/reference/csecuritydesc-class.md)  
  
 `CPrivateObjectSecurityDesc`  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="cprivateobjectsecuritydesc__converttoautoinherit"></a>  CPrivateObjectSecurityDesc::ConvertToAutoInherit  
 Call this method to convert a security descriptor and its access-control lists (ACLs) to a format that supports automatic propagation of inheritable access-control entries (ACEs).  
  
```
bool ConvertToAutoInherit(const CSecurityDesc* pParent,
    GUID* ObjectType,
    bool bIsDirectoryObject,
    PGENERIC_MAPPING GenericMapping) throw();
```  
  
### Parameters  
 `pParent`  
 Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object referencing the parent container of the object. If there is no parent container, this parameter is NULL.  
  
 `ObjectType`  
 Pointer to a **GUID** structure that identifies the type of object associated with the current object. Set `ObjectType` to NULL if the object does not have a GUID.  
  
 `bIsDirectoryObject`  
 Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.  
  
 `GenericMapping`  
 Pointer to a [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) structure that specifies the mapping from each generic right to specific rights for the object.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 This method attempts to determine whether the ACEs in the discretionary access-control list (DACL) and system access-control list (SACL) of the current security descriptor were inherited from the parent security descriptor. It calls the [ConvertToAutoInheritPrivateObjectSecurity](http://msdn.microsoft.com/library/windows/desktop/aa376403) function.  
  
##  <a name="cprivateobjectsecuritydesc__cprivateobjectsecuritydesc"></a>  CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc  
 The constructor.  
  
```
CPrivateObjectSecurityDesc() throw();
```  
  
### Remarks  
 Initializes the `CPrivateObjectSecurityDesc` object.  
  
##  <a name="cprivateobjectsecuritydesc___dtorcprivateobjectsecuritydesc"></a>  CPrivateObjectSecurityDesc::~CPrivateObjectSecurityDesc  
 The destructor.  
  
```
~CPrivateObjectSecurityDesc() throw();
```  
  
### Remarks  
 The destructor frees all allocated resources and deletes the private object's security descriptor.  
  
##  <a name="cprivateobjectsecuritydesc__create"></a>  CPrivateObjectSecurityDesc::Create  
 Call this method to allocate and initialize a self-relative security descriptor for the private object created by the calling resource manager.  
  
```
bool Create(const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    bool bIsDirectoryObject,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();
bool Create(const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    GUID* ObjectType,
    bool bIsContainerObject,
    ULONG AutoInheritFlags,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();
```  
  
### Parameters  
 `pParent`  
 Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object referencing the parent directory in which a new object is being created. Set to NULL if there is no parent directory.  
  
 `pCreator`  
 Pointer to a security descriptor provided by the creator of the object. If the object's creator does not explicitly pass security information for the new object, set this parameter to NULL.  
  
 `bIsDirectoryObject`  
 Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.  
  
 `Token`  
 Reference to the [CAccessToken](../../atl/reference/caccesstoken-class.md) object for the client process on whose behalf the object is being created.  
  
 `GenericMapping`  
 Pointer to a [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) structure that specifies the mapping from each generic right to specific rights for the object.  
  
 `ObjectType`  
 Pointer to a **GUID** structure that identifies the type of object associated with the current object. Set `ObjectType` to NULL if the object does not have a GUID.  
  
 *bIsContainerObject*  
 Specifies whether the new object can contain other objects. A value of true indicates that the new object is a container. A value of false indicates that the new object is not a container.  
  
 `AutoInheritFlags`  
 A set of bit flags that control how access-control entries (ACEs) are inherited from `pParent`. See [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581) for more details.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 This method calls [CreatePrivateObjectSercurity](http://msdn.microsoft.com/library/windows/desktop/aa376405) or [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581).  
  
 The second method, which permits specifying the object type GUID of the new object or controlling how ACEs are inherited, is only available on systems running Windows 2000 and later.  
  
> [!NOTE]
>  A self-relative security descriptor is a security descriptor that stores all of its security information in a contiguous block of memory.  
  
##  <a name="cprivateobjectsecuritydesc__get"></a>  CPrivateObjectSecurityDesc::Get  
 Call this method to retrieve information from a private object's security descriptor.  
  
```
bool Get(SECURITY_INFORMATION si,
    CSecurityDesc* pResult) const throw();
```  
  
### Parameters  
 `si`  
 A set of bit flags that indicate the parts of the security descriptor to retrieve. This value can be a combination of the [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) bit flags.  
  
 `pResult`  
 Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object that receives a copy of the requested information from the specified security descriptor.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 The security descriptor is a structure and associated data that contains the security information for a securable object.  
  
##  <a name="cprivateobjectsecuritydesc__operator_eq"></a>  CPrivateObjectSecurityDesc::operator =  
 Assignment operator.  
  
```
CPrivateObjectSecurityDesc& operator= (const CPrivateObjectSecurityDesc& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `CPrivateObjectSecurityDesc` object to assign to the current object.  
  
### Return Value  
 Returns the updated `CPrivateObjectSecurityDesc` object.  
  
##  <a name="cprivateobjectsecuritydesc__set"></a>  CPrivateObjectSecurityDesc::Set  
 Call this method to modify a private object's security descriptor.  
  
```
bool Set(SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();
bool Set(SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    ULONG AutoInheritFlags,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();
```  
  
### Parameters  
 `si`  
 A set of bit flags that indicate the parts of the security descriptor to set. This value can be a combination of the [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) bit flags.  
  
 *Modification*  
 Pointer to a [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) object. The parts of this security descriptor indicated by the `si` parameter are applied to the object's security descriptor.  
  
 `GenericMapping`  
 Pointer to a [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) structure that specifies the mapping from each generic right to specific rights for the object.  
  
 `Token`  
 Reference to the [CAccessToken](../../atl/reference/caccesstoken-class.md) object for the client process on whose behalf the object is being created.  
  
 `AutoInheritFlags`  
 A set of bit flags that control how access-control entries (ACEs) are inherited from `pParent`. See [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581) for more details.  
  
### Return Value  
 Returns true on success, false on failure.  
  
### Remarks  
 The second method, which permits specifying the object type GUID of the object or controlling how ACEs are inherited, is only available on systems running Windows 2000 and later.  
  
## See Also  
 [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)   
 [CSecurityDesc Class](../../atl/reference/csecuritydesc-class.md)
