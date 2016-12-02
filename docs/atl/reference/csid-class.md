---
title: "CSid Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSid"
  - "ATL::CSid"
  - "ATL.CSid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSid class"
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
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
# CSid Class
This class is a wrapper for a `SID` (security identifier) structure.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CSid
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CSid::CSidArray](#csid__csidarray)|An array of `CSid` objects.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSid::CSid](#csid__csid)|The constructor.|  
|[CSid::~CSid](#csid___dtorcsid)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSid::AccountName](#csid__accountname)|Returns the name of the account associated with the `CSid` object.|  
|[CSid::Domain](#csid__domain)|Returns the name of the domain associated with the `CSid` object.|  
|[CSid::EqualPrefix](#csid__equalprefix)|Tests `SID` (security identifier) prefixes for equality.|  
|[CSid::GetLength](#csid__getlength)|Returns the length of the `CSid` object.|  
|[CSid::GetPSID](#csid__getpsid)|Returns a pointer to a `SID` structure.|  
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#csid__getpsid_identifier_authority)|Returns a pointer to the **SID_IDENTIFIER_AUTHORITY** structure.|  
|[CSid::GetSubAuthority](#csid__getsubauthority)|Returns a specified subauthority in a **SID** structure.|  
|[CSid::GetSubAuthorityCount](#csid__getsubauthoritycount)|Returns the subauthority count.|  
|[CSid::IsValid](#csid__isvalid)|Tests the `CSid` object for validity.|  
|[CSid::LoadAccount](#csid__loadaccount)|Updates the `CSid` object given the account name and domain, or an existing `SID` structure.|  
|[CSid::Sid](#csid__sid)|Returns the ID string.|  
|[CSid::SidNameUse](#csid__sidnameuse)|Returns a description of the state of the `CSid` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#csid__operator_eq)|Assignment operator.|  
|[operator const SID *](#csid__operator_const_sid__star)|Casts a `CSid` object to a pointer to a `SID` structure.|  
  
### Global Operators  
  
|||  
|-|-|  
|[operator ==](#csid__operator_eq_eq)|Tests two security descriptor objects for equality|  
|[operator !=](#csid__operator_neq)|Tests two security descriptor objects for inequality|  
|[operator \<](#csid__operator_lt_)|Compares relative value of two security descriptor objects.|  
|[operator >](#csid__operator_gt_)|Compares relative value of two security descriptor objects.|  
|[operator \<=](#csid__operator_lt__eq)|Compares relative value of two security descriptor objects.|  
|[operator >=](#csid__operator_gt__eq)|Compares relative value of two security descriptor objects.|  
  
## Remarks  
 The `SID` structure is a variable-length structure used to uniquely identify users or groups.  
  
 Applications should not modify the `SID` structure directly, but instead use the methods provided in this wrapper class. See also [AtlGetOwnerSid](http://msdn.microsoft.com/library/0e3a2606-74b8-4412-9803-bb437e22da85), [AtlSetGroupSid](http://msdn.microsoft.com/library/83531d32-11ab-4a68-a3c6-1bfa54ab8dfa), [AtlGetGroupSid](http://msdn.microsoft.com/library/8e7ec6b9-15c8-4a8a-977e-1e4c853d0be7), and [AtlSetOwnerSid](http://msdn.microsoft.com/library/3a8abb76-1d2c-465d-a5e8-62a12a3c37f3).  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="csid__accountname"></a>  CSid::AccountName  
 Returns the name of the account associated with the `CSid` object.  
  
```
LPCTSTR AccountName() const throw(...);
```  
  
### Return Value  
 Returns the `LPCTSTR` pointing to the name of the account.  
  
### Remarks  
 This method attempts to find a name for the specified `SID` (security identifier). For full details, see [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 If no account name for the `SID` can be found, `AccountName` returns an empty string. This can occur if a network timeout prevents this method from finding the name. It also occurs for security identifiers with no corresponding account name, such as a logon `SID` that identifies a logon session.  
  
##  <a name="csid__csid"></a>  CSid::CSid  
 The constructor.  
  
```
CSid() throw();
CSid(const SID& rhs) throw(...);
CSid(const CSid& rhs) throw(...);

CSid(
    const SID_IDENTIFIER_AUTHORITY& IdentifierAuthority,
    BYTE nSubAuthorityCount,
    ...) throw(...);

    explicit CSid(
        LPCTSTR pszAccountName,
        LPCTSTR pszSystem = NULL) throw(...);

    explicit CSid(
        const SID* pSid,
        LPCTSTR pszSystem = NULL) throw(...);
```  
  
### Parameters  
 `rhs`  
 An existing `CSid` object or `SID` (security identifier) structure.  
  
 *IdentifierAuthority*  
 The authority.  
  
 *nSubAuthorityCount*  
 The subauthority count.  
  
 `pszAccountName`  
 The account name.  
  
 `pszSystem`  
 The system name. This string can be the name of a remote computer. If this string is NULL, the local system is used instead.  
  
 `pSid`  
 A pointer to a `SID` structure.  
  
### Remarks  
 The constructor initializes the `CSid` object, setting an internal data member to *SidTypeInvalid*, or by copying the settings from an existing `CSid`, `SID`, or existing account.  
  
 If initialization fails, the constructor will throw a [CAtlException Class](../../atl/reference/catlexception-class.md).  
  
##  <a name="csid___dtorcsid"></a>  CSid::~CSid  
 The destructor.  
  
```
virtual ~CSid() throw();
```  
  
### Remarks  
 The destructor frees any resources acquired by the object.  
  
##  <a name="csid__csidarray"></a>  CSid::CSidArray  
 An array of [CSid](../../atl/reference/csid-class.md) objects.  
  
```
typedef CAtlArray<CSid> CSidArray;
```  
  
### Remarks  
 This typedef specifies the array type that can be used to retrieve security identifiers from an ACL (access-control list). See [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#cacl__getaclentries).  
  
##  <a name="csid__domain"></a>  CSid::Domain  
 Returns the name of the domain associated with the `CSid` object.  
  
```
LPCTSTR Domain() const throw(...);
```  
  
### Return Value  
 Returns the `LPCTSTR` pointing to the domain.  
  
### Remarks  
 This method attempts to find a name for the specified `SID` (security identifier). For full details, see [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 If no account name for the `SID` can be found, **Domain** returns the domain as an empty string. This can occur if a network timeout prevents this method from finding the name. It also occurs for security identifiers with no corresponding account name, such as a logon `SID` that identifies a logon session.  
  
##  <a name="csid__equalprefix"></a>  CSid::EqualPrefix  
 Tests `SID` (security identifier) prefixes for equality.  
  
```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```  
  
### Parameters  
 `rhs`  
 The `SID` (security identifier) structure or `CSid` object to compare.  
  
### Return Value  
 Returns **true** on success, **false** on failure.  
  
### Remarks  
 See [EqualPrefixSid](http://msdn.microsoft.com/library/windows/desktop/aa446621) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more details.  
  
##  <a name="csid__getlength"></a>  CSid::GetLength  
 Returns the length of the `CSid` object.  
  
```
UINT GetLength() const throw();
```  
  
### Return Value  
 Returns the length in bytes of the `CSid` object.  
  
### Remarks  
 If the `CSid` structure is not valid, the return value is undefined. Before calling `GetLength`, use the [CSid::IsValid](#csid__isvalid) member function to verify that `CSid` is valid.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="csid__getpsid"></a>  CSid::GetPSID  
 Returns a pointer to a `SID` (security identifier) structure.  
  
```
const SID* GetPSID() const throw(...);
```  
  
### Return Value  
 Returns the address of the `CSid` object's underlying `SID` structure.  
  
##  <a name="csid__getpsid_identifier_authority"></a>  CSid::GetPSID_IDENTIFIER_AUTHORITY  
 Returns a pointer to the **SID_IDENTIFIER_AUTHORITY** structure.  
  
```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```  
  
### Return Value  
 If the method succeeds, it returns the address of the **SID_IDENTIFIER_AUTHORITY** structure. If it fails, the return value is undefined. Failure may occur if the `CSid` object is not valid, in which case the [CSid::IsValid](#csid__isvalid) method returns **false**. The function `GetLastError` can be called for extended error information.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="csid__getsubauthority"></a>  CSid::GetSubAuthority  
 Returns a specified subauthority in a `SID` (security identifier) structure.  
  
```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```  
  
### Parameters  
 *nSubAuthority*  
 The subauthority.  
  
### Return Value  
 Returns the subauthority referenced by *nSubAuthority.* The subauthority value is a relative identifier (RID).  
  
### Remarks  
 The *nSubAuthority* parameter specifies an index value identifying the subauthority array element the method will return. The method performs no validation tests on this value. An application can call [CSid::GetSubAuthorityCount](#csid__getsubauthoritycount) to discover the range of acceptable values.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="csid__getsubauthoritycount"></a>  CSid::GetSubAuthorityCount  
 Returns the subauthority count.  
  
```
UCHAR GetSubAuthorityCount() const throw();
```  
  
### Return Value  
 If the method succeeds, the return value is the subauthority count.  
  
 If the method fails, the return value is undefined. The method fails if the `CSid` object is invalid. To get extended error information, call `GetLastError`.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="csid__isvalid"></a>  CSid::IsValid  
 Tests the `CSid` object for validity.  
  
```
bool IsValid() const throw();
```  
  
### Return Value  
 Returns **true** if the `CSid` object is valid, **false** if not. There is no extended error information for this method; do not call `GetLastError`.  
  
### Remarks  
 The `IsValid` method validates the `CSid` object by verifying that the revision number is within a known range and that the number of subauthorities is less than the maximum.  
  
##  <a name="csid__loadaccount"></a>  CSid::LoadAccount  
 Updates the `CSid` object given the account name and domain, or an existing SID (security identifier) structure.  
  
```
bool LoadAccount(LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

bool LoadAccount(const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```  
  
### Parameters  
 `pszAccountName`  
 The account name.  
  
 `pszSystem`  
 The system name. This string can be the name of a remote computer. If this string is NULL, the local system is used instead.  
  
 `pSid`  
 A pointer to a [SID](http://msdn.microsoft.com/library/windows/desktop/aa379594\(v=vs.85\).aspx) structure.  
  
### Return Value  
 Returns **true** on success, **false** on failure. To get extended error information, call `GetLastError`.  
  
### Remarks  
 `LoadAccount` attempts to find a security identifier for the specified name. See [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166\(v=vs.85\).aspx) for more details.  
  
##  <a name="csid__operator_eq"></a>  CSid::operator =  
 Assignment operator.  
  
```
CSid& operator= (const CSid& rhs) throw(...);

    CSid& operator= (const SID& rhs) throw(...);
```  
  
### Parameters  
 `rhs`  
 The `SID` (security identifier) or `CSid` to assign to the `CSid` object.  
  
### Return Value  
 Returns a reference to the updated `CSid` object.  
  
##  <a name="csid__operator_eq_eq"></a>  CSid::operator ==  
 Tests two security descriptor objects for equality.  
  
```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the == operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the == operator.  
  
### Return Value  
 **true** if the security descriptors are equal, otherwise **false**.  
  
##  <a name="csid__operator_neq"></a>  CSid::operator !=  
 Tests two security descriptor objects for inequality.  
  
```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 **true** if the security descriptors are not equal, otherwise **false**.  
  
##  <a name="csid__operator_lt"></a>  CSid::operator &lt;  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 **true** if `lhs` is less than `rhs`, otherwise **false**.  
  
##  <a name="csid__operator_lt__eq"></a>  CSid::operator &lt;=  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 **true** if `lhs` is less than or equal to `rhs`, otherwise **false**.  
  
##  <a name="csid__operator_gt"></a>  CSid::operator &gt;  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 **true** if `lhs` is greater than `rhs`, otherwise **false**.  
  
##  <a name="csid__operator_gt__eq"></a>  CSid::operator &gt;=  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw());
```  
  
### Parameters  
 `lhs`  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 `rhs`  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 **true** if `lhs` is greater than or equal to `rhs`, otherwise **false**.  
  
##  <a name="csid__operator_const_sid__star"></a>  CSid::operator const SID *  
 Casts a `CSid` object to a pointer to a `SID` (security identifier) structure.  
  
```operator const SID *() const throw(...);
```  
  
### Remarks  
 Returns the address of the `SID` structure.  
  
##  <a name="csid__sid"></a>  CSid::Sid  
 Returns the `SID` (security identifier) structure as a string.  
  
```
LPCTSTR Sid() const throw(...);
```  
  
### Return Value  
 Returns the `SID` structure as a string in a format suitable for display, storage, or transmission. Equivalent to [ConvertSidToStringSid](http://msdn.microsoft.com/library/windows/desktop/aa376399), although this function is only available on Windows 2000 or later and so is emulated for earlier operating systems.  
  
##  <a name="csid__sidnameuse"></a>  CSid::SidNameUse  
 Returns a description of the state of the `CSid` object.  
  
```
SID_NAME_USE SidNameUse() const throw();
```  
  
### Return Value  
 Returns the value of the data member that stores a value describing the state of the `CSid` object.  
  
|Value|Description|  
|-----------|-----------------|  
|SidTypeUser|Indicates a user `SID` (security identifier).|  
|SidTypeGroup|Indicates a group `SID`.|  
|SidTypeDomain|Indicates a domain `SID`.|  
|SidTypeAlias|Indicates an alias `SID`.|  
|SidTypeWellKnownGroup|Indicates a `SID` for a well-known group.|  
|SidTypeDeletedAccount|Indicates a `SID` for a deleted account.|  
|SidTypeInvalid|Indicates an invalid `SID`.|  
|SidTypeUnknown|Indicates an unknown `SID` type.|  
|SidTypeComputer|Indicates a `SID` for a computer.|  
  
### Remarks  
 Call [CSid::LoadAccount](#csid__loadaccount) to update the `CSid` object before calling `SidNameUse` to return its state. `SidNameUse` does not change the state of the object (by calling to **LookupAccountName** or **LookupAccountSid**), but only returns the current state.  
  
## See Also  
 [Security Sample](../../visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)   
 [Operators](../../atl/reference/atl-operators.md)









