---
title: "COleMessageFilter Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleMessageFilter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleMessageFilter class"
  - "OLE [C++], managing concurrency"
  - "message filters [C++]"
  - "OLE applications [C++], managing interactions"
  - "OLE messages"
  - "applications [OLE], managing interactions"
  - "messages [C++], OLE"
ms.assetid: b1fd1639-fac4-4fd0-bf17-15172deba13c
caps.latest.revision: 21
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
# COleMessageFilter Class
Manages the concurrency required by the interaction of OLE applications.  
  
## Syntax  
  
```  
class COleMessageFilter : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleMessageFilter::COleMessageFilter](#colemessagefilter__colemessagefilter)|Constructs a `COleMessageFilter` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleMessageFilter::BeginBusyState](#colemessagefilter__beginbusystate)|Puts the application in the busy state.|  
|[COleMessageFilter::EnableBusyDialog](#colemessagefilter__enablebusydialog)|Enables and disables the dialog box that appears when a called application is busy.|  
|[COleMessageFilter::EnableNotRespondingDialog](#colemessagefilter__enablenotrespondingdialog)|Enables and disables the dialog box that appears when a called application is not responding.|  
|[COleMessageFilter::EndBusyState](#colemessagefilter__endbusystate)|Terminates the application's busy state.|  
|[COleMessageFilter::OnMessagePending](#colemessagefilter__onmessagepending)|Called by the framework to process messages while an OLE call is in progress.|  
|[COleMessageFilter::Register](#colemessagefilter__register)|Registers the message filter with the OLE system DLLs.|  
|[COleMessageFilter::Revoke](#colemessagefilter__revoke)|Revokes the message filter's registration with the OLE system DLLs.|  
|[COleMessageFilter::SetBusyReply](#colemessagefilter__setbusyreply)|Determines the busy application's reply to an OLE call.|  
|[COleMessageFilter::SetMessagePendingDelay](#colemessagefilter__setmessagependingdelay)|Determines how long the application waits for a response to an OLE call.|  
|[COleMessageFilter::SetRetryReply](#colemessagefilter__setretryreply)|Determines the calling application's reply to a busy application.|  
  
## Remarks  
 The `COleMessageFilter` class is useful in visual editing server and container applications, as well as OLE automation applications. For server applications that are being called, this class can be used to make the application "busy" so that incoming calls from other container applications are either canceled or retried later. This class can also be used to determine the action to be taken by a calling application when the called application is busy.  
  
 Common usage is for a server application to call [BeginBusyState](#colemessagefilter__beginbusystate) and [EndBusyState](#colemessagefilter__endbusystate) when it would be dangerous for a document or other OLE accessible object to be destroyed. These calls are made in [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#cwinapp__onidle) during user-interface updates.  
  
 By default, a `COleMessageFilter` object is allocated when the application is initialized. It can be retrieved with [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).  
  
 This is an advanced class; you seldom need to work with it directly.  
  
 For more information, see the article [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleMessageFilter`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="colemessagefilter__beginbusystate"></a>  COleMessageFilter::BeginBusyState  
 Call this function to begin a busy state.  
  
```  
virtual void BeginBusyState();
```  
  
### Remarks  
 It works in conjunction with [EndBusyState](#colemessagefilter__endbusystate) to control the application's busy state. The function [SetBusyReply](#colemessagefilter__setbusyreply) determines the application's reply to calling applications when it is busy.  
  
 The `BeginBusyState` and `EndBusyState` calls increment and decrement, respectively, a counter that determines whether the application is busy. For example, two calls to `BeginBusyState` and one call to `EndBusyState` still result in a busy state. To cancel a busy state it is necessary to call `EndBusyState` the same number of times `BeginBusyState` has been called.  
  
 By default, the framework enters the busy state during idle processing, which is performed by [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#cwinapp__onidle). While the application is handling **ON_COMMANDUPDATEUI** notifications, incoming calls are handled later, after idle processing is complete.  
  
##  <a name="colemessagefilter__colemessagefilter"></a>  COleMessageFilter::COleMessageFilter  
 Creates a `COleMessageFilter` object.  
  
```  
COleMessageFilter();
```  
  
##  <a name="colemessagefilter__enablebusydialog"></a>  COleMessageFilter::EnableBusyDialog  
 Enables and disables the busy dialog box, which is displayed when the message-pending delay expires (see [SetRetryReply](#colemessagefilter__setretryreply)) during an OLE call.  
  
```  
void EnableBusyDialog(BOOL bEnableBusy = TRUE);
```  
  
### Parameters  
 *bEnableBusy*  
 Specifies whether the "busy" dialog box is enabled or disabled.  
  
##  <a name="colemessagefilter__enablenotrespondingdialog"></a>  COleMessageFilter::EnableNotRespondingDialog  
 Enables and disables the "not responding" dialog box, which is displayed if a keyboard or mouse message is pending during an OLE call and the call has timed out.  
  
```  
void EnableNotRespondingDialog(BOOL bEnableNotResponding = TRUE);
```  
  
### Parameters  
 *bEnableNotResponding*  
 Specifies whether the "not responding" dialog box is enabled or disabled.  
  
##  <a name="colemessagefilter__endbusystate"></a>  COleMessageFilter::EndBusyState  
 Call this function to end a busy state.  
  
```  
virtual void EndBusyState();
```  
  
### Remarks  
 It works in conjunction with [BeginBusyState](#colemessagefilter__beginbusystate) to control the application's busy state. The function [SetBusyReply](#colemessagefilter__setbusyreply) determines the application's reply to calling applications when it is busy.  
  
 The `BeginBusyState` and `EndBusyState` calls increment and decrement, respectively, a counter that determines whether the application is busy. For example, two calls to `BeginBusyState` and one call to `EndBusyState` still result in a busy state. To cancel a busy state it is necessary to call `EndBusyState` the same number of times `BeginBusyState` has been called.  
  
 By default, the framework enters the busy state during idle processing, which is performed by [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#cwinapp__onidle). While the application is handling `ON_UPDATE_COMMAND_UI` notifications, incoming calls are handled after idle processing is complete.  
  
##  <a name="colemessagefilter__onmessagepending"></a>  COleMessageFilter::OnMessagePending  
 Called by the framework to process messages while an OLE call is in progress.  
  
```  
virtual BOOL OnMessagePending(const MSG* pMsg);
```  
  
### Parameters  
 `pMsg`  
 Pointer to the pending message.  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 When a calling application is waiting for a call to be completed, the framework calls `OnMessagePending` with a pointer to the pending message. By default, the framework dispatches `WM_PAINT` messages, so that window updates can occur during a call that is taking a long time.  
  
 You must register your message filter by means of a call to [Register](#colemessagefilter__register) before it can become active.  
  
##  <a name="colemessagefilter__register"></a>  COleMessageFilter::Register  
 Registers the message filter with the OLE system DLLs.  
  
```  
BOOL Register();
```  
  
### Return Value  
 Nonzero on success; otherwise 0.  
  
### Remarks  
 A message filter has no effect unless it is registered with the system DLLs. Usually your application's initialization code registers the application's message filter. Any other message filter registered by your application should be revoked before the program terminates by a call to [Revoke](#colemessagefilter__revoke).  
  
 The framework's default message filter is automatically registered during initialization and revoked at termination.  
  
##  <a name="colemessagefilter__revoke"></a>  COleMessageFilter::Revoke  
 Revokes a previous registration performed by a call to [Register](#colemessagefilter__register).  
  
```  
void Revoke();
```  
  
### Remarks  
 A message filter should be revoked before the program terminates.  
  
 The default message filter, which is created and registered automatically by the framework, is also automatically revoked.  
  
##  <a name="colemessagefilter__setbusyreply"></a>  COleMessageFilter::SetBusyReply  
 This function sets the application's "busy reply."  
  
```  
void SetBusyReply(SERVERCALL nBusyReply);
```  
  
### Parameters  
 *nBusyReply*  
 A value from the `SERVERCALL` enumeration, which is defined in COMPOBJ.H. It can have any one of the following values:  
  
- **SERVERCALL_ISHANDLED** The application can accept calls but may fail in processing a particular call.  
  
- **SERVERCALL_REJECTED** The application probably will never be able to process a call.  
  
- **SERVERCALL_RETRYLATER** The application is temporarily in a state in which it cannot process a call.  
  
### Remarks  
 The [BeginBusyState](#colemessagefilter__beginbusystate) and [EndBusyState](#colemessagefilter__endbusystate) functions control the application's busy state.  
  
 When an application has been made busy with a call to `BeginBusyState`, it responds to calls from the OLE system DLLs with a value determined by the last setting of `SetBusyReply`. The calling application uses this busy reply to determine what action to take.  
  
 By default, the busy reply is **SERVERCALL_RETRYLATER**. This reply causes the calling application to retry the call as soon as possible.  
  
##  <a name="colemessagefilter__setmessagependingdelay"></a>  COleMessageFilter::SetMessagePendingDelay  
 Determines how long the calling application waits for a response from the called application before taking further action.  
  
```  
void SetMessagePendingDelay(DWORD nTimeout = 5000);
```  
  
### Parameters  
 `nTimeout`  
 Number of milliseconds for the message-pending delay.  
  
### Remarks  
 This function works in concert with [SetRetryReply](#colemessagefilter__setretryreply).  
  
##  <a name="colemessagefilter__setretryreply"></a>  COleMessageFilter::SetRetryReply  
 Determines the calling application's action when it receives a busy response from a called application.  
  
```  
void SetRetryReply(DWORD nRetryReply = 0);
```  
  
### Parameters  
 `nRetryReply`  
 Number of milliseconds between retries.  
  
### Remarks  
 When a called application indicates that it is busy, the calling application may decide to wait until the server is no longer busy, to retry right away, or to retry after a specified interval. It may also decide to cancel the call altogether.  
  
 The caller's response is controlled by the functions `SetRetryReply` and [SetMessagePendingDelay](#colemessagefilter__setmessagependingdelay). `SetRetryReply` determines how long the calling application should wait between retries for a given call. `SetMessagePendingDelay` determines how long the calling application waits for a response from the server before taking further action.  
  
 Usually the defaults are acceptable and do not need to be changed. The framework retries the call every `nRetryReply` milliseconds until the call goes through or the message-pending delay has expired. A value of 0 for `nRetryReply` specifies an immediate retry, and – 1 specifies cancellation of the call.  
  
 When the message-pending delay has expired, the OLE "busy dialog box" (see [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)) is displayed so that the user can choose to cancel or retry the call. Call [EnableBusyDialog](#colemessagefilter__enablebusydialog) to enable or disable this dialog box.  
  
 When a keyboard or mouse message is pending during a call and the call has timed out (exceeded the message-pending delay), the "not responding" dialog box is displayed. Call [EnableNotRespondingDialog](#colemessagefilter__enablenotrespondingdialog) to enable or disable this dialog box. Usually this state of affairs indicates that something has gone wrong and the user is getting impatient.  
  
 When the dialogs are disabled, the current "retry reply" is always used for calls to busy applications.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)
