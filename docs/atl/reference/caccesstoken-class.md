---
description: "Learn more about: CAccessToken Class"
title: "CAccessToken Class"
ms.date: "07/02/2019"
f1_keywords: ["CAccessToken", "ATLSECURITY/ATL::CAccessToken", "ATLSECURITY/ATL::CAccessToken::Attach", "ATLSECURITY/ATL::CAccessToken::CheckTokenMembership", "ATLSECURITY/ATL::CAccessToken::CreateImpersonationToken", "ATLSECURITY/ATL::CAccessToken::CreatePrimaryToken", "ATLSECURITY/ATL::CAccessToken::CreateProcessAsUser", "ATLSECURITY/ATL::CAccessToken::CreateRestrictedToken", "ATLSECURITY/ATL::CAccessToken::Detach", "ATLSECURITY/ATL::CAccessToken::DisablePrivilege", "ATLSECURITY/ATL::CAccessToken::DisablePrivileges", "ATLSECURITY/ATL::CAccessToken::EnablePrivilege", "ATLSECURITY/ATL::CAccessToken::EnablePrivileges", "ATLSECURITY/ATL::CAccessToken::GetDefaultDacl", "ATLSECURITY/ATL::CAccessToken::GetEffectiveToken", "ATLSECURITY/ATL::CAccessToken::GetGroups", "ATLSECURITY/ATL::CAccessToken::GetHandle", "ATLSECURITY/ATL::CAccessToken::GetImpersonationLevel", "ATLSECURITY/ATL::CAccessToken::GetLogonSessionId", "ATLSECURITY/ATL::CAccessToken::GetLogonSid", "ATLSECURITY/ATL::CAccessToken::GetOwner", "ATLSECURITY/ATL::CAccessToken::GetPrimaryGroup", "ATLSECURITY/ATL::CAccessToken::GetPrivileges", "ATLSECURITY/ATL::CAccessToken::GetProcessToken", "ATLSECURITY/ATL::CAccessToken::GetProfile", "ATLSECURITY/ATL::CAccessToken::GetSource", "ATLSECURITY/ATL::CAccessToken::GetStatistics", "ATLSECURITY/ATL::CAccessToken::GetTerminalServicesSessionId", "ATLSECURITY/ATL::CAccessToken::GetThreadToken", "ATLSECURITY/ATL::CAccessToken::GetTokenId", "ATLSECURITY/ATL::CAccessToken::GetType", "ATLSECURITY/ATL::CAccessToken::GetUser", "ATLSECURITY/ATL::CAccessToken::HKeyCurrentUser", "ATLSECURITY/ATL::CAccessToken::Impersonate", "ATLSECURITY/ATL::CAccessToken::ImpersonateLoggedOnUser", "ATLSECURITY/ATL::CAccessToken::IsTokenRestricted", "ATLSECURITY/ATL::CAccessToken::LoadUserProfile", "ATLSECURITY/ATL::CAccessToken::LogonUser", "ATLSECURITY/ATL::CAccessToken::OpenCOMClientToken", "ATLSECURITY/ATL::CAccessToken::OpenNamedPipeClientToken", "ATLSECURITY/ATL::CAccessToken::OpenRPCClientToken", "ATLSECURITY/ATL::CAccessToken::OpenThreadToken", "ATLSECURITY/ATL::CAccessToken::PrivilegeCheck", "ATLSECURITY/ATL::CAccessToken::Revert", "ATLSECURITY/ATL::CAccessToken::SetDefaultDacl", "ATLSECURITY/ATL::CAccessToken::SetOwner", "ATLSECURITY/ATL::CAccessToken::SetPrimaryGroup"]
helpviewer_keywords: ["CAccessToken class"]
ms.assetid: bb5c5945-56a5-4083-b442-76573cee83ab
---
# CAccessToken Class

This class is a wrapper for an access token.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAccessToken
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAccessToken::~CAccessToken](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAccessToken::Attach](#attach)|Call this method to take ownership of the given access token handle.|
|[CAccessToken::CheckTokenMembership](#checktokenmembership)|Call this method to determine if a specified SID is enabled in the `CAccessToken` object.|
|[CAccessToken::CreateImpersonationToken](#createimpersonationtoken)|Call this method to create a new impersonation access token.|
|[CAccessToken::CreatePrimaryToken](#createprimarytoken)|Call this method to create a new primary token.|
|[CAccessToken::CreateProcessAsUser](#createprocessasuser)|Call this method to create a new process running in the security context of the user represented by the `CAccessToken` object.|
|[CAccessToken::CreateRestrictedToken](#createrestrictedtoken)|Call this method to create a new, restricted `CAccessToken` object.|
|[CAccessToken::Detach](#detach)|Call this method to revoke ownership of the access token.|
|[CAccessToken::DisablePrivilege](#disableprivilege)|Call this method to disable a privilege in the `CAccessToken` object.|
|[CAccessToken::DisablePrivileges](#disableprivileges)|Call this method to disable one or more privileges in the `CAccessToken` object.|
|[CAccessToken::EnablePrivilege](#enableprivilege)|Call this method to enable a privilege in the `CAccessToken` object.|
|[CAccessToken::EnablePrivileges](#enableprivileges)|Call this method to enable one or more privileges in the `CAccessToken` object.|
|[CAccessToken::GetDefaultDacl](#getdefaultdacl)|Call this method to return the `CAccessToken` object's default DACL.|
|[CAccessToken::GetEffectiveToken](#geteffectivetoken)|Call this method to get the `CAccessToken` object equal to the access token in effect for the current thread.|
|[CAccessToken::GetGroups](#getgroups)|Call this method to return the `CAccessToken` object's token groups.|
|[CAccessToken::GetHandle](#gethandle)|Call this method to retrieve a handle to the access token.|
|[CAccessToken::GetImpersonationLevel](#getimpersonationlevel)|Call this method to get the impersonation level from the access token.|
|[CAccessToken::GetLogonSessionId](#getlogonsessionid)|Call this method to get the Logon Session ID associated with the `CAccessToken` object.|
|[CAccessToken::GetLogonSid](#getlogonsid)|Call this method to get the Logon SID associated with the `CAccessToken` object.|
|[CAccessToken::GetOwner](#getowner)|Call this method to get the owner associated with the `CAccessToken` object.|
|[CAccessToken::GetPrimaryGroup](#getprimarygroup)|Call this method to get the primary group associated with the `CAccessToken` object.|
|[CAccessToken::GetPrivileges](#getprivileges)|Call this method to get the privileges associated with the `CAccessToken` object.|
|[CAccessToken::GetProcessToken](#getprocesstoken)|Call this method to initialize the `CAccessToken` with the access token from the given process.|
|[CAccessToken::GetProfile](#getprofile)|Call this method to get the handle pointing to the user profile associated with the `CAccessToken` object.|
|[CAccessToken::GetSource](#getsource)|Call this method to get the source of the `CAccessToken` object.|
|[CAccessToken::GetStatistics](#getstatistics)|Call this method to get information associated with the `CAccessToken` object.|
|[CAccessToken::GetTerminalServicesSessionId](#getterminalservicessessionid)|Call this method to get the Terminal Services Session ID associated with the `CAccessToken` object.|
|[CAccessToken::GetThreadToken](#getthreadtoken)|Call this method to initialize the `CAccessToken` with the token from the given thread.|
|[CAccessToken::GetTokenId](#gettokenid)|Call this method to get the Token ID associated with the `CAccessToken` object.|
|[CAccessToken::GetType](#gettype)|Call this method to get the token type of the `CAccessToken` object.|
|[CAccessToken::GetUser](#getuser)|Call this method to identify the user associated with the `CAccessToken` object.|
|[CAccessToken::HKeyCurrentUser](#hkeycurrentuser)|Call this method to get the handle pointing to the user profile associated with the `CAccessToken` object.|
|[CAccessToken::Impersonate](#impersonate)|Call this method to assign an impersonation `CAccessToken` to a thread.|
|[CAccessToken::ImpersonateLoggedOnUser](#impersonateloggedonuser)|Call this method to allow the calling thread to impersonate the security context of a logged-on user.|
|[CAccessToken::IsTokenRestricted](#istokenrestricted)|Call this method to test if the `CAccessToken` object contains a list of restricted SIDs.|
|[CAccessToken::LoadUserProfile](#loaduserprofile)|Call this method to load the user profile associated with the `CAccessToken` object.|
|[CAccessToken::LogonUser](#logonuser)|Call this method to create a logon session for the user associated with the given credentials.|
|[CAccessToken::OpenCOMClientToken](#opencomclienttoken)|Call this method from within a COM server handling a call from a client to initialize the `CAccessToken` with the access token from the COM client.|
|[CAccessToken::OpenNamedPipeClientToken](#opennamedpipeclienttoken)|Call this method from within a server taking requests over a named pipe to initialize the `CAccessToken` with the access token from the client.|
|[CAccessToken::OpenRPCClientToken](#openrpcclienttoken)|Call this method from within a server handling a call from an RPC client to initialize the `CAccessToken` with the access token from the client.|
|[CAccessToken::OpenThreadToken](#openthreadtoken)|Call this method to set the impersonation level and then initialize the `CAccessToken` with the token from the given thread.|
|[CAccessToken::PrivilegeCheck](#privilegecheck)|Call this method to determine whether a specified set of privileges are enabled in the `CAccessToken` object.|
|[CAccessToken::Revert](#revert)|Call this method to stop a thread that is using an impersonation token.|
|[CAccessToken::SetDefaultDacl](#setdefaultdacl)|Call this method to set the default DACL of the `CAccessToken` object.|
|[CAccessToken::SetOwner](#setowner)|Call this method to set the owner of the `CAccessToken` object.|
|[CAccessToken::SetPrimaryGroup](#setprimarygroup)|Call this method to set the primary group of the `CAccessToken` object.|

## Remarks

An [access token](/windows/win32/SecAuthZ/access-tokens) is an object that describes the security context of a process or thread and is allocated to each user logged onto a Windows system.

For an introduction to the access control model in Windows, see [Access Control](/windows/win32/SecAuthZ/access-control) in the Windows SDK.

## Requirements

**Header:** atlsecurity.h

## <a name="attach"></a> CAccessToken::Attach

Call this method to take ownership of the given access token handle.

```cpp
void Attach(HANDLE hToken) throw();
```

### Parameters

*hToken*<br/>
A handle to the access token.

### Remarks

In debug builds, an assertion error will occur if the `CAccessToken` object already has ownership of an access token.

## <a name="dtor"></a> CAccessToken::~CAccessToken

The destructor.

```cpp
virtual ~CAccessToken() throw();
```

### Remarks

Frees all allocated resources.

## <a name="checktokenmembership"></a> CAccessToken::CheckTokenMembership

Call this method to determine if a specified SID is enabled in the `CAccessToken` object.

```cpp
bool CheckTokenMembership(
    const CSid& rSid,
    bool* pbIsMember) const throw(...);
```

### Parameters

*rSid*<br/>
Reference to a [CSid Class](../../atl/reference/csid-class.md) object.

*pbIsMember*<br/>
Pointer to a variable that receives the results of the check.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The `CheckTokenMembership` method checks for the presence of the SID in the user and group SIDs of the access token. If the SID is present and has the SE_GROUP_ENABLED attribute, *pbIsMember* is set to TRUE; otherwise, it is set to FALSE.

In debug builds, an assertion error will occur if *pbIsMember* is not a valid pointer.

> [!NOTE]
> The `CAccessToken` object must be an impersonation token and not a primary token.

## <a name="createimpersonationtoken"></a> CAccessToken::CreateImpersonationToken

Call this method to create an impersonation access token.

```cpp
bool CreateImpersonationToken(
    CAccessToken* pImp,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) const throw(...);
```

### Parameters

*pImp*<br/>
Pointer to the new `CAccessToken` object.

*sil*<br/>
Specifies a [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) enumerated type that supplies the impersonation level of the new token.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

`CreateImpersonationToken` calls [DuplicateToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetoken) to create a new impersonation token.

## <a name="createprimarytoken"></a> CAccessToken::CreatePrimaryToken

Call this method to create a new primary token.

```cpp
bool CreatePrimaryToken(
    CAccessToken* pPri,
    DWORD dwDesiredAccess = MAXIMUM_ALLOWED,
    const CSecurityAttributes* pTokenAttributes = NULL) const throw(...);
```

### Parameters

*pPri*<br/>
Pointer to the new `CAccessToken` object.

*dwDesiredAccess*<br/>
Specifies the requested access rights for the new token. The default, MAXIMUM_ALLOWED, requests all access rights that are valid for the caller. See [Access Rights and Access Masks](/windows/win32/SecAuthZ/access-rights-and-access-masks) for more on access rights.

*pTokenAttributes*<br/>
Pointer to a [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that specifies a security descriptor for the new token and determines whether child processes can inherit the token. If *pTokenAttributes* is NULL, the token gets a default security descriptor and the handle cannot be inherited.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

`CreatePrimaryToken` calls [DuplicateTokenEx](/windows/win32/api/securitybaseapi/nf-securitybaseapi-duplicatetokenex) to create a new primary token.

## <a name="createprocessasuser"></a> CAccessToken::CreateProcessAsUser

Call this method to create a new process running in the security context of the user represented by the `CAccessToken` object.

```cpp
bool CreateProcessAsUser(
    LPCTSTR pApplicationName,
    LPTSTR pCommandLine,
    LPPROCESS_INFORMATION pProcessInformation,
    LPSTARTUPINFO pStartupInfo,
    DWORD dwCreationFlags = NORMAL_PRIORITY_CLASS,
    bool bLoadProfile = false,
    const CSecurityAttributes* pProcessAttributes = NULL,
    const CSecurityAttributes* pThreadAttributes = NULL,
    bool bInherit = false,
    LPCTSTR pCurrentDirectory = NULL) throw();
```

### Parameters

*pApplicationName*<br/>
Pointer to a null-terminated string that specifies the module to execute. This parameter may not be NULL.

*pCommandLine*<br/>
Pointer to a null-terminated string that specifies the command line to execute.

*pProcessInformation*<br/>
Pointer to a [PROCESS_INFORMATION structure](/windows/win32/api/processthreadsapi/ns-processthreadsapi-process_information) that receives identification information about the new process.

*pStartupInfo*<br/>
Pointer to a [STARTUPINFO](/windows/win32/api/processthreadsapi/ns-processthreadsapi-startupinfow) structure that specifies how the main window for the new process should appear.

*dwCreationFlags*<br/>
Specifies additional flags that control the priority class and the creation of the process. See the Win32 function [CreateProcessAsUser](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) for a list of flags.

*bLoadProfile*<br/>
If TRUE, the user's profile is loaded with [LoadUserProfile](/windows/win32/api/userenv/nf-userenv-loaduserprofilew).

*pProcessAttributes*<br/>
Pointer to a [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that specifies a security descriptor for the new process and determines whether child processes can inherit the returned handle. If *pProcessAttributes* is NULL, the process gets a default security descriptor and the handle cannot be inherited.

*pThreadAttributes*<br/>
Pointer to a [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) structure that specifies a security descriptor for the new thread and determines whether child processes can inherit the returned handle. If *pThreadAttributes* is NULL, the thread gets a default security descriptor and the handle cannot be inherited.

*bInherit*<br/>
Indicates whether the new process inherits handles from the calling process. If TRUE, each inheritable open handle in the calling process is inherited by the new process. Inherited handles have the same value and access privileges as the original handles.

*pCurrentDirectory*<br/>
Pointer to a null-terminated string that specifies the current drive and directory for the new process. The string must be a full path that includes a drive letter. If this parameter is NULL, the new process will have the same current drive and directory as the calling process.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

`CreateProcessAsUser` uses the `CreateProcessAsUser` Win32 function to create a new process that runs in the security context of the user represented by the `CAccessToken` object. See the description of the [CreateProcessAsUser](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessasuserw) function for a full discussion of the parameters required.

For this method to succeed, the `CAccessToken` object must hold AssignPrimaryToken (unless it is a restricted token) and IncreaseQuota privileges.

## <a name="createrestrictedtoken"></a> CAccessToken::CreateRestrictedToken

Call this method to create a new, restricted `CAccessToken` object.

```cpp
bool CreateRestrictedToken(
    CAccessToken* pRestrictedToken,
    const CTokenGroups& SidsToDisable,
    const CTokenGroups& SidsToRestrict,
    const CTokenPrivileges& PrivilegesToDelete = CTokenPrivileges()) const throw(...);
```

### Parameters

*pRestrictedToken*<br/>
The new, restricted `CAccessToken` object.

*SidsToDisable*<br/>
A `CTokenGroups` object that specifies the deny-only SIDs.

*SidsToRestrict*<br/>
A `CTokenGroups` object that specifies the restricting SIDs.

*PrivilegesToDelete*<br/>
A `CTokenPrivileges` object that specifies the privileges to delete in the restricted token. The default creates an empty object.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

`CreateRestrictedToken` uses the [CreateRestrictedToken](/windows/win32/api/securitybaseapi/nf-securitybaseapi-createrestrictedtoken) Win32 function to create a new `CAccessToken` object, with restrictions.

> [!IMPORTANT]
> When using `CreateRestrictedToken`, ensure the following: the existing token is valid (and not entered by the user) and *SidsToDisable* and *PrivilegesToDelete* are both valid (and not entered by the user). If the method returns FALSE, deny functionality.

## <a name="detach"></a> CAccessToken::Detach

Call this method to revoke ownership of the access token.

```cpp
HANDLE Detach() throw();
```

### Return Value

Returns the handle to the `CAccessToken` which has been detached.

### Remarks

This method revokes the `CAccessToken`'s ownership of the access token.

## <a name="disableprivilege"></a> CAccessToken::DisablePrivilege

Call this method to disable a privilege in the `CAccessToken` object.

```cpp
bool DisablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### Parameters

*pszPrivilege*<br/>
Pointer to a string containing the privilege to disable in the `CAccessToken` object.

*pPreviousState*<br/>
Pointer to a `CTokenPrivileges` object which will contain the previous state of the privileges.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="disableprivileges"></a> CAccessToken::DisablePrivileges

Call this method to disable one or more privileges in the `CAccessToken` object.

```cpp
bool DisablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### Parameters

*rPrivileges*<br/>
Pointer to an array of strings containing the privileges to disable in the `CAccessToken` object.

*pPreviousState*<br/>
Pointer to a `CTokenPrivileges` object which will contain the previous state of the privileges.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="enableprivilege"></a> CAccessToken::EnablePrivilege

Call this method to enable a privilege in the `CAccessToken` object.

```cpp
bool EnablePrivilege(
    LPCTSTR pszPrivilege,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### Parameters

*pszPrivilege*<br/>
Pointer to a string containing the privilege to enable in the `CAccessToken` object.

*pPreviousState*<br/>
Pointer to a `CTokenPrivileges` object which will contain the previous state of the privileges.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="enableprivileges"></a> CAccessToken::EnablePrivileges

Call this method to enable one or more privileges in the `CAccessToken` object.

```cpp
bool EnablePrivileges(
    const CAtlArray<LPCTSTR>& rPrivileges,
    CTokenPrivileges* pPreviousState = NULL) throw(...);
```

### Parameters

*rPrivileges*<br/>
Pointer to an array of strings containing the privileges to enable in the `CAccessToken` object.

*pPreviousState*<br/>
Pointer to a `CTokenPrivileges` object which will contain the previous state of the privileges.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getdefaultdacl"></a> CAccessToken::GetDefaultDacl

Call this method to return the `CAccessToken` object's default DACL.

```cpp
bool GetDefaultDacl(CDacl* pDacl) const throw(...);
```

### Parameters

*pDacl*<br/>
Pointer to the [CDacl Class](../../atl/reference/cdacl-class.md) object which will receive the `CAccessToken` object's default DACL.

### Return Value

Returns TRUE if the default DACL has been recovered, FALSE otherwise.

## <a name="geteffectivetoken"></a> CAccessToken::GetEffectiveToken

Call this method to get the `CAccessToken` object equal to the access token in effect for the current thread.

```cpp
bool GetEffectiveToken(DWORD dwDesiredAccess) throw();
```

### Parameters

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getgroups"></a> CAccessToken::GetGroups

Call this method to return the `CAccessToken` object's token groups.

```cpp
bool GetGroups(CTokenGroups* pGroups) const throw(...);
```

### Parameters

*pGroups*<br/>
Pointer to the [CTokenGroups Class](../../atl/reference/ctokengroups-class.md) object which will receive the group information.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="gethandle"></a> CAccessToken::GetHandle

Call this method to retrieve a handle to the access token.

```cpp
HANDLE GetHandle() const throw();
```

### Return Value

Returns a handle to the `CAccessToken` object's access token.

## <a name="getimpersonationlevel"></a> CAccessToken::GetImpersonationLevel

Call this method to get the impersonation level from the access token.

```cpp
bool GetImpersonationLevel(
    SECURITY_IMPERSONATION_LEVEL* pImpersonationLevel) const throw(...);
```

### Parameters

*pImpersonationLevel*<br/>
Pointer to a [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) enumeration type which will receive the impersonation level information.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getlogonsessionid"></a> CAccessToken::GetLogonSessionId

Call this method to get the Logon Session ID associated with the `CAccessToken` object.

```cpp
bool GetLogonSessionId(LUID* pluid) const throw(...);
```

### Parameters

*pluid*<br/>
Pointer to a [LUID](/windows/win32/api/winnt/ns-winnt-luid) which will receive the Logon Session ID.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

In debug builds, an assertion error will occur if *pluid* is an invalid value.

## <a name="getlogonsid"></a> CAccessToken::GetLogonSid

Call this method to get the Logon SID associated with the `CAccessToken` object.

```cpp
bool GetLogonSid(CSid* pSid) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid Class](../../atl/reference/csid-class.md) object.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

In debug builds, an assertion error will occur if *pSid* is an invalid value.

## <a name="getowner"></a> CAccessToken::GetOwner

Call this method to get the owner associated with the `CAccessToken` object.

```cpp
bool GetOwner(CSid* pSid) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid Class](../../atl/reference/csid-class.md) object.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The owner is set by default on any objects created while this access token is in effect.

## <a name="getprimarygroup"></a> CAccessToken::GetPrimaryGroup

Call this method to get the primary group associated with the `CAccessToken` object.

```cpp
bool GetPrimaryGroup(CSid* pSid) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid Class](../../atl/reference/csid-class.md) object.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The group is set by default on any objects created while this access token is in effect.

## <a name="getprivileges"></a> CAccessToken::GetPrivileges

Call this method to get the privileges associated with the `CAccessToken` object.

```cpp
bool GetPrivileges(CTokenPrivileges* pPrivileges) const throw(...);
```

### Parameters

*pPrivileges*<br/>
Pointer to a [CTokenPrivileges Class](../../atl/reference/ctokenprivileges-class.md) object which will receive the privileges.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getprocesstoken"></a> CAccessToken::GetProcessToken

Call this method to initialize the `CAccessToken` with the access token from the given process.

```cpp
bool GetProcessToken(DWORD dwDesiredAccess, HANDLE hProcess = NULL) throw();
```

### Parameters

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*hProcess*<br/>
Handle to the process whose access token is opened. If the default value of NULL is used, the current process is used.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

Calls the [OpenProcessToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-openprocesstoken) Win32 function.

## <a name="getprofile"></a> CAccessToken::GetProfile

Call this method to get the handle pointing to the user profile associated with the `CAccessToken` object.

```cpp
HANDLE GetProfile() const throw();
```

### Return Value

Returns a handle pointing to the user profile, or NULL if no profile exists.

## <a name="getsource"></a> CAccessToken::GetSource

Call this method to get the source of the `CAccessToken` object.

```cpp
bool GetSource(TOKEN_SOURCE* pSource) const throw(...);
```

### Parameters

*pSource*<br/>
Pointer to a [TOKEN_SOURCE](/windows/win32/api/winnt/ns-winnt-token_source) structure.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getstatistics"></a> CAccessToken::GetStatistics

Call this method to get information associated with the `CAccessToken` object.

```cpp
bool GetStatistics(TOKEN_STATISTICS* pStatistics) const throw(...);
```

### Parameters

*pStatistics*<br/>
Pointer to a [TOKEN_STATISTICS](/windows/win32/api/winnt/ns-winnt-token_statistics) structure.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getterminalservicessessionid"></a> CAccessToken::GetTerminalServicesSessionId

Call this method to get the Terminal Services Session ID associated with the `CAccessToken` object.

```cpp
bool GetTerminalServicesSessionId(DWORD* pdwSessionId) const throw(...);
```

### Parameters

*pdwSessionId*<br/>
The Terminal Services Session ID.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getthreadtoken"></a> CAccessToken::GetThreadToken

Call this method to initialize the `CAccessToken` with the token from the given thread.

```cpp
bool GetThreadToken(
    DWORD dwDesiredAccess,
    HANDLE hThread = NULL,
    bool bOpenAsSelf = true) throw();
```

### Parameters

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*hThread*<br/>
Handle to the thread whose access token is opened.

*bOpenAsSelf*<br/>
Indicates whether the access check is to be made against the security context of the thread calling the `GetThreadToken` method or against the security context of the process for the calling thread.

If this parameter is FALSE, the access check is performed using the security context for the calling thread. If the thread is impersonating a client, this security context can be that of a client process. If this parameter is TRUE, the access check is made using the security context of the process for the calling thread.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="gettokenid"></a> CAccessToken::GetTokenId

Call this method to get the Token ID associated with the `CAccessToken` object.

```cpp
bool GetTokenId(LUID* pluid) const throw(...);
```

### Parameters

*pluid*<br/>
Pointer to a [LUID](/windows/win32/api/winnt/ns-winnt-luid) which will receive the Token ID.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="gettype"></a> CAccessToken::GetType

Call this method to get the token type of the `CAccessToken` object.

```cpp
bool GetType(TOKEN_TYPE* pType) const throw(...);
```

### Parameters

*pType*<br/>
Address of the [TOKEN_TYPE](/windows/win32/api/winnt/ne-winnt-token_type) variable that, on success, receives the type of the token.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The TOKEN_TYPE enumeration type contains values that differentiate between a primary token and an impersonation token.

## <a name="getuser"></a> CAccessToken::GetUser

Call this method to identify the user associated with the `CAccessToken` object.

```cpp
bool GetUser(CSid* pSid) const throw(...);
```

### Parameters

*pSid*<br/>
Pointer to a [CSid Class](../../atl/reference/csid-class.md) object.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="hkeycurrentuser"></a> CAccessToken::HKeyCurrentUser

Call this method to get the handle pointing to the user profile associated with the `CAccessToken` object.

```cpp
HKEY HKeyCurrentUser() const throw();
```

### Return Value

Returns a handle pointing to the user profile, or NULL if no profile exists.

## <a name="impersonate"></a> CAccessToken::Impersonate

Call this method to assign an impersonation `CAccessToken` to a thread.

```cpp
bool Impersonate(HANDLE hThread = NULL) const throw(...);
```

### Parameters

*hThread*<br/>
Handle to the thread to assign the impersonation token to. This handle must have been opened with TOKEN_IMPERSONATE access rights. If *hThread* is NULL, the method causes the thread to stop using an impersonation token.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

In debug builds, an assertion error will occur if `CAccessToken` does not have a valid pointer to a token.

The [CAutoRevertImpersonation class](../../atl/reference/cautorevertimpersonation-class.md) can be used to automatically revert impersonated access tokens.

## <a name="impersonateloggedonuser"></a> CAccessToken::ImpersonateLoggedOnUser

Call this method to allow the calling thread to impersonate the security context of a logged-on user.

```cpp
bool ImpersonateLoggedOnUser() const throw(...);
```

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

> [!IMPORTANT]
> If a call to an impersonation function fails for any reason, the client is not impersonated and the client request is made in the security context of the process from which the call was made. If the process is running as a highly privileged account, or as a member of an administrative group, the user might be able to perform actions he or she would otherwise be disallowed. Therefore, the return value for this function should always be confirmed.

## <a name="istokenrestricted"></a> CAccessToken::IsTokenRestricted

Call this method to test if the `CAccessToken` object contains a list of restricted SIDs.

```cpp
bool IsTokenRestricted() const throw();
```

### Return Value

Returns TRUE if the object contains a list of restricting SIDs, FALSE if there are no restricting SIDs or if the method fails.

## <a name="loaduserprofile"></a> CAccessToken::LoadUserProfile

Call this method to load the user profile associated with the `CAccessToken` object.

```cpp
bool LoadUserProfile() throw(...);
```

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

In debug builds, an assertion error will occur if the `CAccessToken` does not contain a valid token, or if a user profile already exists.

## <a name="logonuser"></a> CAccessToken::LogonUser

Call this method to create a logon session for the user associated with the given credentials.

```cpp
bool LogonUser(
    LPCTSTR pszUserName,
    LPCTSTR pszDomain,
    LPCTSTR pszPassword,
    DWORD dwLogonType = LOGON32_LOGON_INTERACTIVE,
    DWORD dwLogonProvider = LOGON32_PROVIDER_DEFAULT) throw();
```

### Parameters

*pszUserName*<br/>
Pointer to a null-terminated string that specifies the user name. This is the name of the user account to log on to.

*pszDomain*<br/>
Pointer to a null-terminated string that specifies the name of the domain or server whose account database contains the *pszUserName* account.

*pszPassword*<br/>
Pointer to a null-terminated string that specifies the clear-text password for the user account specified by *pszUserName*.

*dwLogonType*<br/>
Specifies the type of logon operation to perform. See [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) for more details.

*dwLogonProvider*<br/>
Specifies the logon provider. See [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) for more details.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The access token resulting from the logon will be associated with the `CAccessToken`. For this method to succeed, the `CAccessToken` object must hold SE_TCB_NAME privileges, identifying the holder as part of the trusted computer base. See [LogonUser](/windows/win32/api/winbase/nf-winbase-logonuserw) for more information regarding the privileges required.

## <a name="opencomclienttoken"></a> CAccessToken::OpenCOMClientToken

Call this method from within a COM server handling a call from a client to initialize the `CAccessToken` with the access token from the COM client.

```cpp
bool OpenCOMClientToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### Parameters

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*bImpersonate*<br/>
If TRUE, the current thread will impersonate the calling COM client if this call completes successfully. If FALSE, the access token will be opened, but the thread will not have an impersonation token when this call completes.

*bOpenAsSelf*<br/>
Indicates whether the access check is to be made against the security context of the thread calling the [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) method or against the security context of the process for the calling thread.

If this parameter is FALSE, the access check is performed using the security context for the calling thread. If the thread is impersonating a client, this security context can be that of a client process. If this parameter is TRUE, the access check is made using the security context of the process for the calling thread.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The [CAutoRevertImpersonation Class](../../atl/reference/cautorevertimpersonation-class.md) can be used to automatically revert impersonated access tokens created by setting the *bImpersonate* flag to TRUE.

## <a name="opennamedpipeclienttoken"></a> CAccessToken::OpenNamedPipeClientToken

Call this method from within a server taking requests over a named pipe to initialize the `CAccessToken` with the access token from the client.

```cpp
bool OpenNamedPipeClientToken(
    HANDLE hPipe,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### Parameters

*hPipe*<br/>
Handle to a named pipe.

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*bImpersonate*<br/>
If TRUE, the current thread will impersonate the calling pipe client if this call completes successfully. If FALSE, the access token will be opened, but the thread will not have an impersonation token when this call completes.

*bOpenAsSelf*<br/>
Indicates whether the access check is to be made against the security context of the thread calling the [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) method or against the security context of the process for the calling thread.

If this parameter is FALSE, the access check is performed using the security context for the calling thread. If the thread is impersonating a client, this security context can be that of a client process. If this parameter is TRUE, the access check is made using the security context of the process for the calling thread.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The [CAutoRevertImpersonation Class](../../atl/reference/cautorevertimpersonation-class.md) can be used to automatically revert impersonated access tokens created by setting the *bImpersonate* flag to TRUE.

## <a name="openrpcclienttoken"></a> CAccessToken::OpenRPCClientToken

Call this method from within a server handling a call from an RPC client to initialize the `CAccessToken` with the access token from the client.

```cpp
bool OpenRPCClientToken(
    RPC_BINDING_HANDLE BindingHandle,
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true) throw(...);
```

### Parameters

*BindingHandle*<br/>
Binding handle on the server that represents a binding to a client.

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*bImpersonate*<br/>
If TRUE, the current thread will impersonate the calling RPC client if this call completes successfully. If FALSE, the access token will be opened, but the thread will not have an impersonation token when this call completes.

*bOpenAsSelf*<br/>
Indicates whether the access check is to be made against the security context of the thread calling the [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) method or against the security context of the process for the calling thread.

If this parameter is FALSE, the access check is performed using the security context for the calling thread. If the thread is impersonating a client, this security context can be that of a client process. If this parameter is TRUE, the access check is made using the security context of the process for the calling thread.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The [CAutoRevertImpersonation Class](../../atl/reference/cautorevertimpersonation-class.md) can be used to automatically revert impersonated access tokens created by setting the *bImpersonate* flag to TRUE.

## <a name="openthreadtoken"></a> CAccessToken::OpenThreadToken

Call this method to set the impersonation level and then initialize the `CAccessToken` with the token from the given thread.

```cpp
bool OpenThreadToken(
    DWORD dwDesiredAccess,
    bool bImpersonate = false,
    bool bOpenAsSelf = true,
    SECURITY_IMPERSONATION_LEVEL sil = SecurityImpersonation) throw(...);
```

### Parameters

*dwDesiredAccess*<br/>
Specifies an access mask that specifies the requested types of access to the access token. These requested access types are compared with the token's DACL to determine which accesses are granted or denied.

*bImpersonate*<br/>
If TRUE, the thread will be left at the requested impersonation level after this method completes. If FALSE, the thread will revert to its original impersonation level.

*bOpenAsSelf*<br/>
Indicates whether the access check is to be made against the security context of the thread calling the [GetThreadToken](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthread) method or against the security context of the process for the calling thread.

If this parameter is FALSE, the access check is performed using the security context for the calling thread. If the thread is impersonating a client, this security context can be that of a client process. If this parameter is TRUE, the access check is made using the security context of the process for the calling thread.

*sil*<br/>
Specifies a [SECURITY_IMPERSONATION_LEVEL](/windows/win32/api/winnt/ne-winnt-security_impersonation_level) enumerated type that supplies the impersonation level of the token.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

`OpenThreadToken` is similar to [CAccessToken::GetThreadToken](#getthreadtoken), but sets the impersonation level before initializing the `CAccessToken` from the thread's access token.

The [CAutoRevertImpersonation Class](../../atl/reference/cautorevertimpersonation-class.md) can be used to automatically revert impersonated access tokens created by setting the *bImpersonate* flag to TRUE.

## <a name="privilegecheck"></a> CAccessToken::PrivilegeCheck

Call this method to determine whether a specified set of privileges are enabled in the `CAccessToken` object.

```cpp
bool PrivilegeCheck(
    PPRIVILEGE_SET RequiredPrivileges,
    bool* pbResult) const throw();
```

### Parameters

*RequiredPrivileges*<br/>
Pointer to a [PRIVILEGE_SET](/windows/win32/api/winnt/ns-winnt-privilege_set) structure.

*pbResult*<br/>
Pointer to a value the method sets to indicate whether any or all of the specified privilege are enabled in the `CAccessToken` object.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

When `PrivilegeCheck` returns, the `Attributes` member of each [LUID_AND_ATTRIBUTES](/windows/win32/api/winnt/ns-winnt-luid_and_attributes) structure is set to SE_PRIVILEGE_USED_FOR_ACCESS if the corresponding privilege is enabled. This method calls the [PrivilegeCheck](/windows/win32/api/securitybaseapi/nf-securitybaseapi-privilegecheck) Win32 function.

## <a name="revert"></a> CAccessToken::Revert

Call this method to stop a thread from using an impersonation token.

```cpp
bool Revert(HANDLE hThread = NULL) const throw();
```

### Parameters

*hThread*<br/>
Handle to the thread to revert from impersonation. If *hThread* is NULL, the current thread is assumed.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The reversion of impersonation tokens can be performed automatically with the [CAutoRevertImpersonation Class](../../atl/reference/cautorevertimpersonation-class.md).

## <a name="setdefaultdacl"></a> CAccessToken::SetDefaultDacl

Call this method to set the default DACL of the `CAccessToken` object.

```cpp
bool SetDefaultDacl(const CDacl& rDacl) throw(...);
```

### Parameters

*rDacl*<br/>
The new default [CDacl Class](../../atl/reference/cdacl-class.md) information.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The default DACL is the DACL that is used by default when new objects are created with this access token in effect.

## <a name="setowner"></a> CAccessToken::SetOwner

Call this method to set the owner of the `CAccessToken` object.

```cpp
bool SetOwner(const CSid& rSid) throw(...);
```

### Parameters

*rSid*<br/>
The [CSid Class](../../atl/reference/csid-class.md) object containing the owner information.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The owner is the default owner that is used for new objects created while this access token is in effect.

## <a name="setprimarygroup"></a> CAccessToken::SetPrimaryGroup

Call this method to set the primary group of the `CAccessToken` object.

```cpp
bool SetPrimaryGroup(const CSid& rSid) throw(...);
```

### Parameters

*rSid*<br/>
The [CSid Class](../../atl/reference/csid-class.md) object containing the primary group information.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The primary group is the default group for new objects created while this access token is in effect.

## See also

[ATLSecurity Sample](../../overview/visual-cpp-samples.md)<br/>
[Access Tokens](/windows/win32/SecAuthZ/access-tokens)<br/>
[Class Overview](../../atl/atl-class-overview.md)
