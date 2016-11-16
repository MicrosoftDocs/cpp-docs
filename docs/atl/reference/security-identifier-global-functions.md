---
title: "Security Identifier Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Security Identifier Global Functions
These functions return common well-known SID objects.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[Sids::AccountOps](#sids__accountops)|Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.|  
|[Sids::Admins](#sids__admins)|Returns the DOMAIN_ALIAS_RID_ADMINS SID.|  
|[Sids::AnonymousLogon](#sids__anonymouslogon)|Returns the SECURITY_ANONYMOUS_LOGON_RID SID.|  
|[Sids::AuthenticatedUser](#sids__authenticateduser)|Returns the SECURITY_AUTHENTICATED_USER_RID SID.|  
|[Sids::BackupOps](#sids__backupops)|Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.|  
|[Sids::Batch](#sids__batch)|Returns the SECURITY_BATCH_RID SID.|  
|[Sids::CreatorGroup](#sids__creatorgroup)|Returns the SECURITY_CREATOR_GROUP_RID SID.|  
|[Sids::CreatorGroupServer](#sids__creatorgroupserver)|Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.|  
|[Sids::CreatorOwner](#sids__creatorowner)|Returns the SECURITY_CREATOR_OWNER_RID SID.|  
|[Sids::CreatorOwnerServer](#sids__creatorownerserver)|Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.|  
|[Sids::Dialup](#sids__dialup)|Returns the SECURITY_DIALUP_RID SID.|  
|[Sids::Guests](#sids__guests)|Returns the DOMAIN_ALIAS_RID_GUESTS SID.|  
|[Sids::Interactive](#sids__interactive)|Returns the SECURITY_INTERACTIVE_RID SID.|  
|[Sids::Local](#sids__local)|Returns the SECURITY_LOCAL_RID SID.|  
|[Sids::Network](#sids__network)|Returns the SECURITY_NETWORK_RID SID.|  
|[Sids::NetworkService](#sids__networkservice)|Returns the SECURITY_NETWORK_SERVICE_RID SID.|  
|[Sids::Null](#sids__null)|Returns the SECURITY_NULL_RID SID.|  
|[Sids::PreW2KAccess](#sids__prew2kaccess)|Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.|  
|[Sids::PowerUsers](#sids__powerusers)|Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.|  
|[Sids::PrintOps](#sids__printops)|Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.|  
|[Sids::Proxy](#sids__proxy)|Returns the SECURITY_PROXY_RID SID.|  
|[Sids::RasServers](#sids__rasservers)|Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.|  
|[Sids::Replicator](#sids__replicator)|Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.|  
|[Sids::RestrictedCode](#sids__restrictedcode)|Returns the SECURITY_RESTRICTED_CODE_RID SID.|  
|[Sids::Self](#sids__self)|Returns the SECURITY_PRINCIPAL_SELF_RID SID.|  
|[Sids::ServerLogon](#sids__serverlogon)|Returns the SECURITY_SERVER_LOGON_RID SID.|  
|[Sids::Service](#sids__service)|Returns the SECURITY_SERVICE_RID SID.|  
|[Sids::System](#sids__system)|Returns the SECURITY_LOCAL_SYSTEM_RID SID.|  
|[Sids::SystemOps](#sids__systemops)|Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.|  
|[Sids::TerminalServer](#sids__terminalserver)|Returns the SECURITY_TERMINAL_SERVER_RID SID.|  
|[Sids::Users](#sids__users)|Returns the DOMAIN_ALIAS_RID_USERS SID.|  
|[Sids::World](#sids__world)|Returns the SECURITY_WORLD_RID SID.|  
  
##  <a name="sids__accountops"></a>  Sids::AccountOps  
 Returns the DOMAIN_ALIAS_RID_ACCOUNT_OPS SID.    
  
```
CSid AccountOps() throw(...);
```  
  
##  <a name="sids__admins"></a>  Sids::Admins  
 Returns the DOMAIN_ALIAS_RID_ADMINS SID.  
  

  
  
```
CSid Admins() throw(...);
```  
  
##  <a name="sids__anonymouslogon"></a>  Sids::AnonymousLogon  
 Returns the SECURITY_ANONYMOUS_LOGON_RID SID.  
  

  
  
```
CSid AnonymousLogon() throw(...);
```  
  
##  <a name="sids__authenticateduser"></a>  Sids::AuthenticatedUser  
 Returns the SECURITY_AUTHENTICATED_USER_RID SID.  
  

  
  
```
CSid AuthenticatedUser() throw(...);
```  
  
##  <a name="sids__backupops"></a>  Sids::BackupOps  
 Returns the DOMAIN_ALIAS_RID_BACKUP_OPS SID.  
  

  
  
```
CSid BackupOps() throw(...);
```  
  
##  <a name="sids__batch"></a>  Sids::Batch  
 Returns the SECURITY_BATCH_RID SID.  
  

  
  
```
CSid Batch() throw(...);
```  
  
##  <a name="sids__creatorgroup"></a>  Sids::CreatorGroup  
 Returns the SECURITY_CREATOR_GROUP_RID SID.  
  

  
  
```
CSid CreatorGroup() throw(...);
```  
  
##  <a name="sids__creatorgroupserver"></a>  Sids::CreatorGroupServer  
 Returns the SECURITY_CREATOR_GROUP_SERVER_RID SID.  
  

  
  
```
CSid CreatorGroupServer() throw(...);
```  
  
##  <a name="sids__creatorowner"></a>  Sids::CreatorOwner  
 Returns the SECURITY_CREATOR_OWNER_RID SID.  
  

  
  
```
CSid CreatorOwner() throw(...);
```  
  
##  <a name="sids__creatorownerserver"></a>  Sids::CreatorOwnerServer  
 Returns the SECURITY_CREATOR_OWNER_SERVER_RID SID.  
  

  
  
```
CSid CreatorOwnerServer() throw(...);
```  
  
##  <a name="sids__dialup"></a>  Sids::Dialup  
 Returns the SECURITY_DIALUP_RID SID.  
  

  
  
```
CSid Dialup() throw(...);
```  
  
##  <a name="sids__guests"></a>  Sids::Guests  
 Returns the DOMAIN_ALIAS_RID_GUESTS SID.  
  

  
  
```
CSid Guests() throw(...);
```  
  
##  <a name="sids__interactive"></a>  Sids::Interactive  
 Returns the SECURITY_INTERACTIVE_RID SID.  
  

  
  
```
CSid Interactive() throw(...);
```  
  
##  <a name="sids__local"></a>  Sids::Local  
 Returns the SECURITY_LOCAL_RID SID.  
  

  
  
```
CSid Local() throw(...);
```  
  
##  <a name="sids__network"></a>  Sids::Network  
 Returns the SECURITY_NETWORK_RID SID.  
  

  
  
```
CSid Network() throw(...);
```  
  
##  <a name="sids__networkservice"></a>  Sids::NetworkService  
 Returns the SECURITY_NETWORK_SERVICE_RID SID.  
  

  
  
```
CSid NetworkService() throw(...);
```  
  
### Remarks  
 Use NetworkService to enable the NT AUTHORITY\NetworkService user to read a CPerfMon security object. NetworkService adds a SecurityAttribute to the ATLServer code which will allow the DLL to login under the NetworkService account on [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] and greater operating system.  
  
 When custom log counters are created with ATLServer CPerfMon class in the Perfmon MMC, the counters may not appear when viewing the log file although they will appear correctly in the realtime view. CPerfMon custom performance counters don't have the necessary permissions to run under the "Performance Logs and Alerts" service (smlogsvc.exe) on [!INCLUDE[WinXpFamily](../../atl/reference/includes/winxpfamily_md.md)] (or greater) operating systems. This service runs under the "NT AUTHORITY\NetworkService" account.  
  
##  <a name="sids__null"></a>  Sids::Null  
 Returns the SECURITY_NULL_RID SID.  
  

  
  
```
CSid Null() throw(...);
```  
  
##  <a name="sids__prew2kaccess"></a>  Sids::PreW2KAccess  
 Returns the DOMAIN_ALIAS_RID_PREW2KCOMPACCESS SID.  
  

  
  
```
CSid PreW2KAccess() throw(...);
```  
  
##  <a name="sids__powerusers"></a>  Sids::PowerUsers  
 Returns the DOMAIN_ALIAS_RID_POWER_USERS SID.  
  

  
  
```
CSid PowerUsers() throw(...);
```  
  
##  <a name="sids__printops"></a>  Sids::PrintOps  
 Returns the DOMAIN_ALIAS_RID_PRINT_OPS SID.  
  

  
  
```
CSid PrintOps() throw(...);
```  
  
##  <a name="sids__proxy"></a>  Sids::Proxy  
 Returns the SECURITY_PROXY_RID SID.  
  

  
  
```
CSid Proxy() throw(...);
```  
  
##  <a name="sids__rasservers"></a>  Sids::RasServers  
 Returns the DOMAIN_ALIAS_RID_RAS_SERVERS SID.  
  

  
  
```
CSid RasServers() throw(...);
```  
  
##  <a name="sids__replicator"></a>  Sids::Replicator  
 Returns the DOMAIN_ALIAS_RID_REPLICATOR SID.  
  

  
  
```
CSid Replicator() throw(...);
```  
  
##  <a name="sids__restrictedcode"></a>  Sids::RestrictedCode  
 Returns the SECURITY_RESTRICTED_CODE_RID SID.  
  

  
  
```
CSid RestrictedCode() throw(...);
```  
  
##  <a name="sids__self"></a>  Sids::Self  
 Returns the SECURITY_PRINCIPAL_SELF_RID SID.  
  

  
  
```
CSid Self() throw(...);
```  
  
##  <a name="sids__serverlogon"></a>  Sids::ServerLogon  
 Returns the SECURITY_SERVER_LOGON_RID SID.  
  

  
  
```
CSid ServerLogon() throw(...);
```  
  
##  <a name="sids__service"></a>  Sids::Service  
 Returns the SECURITY_SERVICE_RID SID.  
  

  
  
```
CSid Service() throw(...);
```  
  
##  <a name="sids__system"></a>  Sids::System  
 Returns the SECURITY_LOCAL_SYSTEM_RID SID.  
  

  
  
```
CSid System() throw(...);
```  
  
##  <a name="sids__systemops"></a>  Sids::SystemOps  
 Returns the DOMAIN_ALIAS_RID_SYSTEM_OPS SID.  
  

  
  
```
CSid SystemOps() throw(...);
```  
  
##  <a name="sids__terminalserver"></a>  Sids::TerminalServer  
 Returns the SECURITY_TERMINAL_SERVER_RID SID.  
  

  
  
```
CSid TerminalServer() throw(...);
```  
  
##  <a name="sids__users"></a>  Sids::Users  
 Returns the DOMAIN_ALIAS_RID_USERS SID.  
  

  
  
```
CSid Users() throw(...);
```  
  
##  <a name="sids__world"></a>  Sids::World  
 Returns the SECURITY_WORLD_RID SID.  
  

  
  
```
CSid World() throw(...);
```  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)
