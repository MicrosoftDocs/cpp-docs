---
title: "CAtlServiceModuleT::Run Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
f1_keywords: ["CServiceModule::Run", "CServiceModule.Run", "CSecurityDescriptor"]
dev_langs: ["C++"]
helpviewer_keywords: ["ATL services, security"]
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlServiceModuleT::Run Function

`Run` contains calls to `PreMessageLoop`, `RunMessageLoop`, and `PostMessageLoop`. After being called, `PreMessageLoop` first stores the service's thread ID. The service will use this ID to close itself by sending a WM_QUIT message using the Win32 API function, [PostThreadMessage](https://msdn.microsoft.com/library/windows/desktop/ms644946).

`PreMessageLoop` then calls `InitializeSecurity`. By default, `InitializeSecurity` calls [CoInitializeSecurity](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializesecurity) with the security descriptor set to NULL, which means that any user has access to your object.

If you do not want the service to specify its own security, override `PreMessageLoop` and don't call `InitializeSecurity`, and COM will then determine the security settings from the registry. A convenient way to configure registry settings is with the [DCOMCNFG](../atl/dcomcnfg.md) utility discussed later in this section.

Once security is specified, the object is registered with COM so that new clients can connect to the program. Finally, the program tells the service control manager (SCM) that it is running and the program enters a message loop. The program remains running until it posts a quit message upon service shutdown.

## See Also

[Services](../atl/atl-services.md)   
[CSecurityDesc Class](../atl/reference/csecuritydesc-class.md)   
[CSid Class](../atl/reference/csid-class.md)   
[CDacl Class](../atl/reference/cdacl-class.md)   
[CAtlServiceModuleT::Run](../atl/reference/catlservicemodulet-class.md#run)

