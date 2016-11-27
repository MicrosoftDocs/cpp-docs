---
title: "CAcl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAcl"
  - "ATL::CAcl"
  - "ATLSECURITY/CAcl"
  - "ATL.CAcl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAcl class"
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
caps.latest.revision: 21
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
# CAcl Class
This class is a wrapper for an `ACL` (access-control list) structure.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAcl
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CAcl::CAccessMaskArray](#cacl__caccessmaskarray)|An array of `ACCESS_MASK`s.|  
|[CAcl::CAceFlagArray](#cacl__caceflagarray)|An array of `BYTE`s.|  
|[CAcl::CAceTypeArray](#cacl__cacetypearray)|An array of `BYTE`s.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAcl::CAcl](#cacl__cacl)|The constructor.|  
|[CAcl::~CAcl](#cacl___dtorcacl)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAcl::GetAceCount](#cacl__getacecount)|Returns the number of access-control entry (ACE) objects.|  
|[CAcl::GetAclEntries](#cacl__getaclentries)|Retrieves the access-control list (ACL) entries from the `CAcl` object.|  
|[CAcl::GetAclEntry](#cacl__getaclentry)|Retrieves all of the information about an entry in a `CAcl` object.|  
|[CAcl::GetLength](#cacl__getlength)|Returns the length of the ACL.|  
|[CAcl::GetPACL](#cacl__getpacl)|Returns a PACL (pointer to an ACL).|  
|[CAcl::IsEmpty](#cacl__isempty)|Tests the `CAcl` object for entries.|  
|[CAcl::IsNull](#cacl__isnull)|Returns the status of the `CAcl` object.|  
|[CAcl::RemoveAce](#cacl__removeace)|Removes a specific ACE (access-control entry) from the `CAcl` object.|  
|[CAcl::RemoveAces](#cacl__removeaces)|Removes all ACEs (access-control entries) from the `CAcl` that apply to the given `CSid`.|  
|[CAcl::SetEmpty](#cacl__setempty)|Marks the `CAcl` object as empty.|  
|[CAcl::SetNull](#cacl__setnull)|Marks the `CAcl` object as `NULL`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAcl::operator const ACL *](#cacl__operator_const_acl__star)|Casts a `CAcl` object to an `ACL` structure.|  
|[CAcl::operator =](#cacl__operator_eq)|Assignment operator.|  
  
## Remarks  
 The **ACL** structure is the header of an ACL (access-control list). An ACL includes a sequential list of zero or more [ACEs](http://msdn.microsoft.com/library/windows/desktop/aa374868) (access-control entries). The individual ACEs in an ACL are numbered from 0 to *n-1*, where *n* is the number of ACEs in the ACL. When editing an ACL, an application refers to an access-control entry (ACE) within the ACL by its index.  
  
 There are two ACL types:  
  
-   Discretionary  
  
-   System  
  
 A discretionary ACL is controlled by the owner of an object or anyone granted **WRITE_DAC** access to the object. It specifies the access particular users and groups can have to an object. For example, the owner of a file can use a discretionary ACL to control which users and groups can and cannot have access to the file.  
  
 An object can also have system-level security information associated with it, in the form of a system ACL controlled by a system administrator. A system ACL can allow the system administrator to audit any attempts to gain access to an object.  
  
 For more details, see the [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872) discussion in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="cacl__caccessmaskarray"></a>  CAcl::CAccessMaskArray  
 An array of ACCESS_MASK objects.  
  
```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```  
  
### Remarks  
 This typedef specifies the array type that can be used to store access rights used in access-control entries (ACEs).  
  
##  <a name="cacl__caceflagarray"></a>  CAcl::CAceFlagArray  
 An array of BYTEs.  
  
```
typedef CAtlArray<BYTE> CAceFlagArray;
```  
  
### Remarks  
 This typedef specifies the array type used to define the access-control entry (ACE) type-specific control flags. See the [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definition for the complete list of possible flags.  
  
##  <a name="cacl__cacetypearray"></a>  CAcl::CAceTypeArray  
 An array of BYTEs.  
  
```
typedef CAtlArray<BYTE> CAceTypeArray;
```  
  
### Remarks  
 This typedef specifies the array type used to define the nature of the access-control entry (ACE) objects, such as ACCESS_ALLOWED_ACE_TYPE or ACCESS_DENIED_ACE_TYPE. See the [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definition for the complete list of possible types.  
  
##  <a name="cacl__cacl"></a>  CAcl::CAcl  
 The constructor.  
  
```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 An existing `CAcl` object.  
  
### Remarks  
 The `CAcl` object can be optionally created using an existing `CAcl` object.  
  
##  <a name="cacl___dtorcacl"></a>  CAcl::~CAcl  
 The destructor.  
  
```
virtual ~CAcl() throw();
```  
  
### Remarks  
 The destructor frees any resources acquired by the object.  
  
##  <a name="cacl__getacecount"></a>  CAcl::GetAceCount  
 Returns the number of access-control entry (ACE) objects.  
  
```
virtual UINT GetAceCount() const throw() = 0;
```  
  
### Return Value  
 Returns the number of ACE entries in the `CAcl` object.  
  
##  <a name="cacl__getaclentries"></a>  CAcl::GetAclEntries  
 Retrieves the access-control list (ACL) entries from the `CAcl` object.  
  
```
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
 CAceTypeArray* pAceTypes = NULL,
 CAceFlagArray* pAceFlags = NULL) const throw(...);
```  
  
### Parameters  
 `pSids`  
 A pointer to an array of [CSid](../../atl/reference/csid-class.md) objects.  
  
 *pAccessMasks*  
 The access masks.  
  
 *pAceTypes*  
 The access-control entry ( **ACE**) types.  
  
 *pAceFlags*  
 The **ACE** flags.  
  
### Remarks  
 This method fills the array parameters with the details of every **ACE** object contained in the `CAcl` object. Use NULL when the details for that particular array are not required.  
  
 The contents of each array correspond to each other, that is, the first element of the `CAccessMaskArray` array corresponds to the first element in the `CSidArray` array, and so on.  
  
 See [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) for more details on ACE types and flags.  
  
##  <a name="cacl__getaclentry"></a>  CAcl::GetAclEntry  
 Retrieves all of the information about an entry in an access-control list (ACL).  
  
```
void GetAclEntry(
    UINT nIndex,
    CSid* pSid,
    ACCESS_MASK* pMask = NULL,
 BYTE* pType = NULL,
    BYTE* pFlags = NULL,
    GUID* pObjectType = NULL,
    GUID* pInheritedObjectType = NULL) const throw(...);
```  
  
### Parameters  
 `nIndex`  
 Index to the ACL entry to retrieve.  
  
 `pSid`  
 The [CSid](../../atl/reference/csid-class.md) object to which the ACL entry applies.  
  
 *pMask*  
 The mask specifying permissions to grant or deny access.  
  
 `pType`  
 The ACE type.  
  
 `pFlags`  
 The ACE flags.  
  
 `pObjectType`  
 The object type. This will be set to GUID_NULL if the object type is not specified in the ACE, or if the ACE is not an OBJECT ACE.  
  
 `pInheritedObjectType`  
 The inherited object type. This will be set to GUID_NULL if the inherited object type is not specified in the ACE, or if the ACE is not an OBJECT ACE.  
  
### Remarks  
 This method will retrieve all of the information about an individual ACE, providing more information than [CAcl::GetAclEntries](#cacl__getaclentries) alone makes available.  
  
 See [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) for more details on ACE types and flags.  
  
##  <a name="cacl__getlength"></a>  CAcl::GetLength  
 Returns the length of the access-control list (ACL).  
  
```
UINT GetLength() const throw();
```  
  
### Return Value  
 Returns the required length in bytes necessary to hold the **ACL** structure.  
  
##  <a name="cacl__getpacl"></a>  CAcl::GetPACL  
 Returns a pointer to an access-control list (ACL).  
  
```
const ACL* GetPACL() const throw(...);
```  
  
### Return Value  
 Returns a pointer to the **ACL** structure.  
  
##  <a name="cacl__isempty"></a>  CAcl::IsEmpty  
 Tests the `CAcl` object for entries.  
  
```
bool IsEmpty() const throw();
```  
  
### Remarks  
 Returns **true** if the `CAcl` object is not NULL, and contains no entries. Returns **false** if the `CAcl` object is either NULL, or contains at least one entry.  
  
##  <a name="cacl__isnull"></a>  CAcl::IsNull  
 Returns the status of the `CAcl` object.  
  
```
bool IsNull() const throw();
```  
  
### Return Value  
 Returns **true** if the `CAcl` object is NULL, **false** otherwise.  
  
##  <a name="cacl__operator_const_acl__star"></a>  CAcl::operator const ACL *  
 Casts a `CAcl` object to an **ACL** (access-control list) structure.  
  
```operator const ACL *() const throw(...);
```  
  
### Remarks  
 Returns the address of the **ACL** structure.  
  
##  <a name="cacl__operator_eq"></a>  CAcl::operator =  
 Assignment operator.  
  
```
CAcl& operator= (const CAcl& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `CAcl` to assign to the existing object.  
  
### Return Value  
 Returns a reference to the updated `CAcl` object.  
  
##  <a name="cacl__removeace"></a>  CAcl::RemoveAce  
 Removes a specific ACE (access-control entry) from the **CAcl** object.  
  
```
void RemoveAce(UINT   nIndex) throw();
```  
  
### Parameters  
 `nIndex`  
 Index to the ACE entry to remove.  
  
### Remarks  
 This method is derived from [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#catlarray__removeat).  
  
##  <a name="cacl__removeaces"></a>  CAcl::RemoveAces  
 Removes alls ACEs (access-control entries) from the `CAcl` that apply to the given `CSid`.  
  
```
bool RemoveAces(const CSid& rSid) throw(...)
```  
  
### Parameters  
 `rSid`  
 A reference to a `CSid` object.  
  
##  <a name="cacl__setempty"></a>  CAcl::SetEmpty  
 Marks the `CAcl` object as empty.  
  
```
void SetEmpty() throw();
```  
  
### Remarks  
 The `CAcl` can be set to empty or to NULL: the two states are distinct.  
  
##  <a name="cacl__setnull"></a>  CAcl::SetNull  
 Marks the `CAcl` object as NULL.  
  
```
void SetNull() throw();
```  
  
### Remarks  
 The `CAcl` can be set to empty or to NULL: the two states are distinct.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)
