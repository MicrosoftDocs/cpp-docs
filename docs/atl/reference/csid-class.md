---
title: "CSid Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CSid", "ATLSECURITY/ATL::CSid", "ATLSECURITY/ATL::CSid::CSidArray", "ATLSECURITY/ATL::CSid::CSid", "ATLSECURITY/ATL::CSid::AccountName", "ATLSECURITY/ATL::CSid::Domain", "ATLSECURITY/ATL::CSid::EqualPrefix", "ATLSECURITY/ATL::CSid::GetLength", "ATLSECURITY/ATL::CSid::GetPSID", "ATLSECURITY/ATL::CSid::GetPSID_IDENTIFIER_AUTHORITY", "ATLSECURITY/ATL::CSid::GetSubAuthority", "ATLSECURITY/ATL::CSid::GetSubAuthorityCount", "ATLSECURITY/ATL::CSid::IsValid", "ATLSECURITY/ATL::CSid::LoadAccount", "ATLSECURITY/ATL::CSid::Sid", "ATLSECURITY/ATL::CSid::SidNameUse"]
dev_langs: ["C++"]
helpviewer_keywords: ["CSid class"]
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CSid::CSidArray](#csidarray)|An array of `CSid` objects.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSid::CSid](#csid)|The constructor.|  
|[CSid::~CSid](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSid::AccountName](#accountname)|Returns the name of the account associated with the `CSid` object.|  
|[CSid::Domain](#domain)|Returns the name of the domain associated with the `CSid` object.|  
|[CSid::EqualPrefix](#equalprefix)|Tests `SID` (security identifier) prefixes for equality.|  
|[CSid::GetLength](#getlength)|Returns the length of the `CSid` object.|  
|[CSid::GetPSID](#getpsid)|Returns a pointer to a `SID` structure.|  
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Returns a pointer to the `SID_IDENTIFIER_AUTHORITY` structure.|  
|[CSid::GetSubAuthority](#getsubauthority)|Returns a specified subauthority in a `SID` structure.|  
|[CSid::GetSubAuthorityCount](#getsubauthoritycount)|Returns the subauthority count.|  
|[CSid::IsValid](#isvalid)|Tests the `CSid` object for validity.|  
|[CSid::LoadAccount](#loadaccount)|Updates the `CSid` object given the account name and domain, or an existing `SID` structure.|  
|[CSid::Sid](#sid)|Returns the ID string.|  
|[CSid::SidNameUse](#sidnameuse)|Returns a description of the state of the `CSid` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Assignment operator.|  
|[operator const SID *](#operator_const_sid__star)|Casts a `CSid` object to a pointer to a `SID` structure.|  
  
### Global Operators  
  
|||  
|-|-|  
|[operator ==](#operator_eq_eq)|Tests two security descriptor objects for equality|  
|[operator !=](#operator_neq)|Tests two security descriptor objects for inequality|  
|[operator \<](#operator_lt_)|Compares relative value of two security descriptor objects.|  
|[operator >](#operator_gt_)|Compares relative value of two security descriptor objects.|  
|[operator \<=](#operator_lt__eq)|Compares relative value of two security descriptor objects.|  
|[operator >=](#operator_gt__eq)|Compares relative value of two security descriptor objects.|  
  
## Remarks  
 The `SID` structure is a variable-length structure used to uniquely identify users or groups.  
  
 Applications should not modify the `SID` structure directly, but instead use the methods provided in this wrapper class. See also [AtlGetOwnerSid](security-global-functions.md#atlgetownersid), [AtlSetGroupSid](security-global-functions.md#atlsetgroupsid), [AtlGetGroupSid](security-global-functions.md#atlgetgroupsid), and [AtlSetOwnerSid](security-global-functions.md#atlsetownersid).  
  
 For an introduction to the access control model in Windows, see [Access Control](http://msdn.microsoft.com/library/windows/desktop/aa374860) in the Windows SDK.  
  
## Requirements  
 **Header:** atlsecurity.h  
  
##  <a name="accountname"></a>  CSid::AccountName  
 Returns the name of the account associated with the `CSid` object.  
  
```
LPCTSTR AccountName() const throw(...);
```  
  
### Return Value  
 Returns the LPCTSTR pointing to the name of the account.  
  
### Remarks  
 This method attempts to find a name for the specified `SID` (security identifier). For full details, see [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 If no account name for the `SID` can be found, `AccountName` returns an empty string. This can occur if a network timeout prevents this method from finding the name. It also occurs for security identifiers with no corresponding account name, such as a logon `SID` that identifies a logon session.  
  
##  <a name="csid"></a>  CSid::CSid  
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
 *rhs*  
 An existing `CSid` object or `SID` (security identifier) structure.  
  
 *IdentifierAuthority*  
 The authority.  
  
 *nSubAuthorityCount*  
 The subauthority count.  
  
 *pszAccountName*  
 The account name.  
  
 *pszSystem*  
 The system name. This string can be the name of a remote computer. If this string is NULL, the local system is used instead.  
  
 *pSid*  
 A pointer to a `SID` structure.  
  
### Remarks  
 The constructor initializes the `CSid` object, setting an internal data member to *SidTypeInvalid*, or by copying the settings from an existing `CSid`, `SID`, or existing account.  
  
 If initialization fails, the constructor will throw a [CAtlException Class](../../atl/reference/catlexception-class.md).  
  
##  <a name="dtor"></a>  CSid::~CSid  
 The destructor.  
  
```
virtual ~CSid() throw();
```  
  
### Remarks  
 The destructor frees any resources acquired by the object.  
  
##  <a name="csidarray"></a>  CSid::CSidArray  
 An array of [CSid](../../atl/reference/csid-class.md) objects.  
  
```
typedef CAtlArray<CSid> CSidArray;
```  
  
### Remarks  
 This typedef specifies the array type that can be used to retrieve security identifiers from an ACL (access-control list). See [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).  
  
##  <a name="domain"></a>  CSid::Domain  
 Returns the name of the domain associated with the `CSid` object.  
  
```
LPCTSTR Domain() const throw(...);
```  
  
### Return Value  
 Returns the `LPCTSTR` pointing to the domain.  
  
### Remarks  
 This method attempts to find a name for the specified `SID` (security identifier). For full details, see [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 If no account name for the `SID` can be found, `Domain` returns the domain as an empty string. This can occur if a network timeout prevents this method from finding the name. It also occurs for security identifiers with no corresponding account name, such as a logon `SID` that identifies a logon session.  
  
##  <a name="equalprefix"></a>  CSid::EqualPrefix  
 Tests `SID` (security identifier) prefixes for equality.  
  
```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```  
  
### Parameters  
 *rhs*  
 The `SID` (security identifier) structure or `CSid` object to compare.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 See [EqualPrefixSid](http://msdn.microsoft.com/library/windows/desktop/aa446621) in the Windows SDK for more details.  
  
##  <a name="getlength"></a>  CSid::GetLength  
 Returns the length of the `CSid` object.  
  
```
UINT GetLength() const throw();
```  
  
### Return Value  
 Returns the length in bytes of the `CSid` object.  
  
### Remarks  
 If the `CSid` structure is not valid, the return value is undefined. Before calling `GetLength`, use the [CSid::IsValid](#isvalid) member function to verify that `CSid` is valid.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="getpsid"></a>  CSid::GetPSID  
 Returns a pointer to a `SID` (security identifier) structure.  
  
```
const SID* GetPSID() const throw(...);
```  
  
### Return Value  
 Returns the address of the `CSid` object's underlying `SID` structure.  
  
##  <a name="getpsid_identifier_authority"></a>  CSid::GetPSID_IDENTIFIER_AUTHORITY  
 Returns a pointer to the `SID_IDENTIFIER_AUTHORITY` structure.  
  
```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```  
  
### Return Value  
 If the method succeeds, it returns the address of the `SID_IDENTIFIER_AUTHORITY` structure. If it fails, the return value is undefined. Failure may occur if the `CSid` object is not valid, in which case the [CSid::IsValid](#isvalid) method returns FALSE. The function `GetLastError` can be called for extended error information.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="getsubauthority"></a>  CSid::GetSubAuthority  
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
 The *nSubAuthority* parameter specifies an index value identifying the subauthority array element the method will return. The method performs no validation tests on this value. An application can call [CSid::GetSubAuthorityCount](#getsubauthoritycount) to discover the range of acceptable values.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="getsubauthoritycount"></a>  CSid::GetSubAuthorityCount  
 Returns the subauthority count.  
  
```
UCHAR GetSubAuthorityCount() const throw();
```  
  
### Return Value  
 If the method succeeds, the return value is the subauthority count.  
  
 If the method fails, the return value is undefined. The method fails if the `CSid` object is invalid. To get extended error information, call `GetLastError`.  
  
> [!NOTE]
>  Under debug builds the function will cause an ASSERT if the `CSid` object is not valid.  
  
##  <a name="isvalid"></a>  CSid::IsValid  
 Tests the `CSid` object for validity.  
  
```
bool IsValid() const throw();
```  
  
### Return Value  
 Returns TRUE if the `CSid` object is valid, FALSE if not. There is no extended error information for this method; do not call `GetLastError`.  
  
### Remarks  
 The `IsValid` method validates the `CSid` object by verifying that the revision number is within a known range and that the number of subauthorities is less than the maximum.  
  
##  <a name="loadaccount"></a>  CSid::LoadAccount  
 Updates the `CSid` object given the account name and domain, or an existing SID (security identifier) structure.  
  
```
bool LoadAccount(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

bool LoadAccount(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```  
  
### Parameters  
 *pszAccountName*  
 The account name.  
  
 *pszSystem*  
 The system name. This string can be the name of a remote computer. If this string is NULL, the local system is used instead.  
  
 *pSid*  
 A pointer to a [SID](http://msdn.microsoft.com/library/windows/desktop/aa379594\(v=vs.85\).aspx) structure.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure. To get extended error information, call `GetLastError`.  
  
### Remarks  
 `LoadAccount` attempts to find a security identifier for the specified name. See [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166\(v=vs.85\).aspx) for more details.  
  
##  <a name="operator_eq"></a>  CSid::operator =  
 Assignment operator.  
  
```
CSid& operator= (const CSid& rhs) throw(...);  
CSid& operator= (const SID& rhs) throw(...);
```  
  
### Parameters  
 *rhs*  
 The `SID` (security identifier) or `CSid` to assign to the `CSid` object.  
  
### Return Value  
 Returns a reference to the updated `CSid` object.  
  
##  <a name="operator_eq_eq"></a>  CSid::operator ==  
 Tests two security descriptor objects for equality.  
  
```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the == operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the == operator.  
  
### Return Value  
 TRUE if the security descriptors are equal, otherwise FALSE.  
  
##  <a name="operator_neq"></a>  CSid::operator !=  
 Tests two security descriptor objects for inequality.  
  
```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 TRUE if the security descriptors are not equal, otherwise FALSE.  
  
##  <a name="operator_lt"></a>  CSid::operator &lt;  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 TRUE if *lhs* is less than *rhs*, otherwise FALSE.  
  
##  <a name="operator_lt__eq"></a>  CSid::operator &lt;=  
 Compares relative value of two security descriptor objects.  
  
```
bool operator<=(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 TRUE if *lhs* is less than or equal to *rhs*, otherwise FALSE.  
  
##  <a name="operator_gt"></a>  CSid::operator &gt;  
 Compares relative value of two security descriptor objects.  
  
```
bool operator>(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 TRUE if *lhs* is greater than *rhs*, otherwise FALSE.  
  
##  <a name="operator_gt__eq"></a>  CSid::operator &gt;=  
 Compares relative value of two security descriptor objects.  
  
```
bool operator>=(
    const CSid& lhs,
    const CSid& rhs) throw());
```  
  
### Parameters  
 *lhs*  
 The `SID` (security identifier) or `CSid` that appears on the left side of the != operator.  
  
 *rhs*  
 The `SID` (security identifier) or `CSid` that appears on the right side of the != operator.  
  
### Return Value  
 TRUE if *lhs* is greater than or equal to *rhs*, otherwise FALSE.  
  
##  <a name="operator_const_sid__star"></a>  CSid::operator const SID \*  
 Casts a `CSid` object to a pointer to a `SID` (security identifier) structure.  
  
```  
operator const SID *() const throw(...);
```  
  
### Remarks  
 Returns the address of the `SID` structure.  
  
##  <a name="sid"></a>  CSid::Sid  
 Returns the `SID` (security identifier) structure as a string.  
  
```
LPCTSTR Sid() const throw(...);
```  
  
### Return Value  
 Returns the `SID` structure as a string in a format suitable for display, storage, or transmission. Equivalent to [ConvertSidToStringSid](http://msdn.microsoft.com/library/windows/desktop/aa376399).  
  
##  <a name="sidnameuse"></a>  CSid::SidNameUse  
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
 Call [CSid::LoadAccount](#loadaccount) to update the `CSid` object before calling `SidNameUse` to return its state. `SidNameUse` does not change the state of the object (by calling to `LookupAccountName` or `LookupAccountSid`), but only returns the current state.  
  
## See Also  
 [Security Sample](../../visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)   
 [Operators](../../atl/reference/atl-operators.md)
