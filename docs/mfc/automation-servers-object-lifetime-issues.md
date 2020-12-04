---
description: "Learn more about: Automation Servers: Object-Lifetime Issues"
title: "Automation Servers: Object-Lifetime Issues"
ms.date: "11/04/2016"
helpviewer_keywords: ["objects [MFC], lifetime", "lifetime, automation server", "Automation servers, object lifetime", "servers, lifetime of Automation"]
ms.assetid: 342baacf-4015-4a0e-be2f-321424f1cb43
---
# Automation Servers: Object-Lifetime Issues

When an Automation client creates or activates an OLE item, the server passes the client a pointer to that object. The client establishes a reference to the object through a call to the OLE function [IUnknown::AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref). This reference is in effect until the client calls [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release). (Client applications written with the Microsoft Foundation Class Library's OLE classes need not make these calls; the framework does so.) The OLE system and the server itself may establish references to the object. A server should not destroy an object as long as external references to the object remain in effect.

The framework maintains an internal count of the number of references to any server object derived from [CCmdTarget](reference/ccmdtarget-class.md). This count is updated when an Automation client or other entity adds or releases a reference to the object.

When the reference count becomes 0, the framework calls the virtual function [CCmdTarget::OnFinalRelease](reference/ccmdtarget-class.md#onfinalrelease). The default implementation of this function calls the **`delete`** operator to delete this object.

The Microsoft Foundation Class Library provides additional facilities for controlling application behavior when external clients have references to the application's objects. Besides maintaining a count of references to each object, servers maintain a global count of active objects. The global functions [AfxOleLockApp](reference/application-control.md#afxolelockapp) and [AfxOleUnlockApp](reference/application-control.md#afxoleunlockapp) update the application's count of active objects. If this count is nonzero, the application does not terminate when the user chooses Close from the system menu or Exit from the File menu. Instead, the application's main window is hidden (but not destroyed) until all pending client requests have been completed. Typically, `AfxOleLockApp` and `AfxOleUnlockApp` are called in the constructors and destructors, respectively, of classes that support Automation.

Sometimes circumstances force the server to terminate while a client still has a reference to an object. For example, a resource on which the server depends may become unavailable, causing the server to encounter an error. The user may also close a server document that contains objects to which other applications have references.

In the Windows SDK, see `IUnknown::AddRef` and `IUnknown::Release`.

## See also

[Automation Servers](automation-servers.md)<br/>
[AfxOleCanExitApp](reference/application-control.md#afxolecanexitapp)
