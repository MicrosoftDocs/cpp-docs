---
description: "Learn more about: Security Identifier Global Functions"
title: "Security Identifier Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlsecurity/ATL::Sids::AccountOps", "atlsecurity/ATL::Sids::Admins", "atlsecurity/ATL::Sids::AnonymousLogon", "atlsecurity/ATL::Sids::AuthenticatedUser", "atlsecurity/ATL::Sids::BackupOps", "atlsecurity/ATL::Sids::Batch", "atlsecurity/ATL::Sids::CreatorGroup", "atlsecurity/ATL::Sids::CreatorGroupServer", "atlsecurity/ATL::Sids::CreatorOwner", "atlsecurity/ATL::Sids::CreatorOwnerServer", "atlsecurity/ATL::Sids::Dialup", "atlsecurity/ATL::Sids::Guests", "atlsecurity/ATL::Sids::Interactive", "atlsecurity/ATL::Sids::Local", "atlsecurity/ATL::Sids::Network", "atlsecurity/ATL::Sids::NetworkService", "atlsecurity/ATL::Sids::Null", "atlsecurity/ATL::Sids::PowerUsers", "atlsecurity/ATL::Sids::PrintOps", "atlsecurity/ATL::Sids::Proxy", "atlsecurity/ATL::Sids::RasServers", "atlsecurity/ATL::Sids::Replicator", "atlsecurity/ATL::Sids::RestrictedCode", "atlsecurity/ATL::Sids::Self", "atlsecurity/ATL::Sids::ServerLogon", "atlsecurity/ATL::Sids::Service", "atlsecurity/ATL::Sids::System", "atlsecurity/ATL::Sids::SystemOps", "atlsecurity/ATL::Sids::TerminalServer", "atlsecurity/ATL::Sids::Users", "atlsecurity/ATL::Sids::World"]
helpviewer_keywords: ["security IDs [C++]", "SIDs [C++], returning SID objects"]
ms.assetid: 85404dcb-c59b-4535-ab3d-66cfa37e87de
---
# Security Identifier Global Functions

These functions return common well-known SID objects.

> [!IMPORTANT]
> The functions listed in the following table cannot be used in applications that execute in the Windows Runtime.

|Name|Description|
|-|-|
|[Sids::AccountOps](#accountops)|Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.|
|[Sids::Admins](#admins)|Returns the DOMAIN_ALIAS_RID_ADMINS SID.|
|[Sids::AnonymousLogon](#anonymouslogon)|Returns the SECURITY_ANONYMOUS_LOGON_RID SID.|
|[Sids::AuthenticatedUser](#authenticateduser)|Returns the SECURITY_AUTHENTICATED_USER_RID SID.|
|[Sids::BackupOps](#backupops)|Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.|
|[Sids::Batch](#batch)|Returns the SECURITY_BATCH_RID SID.|
|[Sids::CreatorGroup](#creatorgroup)|Returns the SECURITY_CREATOR_GROUP_RID SID.|
|[Sids::CreatorGroupServer](#creatorgroupserver)|Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.|
|[Sids::CreatorOwner](#creatorowner)|Returns the SECURITY_CREATOR_OWNER_RID SID.|
|[Sids::CreatorOwnerServer](#creatorownerserver)|Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.|
|[Sids::Dialup](#dialup)|Returns the SECURITY_DIALUP_RID SID.|
|[Sids::Guests](#guests)|Returns the DOMAIN_ALIAS_RID_GUESTS SID.|
|[Sids::Interactive](#interactive)|Returns the SECURITY_INTERACTIVE_RID SID.|
|[Sids::Local](#local)|Returns the SECURITY_LOCAL_RID SID.|
|[Sids::Network](#network)|Returns the SECURITY_NETWORK_RID SID.|
|[Sids::NetworkService](#networkservice)|Returns the SECURITY_NETWORK_SERVICE_RID SID.|
|[Sids::Null](#null)|Returns the SECURITY_NULL_RID SID.|
|[Sids::PreW2KAccess](#prew2kaccess)|Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.|
|[Sids::PowerUsers](#powerusers)|Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.|
|[Sids::PrintOps](#printops)|Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.|
|[Sids::Proxy](#proxy)|Returns the SECURITY_PROXY_RID SID.|
|[Sids::RasServers](#rasservers)|Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.|
|[Sids::Replicator](#replicator)|Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.|
|[Sids::RestrictedCode](#restrictedcode)|Returns the SECURITY_RESTRICTED_CODE_RID SID.|
|[Sids::Self](#self)|Returns the SECURITY_PRINCIPAL_SELF_RID SID.|
|[Sids::ServerLogon](#serverlogon)|Returns the SECURITY_SERVER_LOGON_RID SID.|
|[Sids::Service](#service)|Returns the SECURITY_SERVICE_RID SID.|
|[Sids::System](#system)|Returns the SECURITY_LOCAL_SYSTEM_RID SID.|
|[Sids::SystemOps](#systemops)|Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.|
|[Sids::TerminalServer](#terminalserver)|Returns the SECURITY_TERMINAL_SERVER_RID SID.|
|[Sids::Users](#users)|Returns the DOMAIN_ALIAS_RID_USERS SID.|
|[Sids::World](#world)|Returns the SECURITY_WORLD_RID SID.|

### Requirements

**Header:** atlsecurity.h

## <a name="accountops"></a> Sids::AccountOps

Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.

```
CSid AccountOps() throw(...);
```

## <a name="admins"></a> Sids::Admins

Returns the DOMAIN_ALIAS_RID_ADMINS SID.

```
CSid Admins() throw(...);
```

## <a name="anonymouslogon"></a> Sids::AnonymousLogon

Returns the SECURITY_ANONYMOUS_LOGON_RID SID.

```
CSid AnonymousLogon() throw(...);
```

## <a name="authenticateduser"></a> Sids::AuthenticatedUser

Returns the SECURITY_AUTHENTICATED_USER_RID SID.

```
CSid AuthenticatedUser() throw(...);
```

## <a name="backupops"></a> Sids::BackupOps

Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.

```
CSid BackupOps() throw(...);
```

## <a name="batch"></a> Sids::Batch

Returns the SECURITY_BATCH_RID SID.

```
CSid Batch() throw(...);
```

## <a name="creatorgroup"></a> Sids::CreatorGroup

Returns the SECURITY_CREATOR_GROUP_RID SID.

```
CSid CreatorGroup() throw(...);
```

## <a name="creatorgroupserver"></a> Sids::CreatorGroupServer

Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.

```
CSid CreatorGroupServer() throw(...);
```

## <a name="creatorowner"></a> Sids::CreatorOwner

Returns the SECURITY_CREATOR_OWNER_RID SID.

```
CSid CreatorOwner() throw(...);
```

## <a name="creatorownerserver"></a> Sids::CreatorOwnerServer

Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.

```
CSid CreatorOwnerServer() throw(...);
```

## <a name="dialup"></a> Sids::Dialup

Returns the SECURITY_DIALUP_RID SID.

```
CSid Dialup() throw(...);
```

## <a name="guests"></a> Sids::Guests

Returns the DOMAIN_ALIAS_RID_GUESTS SID.

```
CSid Guests() throw(...);
```

## <a name="interactive"></a> Sids::Interactive

Returns the SECURITY_INTERACTIVE_RID SID.

```
CSid Interactive() throw(...);
```

## <a name="local"></a> Sids::Local

Returns the SECURITY_LOCAL_RID SID.

```
CSid Local() throw(...);
```

## <a name="network"></a> Sids::Network

Returns the SECURITY_NETWORK_RID SID.

```
CSid Network() throw(...);
```

## <a name="networkservice"></a> Sids::NetworkService

Returns the SECURITY_NETWORK_SERVICE_RID SID.

```
CSid NetworkService() throw(...);
```

### Remarks

Use NetworkService to enable the NT AUTHORITY\NetworkService user to read a CPerfMon security object. NetworkService adds a SecurityAttribute to the ATLServer code which will allow the DLL to login under the NetworkService account on Windows XP Home Edition, Windows XP Professional, Windows Server 2003 and greater operating system.

When custom log counters are created with ATLServer CPerfMon class in the Perfmon MMC, the counters may not appear when viewing the log file although they will appear correctly in the realtime view. CPerfMon custom performance counters don't have the necessary permissions to run under the "Performance Logs and Alerts" service (smlogsvc.exe) on Windows XP Home Edition, Windows XP Professional, Windows Server 2003 (or greater) operating systems. This service runs under the "NT AUTHORITY\NetworkService" account.

## <a name="null"></a> Sids::Null

Returns the SECURITY_NULL_RID SID.

```
CSid Null() throw(...);
```

## <a name="prew2kaccess"></a> Sids::PreW2KAccess

Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.

```
CSid PreW2KAccess() throw(...);
```

## <a name="powerusers"></a> Sids::PowerUsers

Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.

```
CSid PowerUsers() throw(...);
```

## <a name="printops"></a> Sids::PrintOps

Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.

```
CSid PrintOps() throw(...);
```

## <a name="proxy"></a> Sids::Proxy

Returns the SECURITY_PROXY_RID SID.

```
CSid Proxy() throw(...);
```

## <a name="rasservers"></a> Sids::RasServers

Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.

```
CSid RasServers() throw(...);
```

## <a name="replicator"></a> Sids::Replicator

Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.

```
CSid Replicator() throw(...);
```

## <a name="restrictedcode"></a> Sids::RestrictedCode

Returns the SECURITY_RESTRICTED_CODE_RID SID.

```
CSid RestrictedCode() throw(...);
```

## <a name="self"></a> Sids::Self

Returns the SECURITY_PRINCIPAL_SELF_RID SID.

```
CSid Self() throw(...);
```

## <a name="serverlogon"></a> Sids::ServerLogon

Returns the SECURITY_SERVER_LOGON_RID SID.

```
CSid ServerLogon() throw(...);
```

## <a name="service"></a> Sids::Service

Returns the SECURITY_SERVICE_RID SID.

```
CSid Service() throw(...);
```

## <a name="system"></a> Sids::System

Returns the SECURITY_LOCAL_SYSTEM_RID SID.

```
CSid System() throw(...);
```

## <a name="systemops"></a> Sids::SystemOps

Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.

```
CSid SystemOps() throw(...);
```

## <a name="terminalserver"></a> Sids::TerminalServer

Returns the SECURITY_TERMINAL_SERVER_RID SID.

```
CSid TerminalServer() throw(...);
```

## <a name="users"></a> Sids::Users

Returns the DOMAIN_ALIAS_RID_USERS SID.

```
CSid Users() throw(...);
```

## <a name="world"></a> Sids::World

Returns the SECURITY_WORLD_RID SID.

```
CSid World() throw(...);
```

## See also

[Functions](../../atl/reference/atl-functions.md)
