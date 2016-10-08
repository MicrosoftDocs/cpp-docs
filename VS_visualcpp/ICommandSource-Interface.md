---
title: "ICommandSource Interface"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: a4b1f698-c09f-4ba8-9b13-0e74a0a4967e
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[ICommandSource::AddCommandHandler](../VS_visualcpp/ICommandSource--AddCommandHandler.md)|Adds a command handler to a command source object.|  
|[ICommandSource::AddCommandRangeHandler](../VS_visualcpp/ICommandSource--AddCommandRangeHandler.md)|Adds a group of command handlers to a command source object.|  
|[ICommandSource::AddCommandRangeUIHandler](../VS_visualcpp/ICommandSource--AddCommandRangeUIHandler.md)|Adds a group of user interface command message handlers to a command source object.|  
|[ICommandSource::AddCommandUIHandler](../VS_visualcpp/ICommandSource--AddCommandUIHandler.md)|Adds a user interface command message handler to a command source object.|  
|[ICommandSource::PostCommand](../VS_visualcpp/ICommandSource--PostCommand.md)|Posts a message without waiting for it to be processed.|  
|[ICommandSource::RemoveCommandHandler](../VS_visualcpp/ICommandSource--RemoveCommandHandler.md)|Removes a command handler from a command source object.|  
|[ICommandSource::RemoveCommandRangeHandler](../VS_visualcpp/ICommandSource--RemoveCommandRangeHandler.md)|Removes a group of command handlers from a command source object.|  
|[ICommandSource::RemoveCommandRangeUIHandler](../VS_visualcpp/ICommandSource--RemoveCommandRangeUIHandler.md)|Removes a group of user interface command message handlers from a command source object.|  
|[ICommandSource::RemoveCommandUIHandler](../VS_visualcpp/ICommandSource--RemoveCommandUIHandler.md)|Removes a user interface command message handler from a command source object.|  
|[ICommandSource::SendCommand](../VS_visualcpp/ICommandSource--SendCommand.md)|Sends a message and waits for it to be processed before returning.|  
  
## Remarks  
 When you host a user control in an MFC View, [CWinFormsView Class](../VS_visualcpp/CWinFormsView-Class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing [ICommandTarget Interface](../VS_visualcpp/ICommandTarget-Interface.md), you give the user control a reference to the `ICommandSource` object.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../VS_visualcpp/How-to--Add-Command-Routing-to-the-Windows-Forms-Control.md) for an example of how to use `ICommandTarget`.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../VS_visualcpp/Using-a-Windows-Form-User-Control-in-MFC.md).  
  
## Requirements  
 **Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  
  
## See Also  
 [How to: Add Command Routing to the Windows Forms Control](../VS_visualcpp/How-to--Add-Command-Routing-to-the-Windows-Forms-Control.md)   
 [ICommandTarget Interface](../VS_visualcpp/ICommandTarget-Interface.md)