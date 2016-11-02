---
title: "Security Identifier Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "security IDs [C++]"
  - "SIDs [C++], returning SID objects"
ms.assetid: 85404dcb-c59b-4535-ab3d-66cfa37e87de
caps.latest.revision: 19
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
# Security Identifier Global Functions
These functions return common well-known SID objects.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[Sids::AccountOps](../Topic/Sids::AccountOps.md)|Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.|  
|[Sids::Admins](../Topic/Sids::Admins.md)|Returns the DOMAIN_ALIAS_RID_ADMINS SID.|  
|[Sids::AnonymousLogon](../Topic/Sids::AnonymousLogon.md)|Returns the SECURITY_ANONYMOUS_LOGON_RID SID.|  
|[Sids::AuthenticatedUser](../Topic/Sids::AuthenticatedUser.md)|Returns the SECURITY_AUTHENTICATED_USER_RID SID.|  
|[Sids::BackupOps](../Topic/Sids::BackupOps.md)|Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.|  
|[Sids::Batch](../Topic/Sids::Batch.md)|Returns the SECURITY_BATCH_RID SID.|  
|[Sids::CreatorGroup](../Topic/Sids::CreatorGroup.md)|Returns the SECURITY_CREATOR_GROUP_RID SID.|  
|[Sids::CreatorGroupServer](../Topic/Sids::CreatorGroupServer.md)|Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.|  
|[Sids::CreatorOwner](../Topic/Sids::CreatorOwner.md)|Returns the SECURITY_CREATOR_OWNER_RID SID.|  
|[Sids::CreatorOwnerServer](../Topic/Sids::CreatorOwnerServer.md)|Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.|  
|[Sids::Dialup](../Topic/Sids::Dialup.md)|Returns the SECURITY_DIALUP_RID SID.|  
|[Sids::Guests](../Topic/Sids::Guests.md)|Returns the DOMAIN_ALIAS_RID_GUESTS SID.|  
|[Sids::Interactive](../Topic/Sids::Interactive.md)|Returns the SECURITY_INTERACTIVE_RID SID.|  
|[Sids::Local](../Topic/Sids::Local.md)|Returns the SECURITY_LOCAL_RID SID.|  
|[Sids::Network](../Topic/Sids::Network.md)|Returns the SECURITY_NETWORK_RID SID.|  
|[Sids::NetworkService](../Topic/Sids::NetworkService.md)|Returns the SECURITY_NETWORK_SERVICE_RID SID.|  
|[Sids::Null](../Topic/Sids::Null.md)|Returns the SECURITY_NULL_RID SID.|  
|[Sids::PreW2KAccess](../Topic/Sids::PreW2KAccess.md)|Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.|  
|[Sids::PowerUsers](../Topic/Sids::PowerUsers.md)|Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.|  
|[Sids::PrintOps](../Topic/Sids::PrintOps.md)|Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.|  
|[Sids::Proxy](../Topic/Sids::Proxy.md)|Returns the SECURITY_PROXY_RID SID.|  
|[Sids::RasServers](../Topic/Sids::RasServers.md)|Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.|  
|[Sids::Replicator](../Topic/Sids::Replicator.md)|Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.|  
|[Sids::RestrictedCode](../Topic/Sids::RestrictedCode.md)|Returns the SECURITY_RESTRICTED_CODE_RID SID.|  
|[Sids::Self](../Topic/Sids::Self.md)|Returns the SECURITY_PRINCIPAL_SELF_RID SID.|  
|[Sids::ServerLogon](../Topic/Sids::ServerLogon.md)|Returns the SECURITY_SERVER_LOGON_RID SID.|  
|[Sids::Service](../Topic/Sids::Service.md)|Returns the SECURITY_SERVICE_RID SID.|  
|[Sids::System](../Topic/Sids::System.md)|Returns the SECURITY_LOCAL_SYSTEM_RID SID.|  
|[Sids::SystemOps](../Topic/Sids::SystemOps.md)|Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.|  
|[Sids::TerminalServer](../Topic/Sids::TerminalServer.md)|Returns the SECURITY_TERMINAL_SERVER_RID SID.|  
|[Sids::Users](../Topic/Sids::Users.md)|Returns the DOMAIN_ALIAS_RID_USERS SID.|  
|[Sids::World](../Topic/Sids::World.md)|Returns the SECURITY_WORLD_RID SID.|  
  
##  <a name="sids__accountops"></a>  Sids::AccountOps  
 Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid AccountOps() throw(...);
```  
  
##  <a name="sids__admins"></a>  Sids::Admins  
 Returns the DOMAIN_ALIAS_RID_ADMINS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Admins() throw(...);
```  
  
##  <a name="sids__anonymouslogon"></a>  Sids::AnonymousLogon  
 Returns the SECURITY_ANONYMOUS_LOGON_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid AnonymousLogon() throw(...);
```  
  
##  <a name="sids__authenticateduser"></a>  Sids::AuthenticatedUser  
 Returns the SECURITY_AUTHENTICATED_USER_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid AuthenticatedUser() throw(...);
```  
  
##  <a name="sids__backupops"></a>  Sids::BackupOps  
 Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid BackupOps() throw(...);
```  
  
##  <a name="sids__batch"></a>  Sids::Batch  
 Returns the SECURITY_BATCH_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Batch() throw(...);
```  
  
##  <a name="sids__creatorgroup"></a>  Sids::CreatorGroup  
 Returns the SECURITY_CREATOR_GROUP_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid CreatorGroup() throw(...);
```  
  
##  <a name="sids__creatorgroupserver"></a>  Sids::CreatorGroupServer  
 Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid CreatorGroupServer() throw(...);
```  
  
##  <a name="sids__creatorowner"></a>  Sids::CreatorOwner  
 Returns the SECURITY_CREATOR_OWNER_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid CreatorOwner() throw(...);
```  
  
##  <a name="sids__creatorownerserver"></a>  Sids::CreatorOwnerServer  
 Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid CreatorOwnerServer() throw(...);
```  
  
##  <a name="sids__dialup"></a>  Sids::Dialup  
 Returns the SECURITY_DIALUP_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Dialup() throw(...);
```  
  
##  <a name="sids__guests"></a>  Sids::Guests  
 Returns the DOMAIN_ALIAS_RID_GUESTS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Guests() throw(...);
```  
  
##  <a name="sids__interactive"></a>  Sids::Interactive  
 Returns the SECURITY_INTERACTIVE_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Interactive() throw(...);
```  
  
##  <a name="sids__local"></a>  Sids::Local  
 Returns the SECURITY_LOCAL_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Local() throw(...);
```  
  
##  <a name="sids__network"></a>  Sids::Network  
 Returns the SECURITY_NETWORK_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Network() throw(...);
```  
  
##  <a name="sids__networkservice"></a>  Sids::NetworkService  
 Returns the SECURITY_NETWORK_SERVICE_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid NetworkService() throw(...);
```  
  
### Remarks  
 Use NetworkService to enable the NT AUTHORITY\NetworkService user to read a CPerfMon security object. NetworkService adds a SecurityAttribute to the ATLServer code which will allow the DLL to login under the NetworkService account on [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] and greater operating system.  
  
 When custom log counters are created with ATLServer CPerfMon class in the Perfmon MMC, the counters may not appear when viewing the log file although they will appear correctly in the realtime view. CPerfMon custom performance counters don't have the necessary permissions to run under the "Performance Logs and Alerts" service (smlogsvc.exe) on [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] (or greater) operating systems. This service runs under the "NT AUTHORITY\NetworkService" account.  
  
##  <a name="sids__null"></a>  Sids::Null  
 Returns the SECURITY_NULL_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Null() throw(...);
```  
  
##  <a name="sids__prew2kaccess"></a>  Sids::PreW2KAccess  
 Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid PreW2KAccess() throw(...);
```  
  
##  <a name="sids__powerusers"></a>  Sids::PowerUsers  
 Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid PowerUsers() throw(...);
```  
  
##  <a name="sids__printops"></a>  Sids::PrintOps  
 Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid PrintOps() throw(...);
```  
  
##  <a name="sids__proxy"></a>  Sids::Proxy  
 Returns the SECURITY_PROXY_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Proxy() throw(...);
```  
  
##  <a name="sids__rasservers"></a>  Sids::RasServers  
 Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid RasServers() throw(...);
```  
  
##  <a name="sids__replicator"></a>  Sids::Replicator  
 Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Replicator() throw(...);
```  
  
##  <a name="sids__restrictedcode"></a>  Sids::RestrictedCode  
 Returns the SECURITY_RESTRICTED_CODE_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid RestrictedCode() throw(...);
```  
  
##  <a name="sids__self"></a>  Sids::Self  
 Returns the SECURITY_PRINCIPAL_SELF_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Self() throw(...);
```  
  
##  <a name="sids__serverlogon"></a>  Sids::ServerLogon  
 Returns the SECURITY_SERVER_LOGON_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid ServerLogon() throw(...);
```  
  
##  <a name="sids__service"></a>  Sids::Service  
 Returns the SECURITY_SERVICE_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Service() throw(...);
```  
  
##  <a name="sids__system"></a>  Sids::System  
 Returns the SECURITY_LOCAL_SYSTEM_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid System() throw(...);
```  
  
##  <a name="sids__systemops"></a>  Sids::SystemOps  
 Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid SystemOps() throw(...);
```  
  
##  <a name="sids__terminalserver"></a>  Sids::TerminalServer  
 Returns the SECURITY_TERMINAL_SERVER_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid TerminalServer() throw(...);
```  
  
##  <a name="sids__users"></a>  Sids::Users  
 Returns the DOMAIN_ALIAS_RID_USERS SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid Users() throw(...);
```  
  
##  <a name="sids__world"></a>  Sids::World  
 Returns the SECURITY_WORLD_RID SID.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
CSid World() throw(...);
```  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)





