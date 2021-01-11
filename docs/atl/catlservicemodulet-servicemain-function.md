---
description: "Learn more about: CAtlServiceModuleT::ServiceMain Function"
title: "CAtlServiceModuleT::ServiceMain Function"
ms.date: "11/04/2016"
helpviewer_keywords: ["ServiceMain method"]
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
---
# CAtlServiceModuleT::ServiceMain Function

The service control manager (SCM) calls `ServiceMain` when you open the Services Control Panel application, select the service, and click **Start**.

After the SCM calls `ServiceMain`, a service must give the SCM a handler function. This function lets the SCM obtain the service's status and pass specific instructions (such as pausing or stopping). The SCM gets this function when the service passes `_Handler` to the Win32 API function, [RegisterServiceCtrlHandler](/windows/win32/api/winsvc/nf-winsvc-registerservicectrlhandlerw). (`_Handler` is a static member function that calls the non-static member function [Handler](../atl/reference/catlservicemodulet-class.md#handler).)

At startup, a service should also inform the SCM of its current status. It does this by passing SERVICE_START_PENDING to the Win32 API function, [SetServiceStatus](/windows/win32/api/winsvc/nf-winsvc-setservicestatus).

`ServiceMain` then calls `CAtlExeModuleT::InitializeCom`, which calls the Win32 API function [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex). By default, `InitializeCom` passes the COINIT_MULTITHREADED flag to the function. This flag indicates that the program is to be a free-threaded server.

Now, `CAtlServiceModuleT::Run` is called to perform the main work of the service. `Run` continues to execute until the service is stopped.

## See also

[Services](../atl/atl-services.md)<br/>
[CAtlServiceModuleT::ServiceMain](../atl/reference/catlservicemodulet-class.md#servicemain)
