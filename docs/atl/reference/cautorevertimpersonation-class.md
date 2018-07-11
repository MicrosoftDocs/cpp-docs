---
title: "CAutoRevertImpersonation Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAutoRevertImpersonation", "ATLSECURITY/ATL::CAutoRevertImpersonation", "ATLSECURITY/ATL::CAutoRevertImpersonation::CAutoRevertImpersonation", "ATLSECURITY/ATL::CAutoRevertImpersonation::Attach", "ATLSECURITY/ATL::CAutoRevertImpersonation::Detach", "ATLSECURITY/ATL::CAutoRevertImpersonation::GetAccessToken"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAutoRevertImpersonation class"]
ms.assetid: 43732849-1940-4bd4-9d52-7a5698bb8838
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAutoRevertImpersonation Class
This class reverts [CAccessToken](../../atl/reference/caccesstoken-class.md) objects to a nonimpersonating state when it goes out of scope.  
  
## Syntax  
  
```
class CAutoRevertImpersonation
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoRevertImpersonation::CAutoRevertImpersonation](#cautorevertimpersonation)|Constructs an `CAutoRevertImpersonation` object|  
|[CAutoRevertImpersonation::~CAutoRevertImpersonation](#dtor)|Destroys the object and reverts access token impersonation.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoRevertImpersonation::Attach](#attach)|Automates the impersonation reversion of an access token.|  
|[CAutoRevertImpersonation::Detach](#detach)|Cancels the automatic impersonation reversion.|  
|[CAutoRevertImpersonation::GetAccessToken](#getaccesstoken)|Retrieves the access token current associated with this object.|  
  
## Remarks  
 An [access token](http://msdn.microsoft.com/library/windows/desktop/aa374909) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows NT or Windows 2000 system. These access tokens can be represented with the `CAccessToken` class.  
  
 It is sometimes necessary to impersonate access tokens. This class is provided as a convenience, but it does not perform the impersonation of access tokens; it only performs the automatic reversion to a nonimpersonated state. This is because token access impersonation can be performed several different ways.  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the Windows SDK.  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="attach"></a>  CAutoRevertImpersonation::Attach  
 Automates the impersonation reversion of an access token.  
  
```
void Attach(const CAccessToken* pAT) throw();
```  
  
### Parameters  
 *pAT*  
 The address of the [CAccessToken](../../atl/reference/caccesstoken-class.md) object to be reverted automatically  
  
### Remarks  
 This method should only be used if the [CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) object was created with a NULL `CAccessToken` pointer, or if [Detach](#detach) was called previously. For simple cases, it is not necessary to use this method.  
  
##  <a name="cautorevertimpersonation"></a>  CAutoRevertImpersonation::CAutoRevertImpersonation  
 Constructs a `CAutoRevertImpersonation` object.  
  
```
CAutoRevertImpersonation(const CAccessToken* pAT) throw();
```  
  
### Parameters  
 *pAT*  
 The address of the [CAccessToken](../../atl/reference/caccesstoken-class.md) object to be reverted automatically.  
  
### Remarks  
 The actual impersonation of the access token should be performed separately from and preferably before the creation of a `CAutoRevertImpersonation` object. This impersonation will be reverted automatically when the `CAutoRevertImpersonation` object goes out of scope.  
  
##  <a name="dtor"></a>  CAutoRevertImpersonation::~CAutoRevertImpersonation  
 Destroys the object and reverts access token impersonation.  
  
```
~CAutoRevertImpersonation() throw();
```  
  
### Remarks  
 Reverts any impersonation currently in effect for the [CAccessToken](../../atl/reference/caccesstoken-class.md) object provided either at construction or through the [Attach](#attach) method. If no `CAccessToken` is associated, the destructor has no effect.  
  
##  <a name="detach"></a>  CAutoRevertImpersonation::Detach  
 Cancels the automatic impersonation reversion.  
  
```
const CAccessToken* Detach() throw();
```  
  
### Return Value  
 The address of the previously associated [CAccessToken](../../atl/reference/caccesstoken-class.md), or NULL if no association existed.  
  
### Remarks  
 Calling **Detach** prevents the `CAutoRevertImpersonation` object from reverting any impersonation currently in effect for the [CAccessToken](../../atl/reference/caccesstoken-class.md) object associated with this object. `CAutoRevertImpersonation` can then be destroyed with no effect or reassociated to the same or another `CAccessToken` object using [Attach](#attach).  
  
##  <a name="getaccesstoken"></a>  CAutoRevertImpersonation::GetAccessToken  
 Retrieves the access token current associated with this object.  
  
```
const CAccessToken* GetAccessToken() throw();
```  
  
### Return Value  
 The address of the previously associated [CAccessToken](../../atl/reference/caccesstoken-class.md), or NULL if no association existed.  
  
### Remarks  
 If this method is called for the purposes that include the reversion of an impersonation of the `CAccessToken` object, the [Detach](#detach) method should be used instead.  
  
## See Also  
 [ATLSecurity Sample](../../visual-cpp-samples.md)   
 [Access Tokens](http://msdn.microsoft.com/library/windows/desktop/aa374909)   
 [Class Overview](../../atl/atl-class-overview.md)
