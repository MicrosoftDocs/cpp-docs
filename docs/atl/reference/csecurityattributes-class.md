---
title: "CSecurityAttributes Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSecurityAttributes"
  - "ATL::CSecurityAttributes"
  - "CSecurityAttributes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSecurityAttributes class"
ms.assetid: a094880c-52e1-4a28-97ff-752d5869908e
caps.latest.revision: 24
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
# CSecurityAttributes Class
This class is a thin wrapper for the security attributes structure.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSecurityAttributes::CSecurityAttributes](#csecurityattributes__csecurityattributes)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSecurityAttributes::Set](#csecurityattributes__set)|Call this method to set the attributes of the `CSecurityAttributes` object.|  
  
## Remarks  
 The **SECURITY_ATTRIBUTES** structure contains a [security descriptor](http://msdn.microsoft.com/library/windows/desktop/aa379561) used for the creation of an object and specifies whether the handle retrieved by specifying this structure is inheritable.  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Inheritance Hierarchy  
 `SECURITY_ATTRIBUTES`  
  
 `CSecurityAttributes`  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="csecurityattributes__csecurityattributes"></a>  CSecurityAttributes::CSecurityAttributes  
 The constructor.  
  
```
CSecurityAttributes() throw();
explicit CSecurityAttributes(
    const CSecurityDesc& rSecurityDescriptor,
    bool bInheritsHandle = false) throw(...);
```  
  
### Parameters  
 `rSecurityDescriptor`  
 Reference to a security descriptor.  
  
 `bInheritsHandle`  
 Specifies whether the returned handle is inherited when a new process is created. If this member is true, the new process inherits the handle.  
  
##  <a name="csecurityattributes__set"></a>  CSecurityAttributes::Set  
 Call this method to set the attributes of the `CSecurityAttributes` object.  
  
```
void Set(const CSecurityDesc& rSecurityDescriptor,  bool bInheritHandle = false) throw(...);
```  
  
### Parameters  
 `rSecurityDescriptor`  
 Reference to a security descriptor.  
  
 `bInheritHandle`  
 Specifies whether the returned handle is inherited when a new process is created. If this member is true, the new process inherits the handle.  
  
### Remarks  
 This method is used by the constructor to initialize the `CSecurityAttributes` object.  
  
## See Also  
 [Security Sample](../../visual-cpp-samples.md)   
 [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560)   
 [security descriptor](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)
