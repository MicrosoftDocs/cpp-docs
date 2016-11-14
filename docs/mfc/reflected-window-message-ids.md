---
title: "Reflected Window Message IDs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OCM_CTLCOLORBTN"
  - "OCM_PARENTNOTIFY"
  - "OCM_VKEYTOITEM"
  - "OCM_CTLCOLORSTATIC"
  - "OCM_HSCROLL"
  - "OCM_CHARTOITEM"
  - "OCM_DRAWITEM"
  - "OCM_MEASUREITEM"
  - "OCM_COMPAREITEM"
  - "OCM_COMMAND"
  - "OCM_NOTIFY"
  - "OCM_CTLCOLORMSGBOX"
  - "OCM_DELETEITEM"
  - "OCM_CTLCOLORLISTBOX"
  - "OCM_CTLCOLORDLG"
  - "OCM_CTLCOLOREDIT"
  - "OCM_CTLCOLORSCROLLBAR"
  - "OCM_VSCROLL"
  - "OCM_CTLCOLOR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OCM_HSCROLL message"
  - "OCM_PARENTNOTIFY message"
  - "messages, reflected"
  - "reflected messages, window message Ids"
  - "OCM_CTLCOLORDLG message"
  - "OCM_COMMAND message"
  - "OCM_CTLCOLORMSGBOX message"
  - "OCM_COMPAREITEM message"
  - "OCM_DRAWITEM message"
  - "OCM_VSCROLL message"
  - "OCM_CTLCOLOREDIT message"
  - "OCM_VKEYTOITEM message"
  - "OCM_CHARTOITEM message"
  - "OCM_CTLCOLORBTN message"
  - "OCM_CTLCOLORSTATIC message"
  - "OCM_MEASUREITEM message"
  - "OCM_CTLCOLOR message"
  - "OCM_CTLCOLORSCROLLBAR message"
  - "OCM_ messages"
  - "OCM_DELETEITEM message"
  - "OCM_CTLCOLORLISTBOX message"
  - "OCM_NOTIFY message"
  - "reflected messages"
ms.assetid: 3417ff51-ff9f-458c-bff4-17c200f00d96
caps.latest.revision: 8
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
# Reflected Window Message IDs
A quick way to create an ActiveX control, or other specialized control, is to subclass a window. For more information, see [MFC ActiveX Controls: Subclassing a Windows Control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
 To prevent the control's container from receiving the window messages sent by a subclassed Windows control, [COleControl](../mfc/reference/colecontrol-class.md) creates a "reflector" window to intercept certain window messages and send them back to the control. The control, in its window procedure, can then process these reflected messages by taking actions appropriate for an ActiveX control.  
  
 The following table shows the messages that are intercepted and the corresponding messages that the reflector window sends.  
  
|Message sent by the control|Message reflected to the control|  
|---------------------------------|--------------------------------------|  
|[WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591)|**OCM_COMMAND**|  
|[WM_CTLCOLORBTN](http://msdn.microsoft.com/library/windows/desktop/bb761849)|**OCM_CTLCOLORBTN**|  
|[WM_CTLCOLOREDIT](http://msdn.microsoft.com/library/windows/desktop/bb761691)|**OCM_CTLCOLOREDIT**|  
|[WM_CTLCOLORDLG](http://msdn.microsoft.com/library/windows/desktop/ms645417)|**OCM_CTLCOLORDLG**|  
|[WM_CTLCOLORLISTBOX](http://msdn.microsoft.com/library/windows/desktop/bb761360)|**OCM_CTLCOLORLISTBOX**|  
|[WM_CTLCOLORSCROLLBAR](http://msdn.microsoft.com/library/windows/desktop/bb787573)|**OCM_CTLCOLORSCROLLBAR**|  
|[WM_CTLCOLORSTATIC](http://msdn.microsoft.com/library/windows/desktop/bb787524)|**OCM_CTLCOLORSTATIC**|  
|[WM_DRAWITEM](http://msdn.microsoft.com/library/windows/desktop/bb775923)|**OCM_DRAWITEM**|  
|[WM_MEASUREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775925)|**OCM_MEASUREITEM**|  
|[WM_DELETEITEM](http://msdn.microsoft.com/library/windows/desktop/bb761362)|**OCM_DELETEITEM**|  
|[WM_VKEYTOITEM](http://msdn.microsoft.com/library/windows/desktop/bb761364)|**OCM_VKEYTOITEM**|  
|[WM_CHARTOITEM](http://msdn.microsoft.com/library/windows/desktop/bb761358)|**OCM_CHARTOITEM**|  
|[WM_COMPAREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775921)|**OCM_COMPAREITEM**|  
|[WM_HSCROLL](http://msdn.microsoft.com/library/windows/desktop/bb787575)|**OCM_HSCROLL**|  
|[WM_VSCROLL](http://msdn.microsoft.com/library/windows/desktop/bb787577)|**OCM_VSCROLL**|  
|[WM_PARENTNOTIFY](https://msdn.microsoft.com/library/ms632638.aspx)|**OCM_PARENTNOTIFY**|  
|[WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)|**OCM_NOTIFY**|  
  
> [!NOTE]
>  If the control runs on a Win32 system, there are several types of **WM_CTLCOLOR\*** messages it may receive. For more information, see **WM_CTLCOLORBTN**, **WM_CTLCOLORDLG**, **WM_CTLCOLOREDIT**, **WM_CTLCOLORLISTBOX**, **WM_CTLCOLORMSGBOX**, **WM_CTLCOLORSCROLLBAR**, **WM_CTLCOLORSTATIC**.  
  
## See Also  
 [MFC ActiveX Controls: Subclassing a Windows Control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)   
 [TN062: Message Reflection for Windows Controls](../mfc/tn062-message-reflection-for-windows-controls.md)

