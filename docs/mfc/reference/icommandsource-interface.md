---
title: "ICommandSource Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ICommandSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandSource interface"
ms.assetid: a4b1f698-c09f-4ba8-9b13-0e74a0a4967e
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
# ICommandSource Interface
Manages commands sent from a command source object to a user control.  
  
## Syntax  
  
```  
interface class ICommandSource  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ICommandSource::AddCommandHandler](#icommandsource__addcommandhandler)|Adds a command handler to a command source object.|  
|[ICommandSource::AddCommandRangeHandler](#icommandsource__addcommandrangehandler)|Adds a group of command handlers to a command source object.|  
|[ICommandSource::AddCommandRangeUIHandler](#icommandsource__addcommandrangeuihandler)|Adds a group of user interface command message handlers to a command source object.|  
|[ICommandSource::AddCommandUIHandler](#icommandsource__addcommandrangeuihandler)|Adds a user interface command message handler to a command source object.|  
|[ICommandSource::PostCommand](#icommandsource__postcommand)|Posts a message without waiting for it to be processed.|  
|[ICommandSource::RemoveCommandHandler](#icommandsource__removecommandhandler)|Removes a command handler from a command source object.|  
|[ICommandSource::RemoveCommandRangeHandler](#icommandsource__removecommandrangehandler)|Removes a group of command handlers from a command source object.|  
|[ICommandSource::RemoveCommandRangeUIHandler](#icommandsource__removecommandrangeuihandler)|Removes a group of user interface command message handlers from a command source object.|  
|[ICommandSource::RemoveCommandUIHandler](#icommandsource__removecommandrangeuihandler)|Removes a user interface command message handler from a command source object.|  
|[ICommandSource::SendCommand](#icommandsource__sendcommand)|Sends a message and waits for it to be processed before returning.|  
  
### Remarks  
 When you host a user control in an MFC View, [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing [ICommandTarget Interface](../../mfc/reference/icommandtarget-interface.md), you give the user control a reference to the `ICommandSource` object.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `ICommandTarget`.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
### Requirements  
 **Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  
  
## <a name="icommandsource__addcommandhandler"></a>  ICommandSource::AddCommandHandler
Adds a command handler to a command source object.
```
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### Parameters  
`cmdID`  
The command ID.  
`cmdHandler`  
A handle to the command handler method.

### Remarks
This method adds the command handler cmdHandler to the command source object and maps the handler to cmdID.
See [How to: Add Command Routing to the Windows Forms Control](https://msdn.microsoft.com/library/y33d8624.aspx) for an example of how to use AddCommandHandler.

## <a name="icommandsource__addcommandrangehandler"></a> ICommandSource::AddCommandRangeHandler

Adds a group of command handlers to a command source object.
```
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```
### Parameters  
`cmdIDMin`  
The beginning index of the command ID range.
`cmdIDMax`  
The ending index of the command ID range.
`cmdHandler`  
A handle to the message handler method to which the commands are mapped.
### Remarks
This method maps a contiguous range of command IDs to a single message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.

## <a name="icommandsource__addcommandrangeuihandler"></a> ICommandSource::AddCommandRangeUIHandler
Adds a group of user interface command message handlers to a command source object.
```
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin, 
    unsigned int cmdIDMax, 
    CommandUIHandler^ cmdUIHandler);
```
### Parameters  
`cmdIDMin`  
The beginning index of the command ID range.
`cmdIDMax`  
The ending index of the command ID range.
`cmdHandler`  
A handle to the message handler method to which the commands are mapped.

### Remarks
This method maps a contiguous range of command IDs to a single user interface command message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.

## <a name="icommandsource__addcommanduihandler"></a> ICommandSource::AddCommandUIHandler
Adds a user interface command message handler to a command source object.
```
void AddCommandUIHandler(
    unsigned int cmdID, 
    CommandUIHandler^ cmdUIHandler);
```
### Parameters
`cmdID`  
The command ID.  
`cmdUIHandler`  
A handle to the user interface command message handler method.

### Remarks
This method adds the user interface command message handler cmdHandler to the command source object and maps the handler to cmdID.

## <a name="icommandsource__postcommand"></a> ICommandSource::PostCommand
Posts a message without waiting for it to be processed.
```
void PostCommand(unsigned int command);
```
### Parameters
`command`  
The command ID of the message to be posted.
### Remarks
This method asynchronously posts the message mapped to the ID specified by command. It calls CWnd::PostMessage to place the message in the window's message queue and then returns without waiting for the corresponding window to process the message.


## <a name="icommandsource__removecommandhandler"></a> ICommandSource::RemoveCommandHandler
Removes a command handler from a command source object.
```
void RemoveCommandHandler(unsigned int cmdID);
```
### Parameters
`cmdID`  
The command ID.
### Remarks
This method removes the command handler mapped to cmdID from the command source object.


## <a name="icommandsource__removecommandrangecommandhandler"></a> ICommandSource::RemoveCommandRangeHandler 
Removes a group of command handlers from a command source object.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### Parameters
`cmdIDMin`  
The beginning index of the command ID range.
`cmdIDMax`  
The ending index of the command ID range.
### Remarks
This method removes a group of message handlers, mapped to the command IDs specifed by cmdIDMin and cmdIDMax, from the command source object.

## <a name="icommandsource__removecommandrangeuihandler"></a> ICommandSource::RemoveCommandRangeUIHandler 
Removes a group of user interface command message handlers from a command source object.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### Parameters
`cmdIDMin`  
The beginning index of the command ID range.
`cmdIDMax`  
The ending index of the command ID range.
### Remarks
This method removes a group of user interface command message handlers, mapped to the command IDs specifed by cmdIDMin and cmdIDMax, from the command source object.

## <a name="icommandsource__removecommanduihandler"></a> ICommandSource::RemoveCommandUIHandler 
Removes a user interface command message handler from a command source object.
```
void RemoveCommandUIHandler(unsigned int cmdID);
```
### Parameters
`cmdID`  
The command ID.
### Remarks
This method removes the user interface command message handler mapped to cmdID from the command source object.

## <a name="icommandsource__sendcommand"></a> ICommandSource::SendCommand 
Sends a message and waits for it to be processed before returning.
```
void SendCommand(unsigned int command);
```
### Parameters
`command`  
The command ID of the message to be sent.
### Remarks
This method synchronously sends the message mapped to the ID specified by command. It calls CWnd::SendMessage to place the message in the window's message queue and waits until that window procedure has processed the message before returning.
## See Also  
 [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [ICommandTarget Interface](../../mfc/reference/icommandtarget-interface.md)
