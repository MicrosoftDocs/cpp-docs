---
title: "CTokenGroups Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CTokenGroups"
  - "ATL.CTokenGroups"
  - "CTokenGroups"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTokenGroups class"
ms.assetid: 2ab08076-4b08-4487-bc70-ec6dee304190
caps.latest.revision: 23
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
# CTokenGroups Class
This class is a wrapper for the **TOKEN_GROUPS** structure.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CTokenGroups
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenGroups::CTokenGroups](#ctokengroups__ctokengroups)|The constructor.|  
|[CTokenGroups::~CTokenGroups](#ctokengroups___dtorctokengroups)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenGroups::Add](#ctokengroups__add)|Adds a `CSid` or existing **TOKEN_GROUPS** structure to the `CTokenGroups` object.|  
|[CTokenGroups::Delete](#ctokengroups__delete)|Deletes a `CSid` and its associated attributes from the `CTokenGroups` object.|  
|[CTokenGroups::DeleteAll](#ctokengroups__deleteall)|Deletes all `CSid` objects and their associated attributes from the `CTokenGroups` object.|  
|[CTokenGroups::GetCount](#ctokengroups__getcount)|Returns the number of `CSid` objects and associated attributes contained in the **CTokenGroups** object.|  
|[CTokenGroups::GetLength](#ctokengroups__getlength)|Returns the size of the `CTokenGroups` object.|  
|[CTokenGroups::GetPTOKEN_GROUPS](#ctokengroups__getptoken_groups)|Retrieves a pointer to the **TOKEN_GROUPS** structure.|  
|[CTokenGroups::GetSidsAndAttributes](#ctokengroups__getsidsandattributes)|Retrieves the `CSid` objects and attributes belonging to the `CTokenGroups` object.|  
|[CTokenGroups::LookupSid](#ctokengroups__lookupsid)|Retrieves the attributes associated with a `CSid` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CTokenGroups::operator const TOKEN_GROUPS *](#ctokengroups__operator_const_token_groups__star)|Casts the `CTokenGroups` object to a pointer to the **TOKEN_GROUPS** structure.|  
|[CTokenGroups::operator =](#ctokengroups__operator_eq)|Assignment operator.|  
  
## Remarks  
 An [access token](http://msdn.microsoft.com/library/windows/desktop/aa374909) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows NT or Windows 2000 system.  
  
 The **CTokenGroups** class is a wrapper for the [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure, containing information about the group security identifiers (SIDs) in an access token.  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="ctokengroups__add"></a>  CTokenGroups::Add  
 Adds a `CSid` or existing **TOKEN_GROUPS** structure to the `CTokenGroups` object.  
  
```
void Add(const CSid& rSid,  DWORD dwAttributes) throw(...);

    void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```  
  
### Parameters  
 `rSid`  
 A [CSid](../../atl/reference/csid-class.md) object.  
  
 `dwAttributes`  
 The attributes to associate with the `CSid` object.  
  
 *rTokenGroups*  
 A [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure.  
  
### Remarks  
 These methods add one or more `CSid` objects and their associated attributes to the `CTokenGroups` object.  
  
##  <a name="ctokengroups__ctokengroups"></a>  CTokenGroups::CTokenGroups  
 The constructor.  
  
```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(...);

    CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `CTokenGroups` object or [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure with which to construct the `CTokenGroups` object.  
  
### Remarks  
 The `CTokenGroups` object can optionally be created using a **TOKEN_GROUPS** structure or a previously defined `CTokenGroups` object.  
  
##  <a name="ctokengroups___dtorctokengroups"></a>  CTokenGroups::~CTokenGroups  
 The destructor.  
  
```
virtual ~CTokenGroups() throw();
```  
  
### Remarks  
 The destructor frees all allocated resources.  
  
##  <a name="ctokengroups__delete"></a>  CTokenGroups::Delete  
 Deletes a `CSid` and its associated attributes from the `CTokenGroups` object.  
  
```
bool Delete(const CSid& rSid) throw();
```  
  
### Parameters  
 `rSid`  
 The [CSid](../../atl/reference/csid-class.md) object for which the security identifier (SID) and attributes should be removed.  
  
### Return Value  
 Returns true if the `CSid` is removed, false otherwise.  
  
##  <a name="ctokengroups__deleteall"></a>  CTokenGroups::DeleteAll  
 Deletes all `CSid` objects and their associated attributes from the `CTokenGroups` object.  
  
```
void DeleteAll() throw();
```  
  
##  <a name="ctokengroups__getcount"></a>  CTokenGroups::GetCount  
 Returns the number of `CSid` objects contained in `CTokenGroups`.  
  
```
UINT GetCount() const throw();
```  
  
### Return Value  
 Returns the number of [CSid](../../atl/reference/csid-class.md) objects and their associated attributes contained in the `CTokenGroups` object.  
  
##  <a name="ctokengroups__getlength"></a>  CTokenGroups::GetLength  
 Returns the size of the **CTokenGroup** object.  
  
```
UINT GetLength() const throw();
```  
  
### Remarks  
 Returns the total size of the **CTokenGroup** object, in bytes.  
  
##  <a name="ctokengroups__getptoken_groups"></a>  CTokenGroups::GetPTOKEN_GROUPS  
 Retrieves a pointer to the **TOKEN_GROUPS** structure.  
  
```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```  
  
### Return Value  
 Retrieves a pointer to the [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure belonging to the `CTokenGroups` access token object.  
  
##  <a name="ctokengroups__getsidsandattributes"></a>  CTokenGroups::GetSidsAndAttributes  
 Retrieves the `CSid` objects and (optionally) the attributes belonging to the `CTokenGroups` object.  
  
```
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```  
  
### Parameters  
 `pSids`  
 Pointer to an array of [CSid](../../atl/reference/csid-class.md) objects.  
  
 `pAttributes`  
 Pointer to an array of DWORDs. If this parameter is omitted or NULL, the attributes are not retrieved.  
  
### Remarks  
 This method will enumerate all of the `CSid` objects contained in the `CTokenGroups` object and place them and (optionally) the attribute flags into array objects.  
  
##  <a name="ctokengroups__lookupsid"></a>  CTokenGroups::LookupSid  
 Retrieves the attributes associated with a `CSid` object.  
  
```
bool LookupSid(const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```  
  
### Parameters  
 `rSid`  
 The [CSid](../../atl/reference/csid-class.md) object.  
  
 `pdwAttributes`  
 Pointer to a DWORD which will accept the `CSid` object's attribute. If omitted or NULL, the attribute will not be retrieved.  
  
### Return Value  
 Returns true if the `CSid` is found, false otherwise.  
  
### Remarks  
 Setting `pdwAttributes` to NULL provides a way of confirming the existence of the `CSid` without accessing the attribute. Note that this method should not be used to check access rights as incorrect results may occur under Windows 2000. Applications should instead use the [CAccessToken::CheckTokenMembership](../../atl/reference/caccesstoken-class.md#caccesstoken__checktokenmembership) method.  
  
##  <a name="ctokengroups__operator_eq"></a>  CTokenGroups::operator =  
 Assignment operator.  
  
```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);

    CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `CTokenGroups` object or [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure to assign to the `CTokenGroups` object.  
  
### Return Value  
 Returns the updated `CTokenGroups` object.  
  
##  <a name="ctokengroups__operator_const_token_groups__star"></a>  CTokenGroups::operator const TOKEN_GROUPS *  
 Casts a value to a pointer to the **TOKEN_GROUPS** structure.  
  
```operator const TOKEN_GROUPS *() const throw(...);
```  
  
### Remarks  
 Casts a value to a pointer to the [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) structure.  
  
## See Also  
 [Security Sample](../../visual-cpp-samples.md)   
 [CSid Class](../../atl/reference/csid-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)
