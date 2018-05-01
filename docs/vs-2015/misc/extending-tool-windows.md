---
title: "Extending Tool Windows | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "windows [Visual Studio SDK], tool"
  - "document windows"
  - "tool windows"
  - "windows [Visual Studio SDK], document"
ms.assetid: 252f7b99-b44a-4a63-88d9-3a0ca48ac4f1
caps.latest.revision: 37
manager: "douge"
---
# Extending Tool Windows
Visual Studio tool windows are, in general, read-only windows that are not file-based. In this they differ from document windows, which display files in read-write mode. The **Toolbox**, **Solution Explorer**, **Properties** window, and **Web Browser** are examples of tool windows.  
  
 All tool windows in Visual Studio 2010 and later versions are WPF-based. In versions of Visual Studio before Visual Studio 2010, tool windows were Windows Forms-based. Windows Forms-based windows can still be displayed, but new tool windows must be WPF-based.  
  
## Tool Window Essentials  
 To provide a tool window, you must register it with Visual Studio and specify its default size and location. For more information, see [Tool Windows in the Registry](http://msdn.microsoft.com/library/c4bb8add-7148-49e4-a377-01d059fd5524).  
  
 Tool windows are typically created or opened by clicking a menu command. To create a tool window programmatically, see [Opening a Tool Window Programmatically](../misc/opening-a-tool-window-programmatically.md).  
  
 Tool windows are single-instance by default, meaning that only one instance of the tool window can be open at a time. After a single-instance tool window is opened, it remains open until the IDE is closed. When you click the close button on a single-instance tool window, only its visibility changes. You can also create multi-instance tool windows, such that multiple instances of the window can be open simultaneously. See [Creating a Multi-Instance Tool Window](http://msdn.microsoft.com/library/4a7872f1-acc9-4f43-8932-5a526b36adea) for more information.  
  
 Tool windows can be docked, floating, or tabbed in the document frame. The tool window frame is provided by the IDE and is used to control the size, location, docking state, and other persistent properties. The tool window pane displays the contents. The default size and location apply only when the tool window is first opened; after that the tool window state is persisted.  
  
 Tool window panes can host WPF user controls and support toolbars. You can override the <xref:Microsoft.VisualStudio.Shell.WindowPane.Window%2A> property to return the handle of the hosted control.  
  
 Tool windows can be *dynamic* (also known as *auto-visible*). Dynamic tool windows are visible whenever their related UI context applies. The use of auto-visibility can reduce the clutter of windows in the IDE. For more information, see [Opening a Dynamic Tool Window](http://msdn.microsoft.com/library/21547ba7-6e81-44df-9277-265bf34f877a).  
  
 VSPackages are not the only way to create a tool window. Add-ins can create a tool window by using the Visual Studio Automation model. For more information, see [How to: Create and Control Tool Windows](http://msdn.microsoft.com/library/15984015-b1a3-4368-9f17-756833cec969).  
  
## See Also  
 [Tool Windows](../misc/extending-tool-windows.md)   
 [Document Windows](http://msdn.microsoft.com/library/50081d48-987f-43db-8bf9-51b7cf76e9c0)   
 [Adding Search to a Tool Window](http://msdn.microsoft.com/library/f78c4892-8060-49c4-8ecd-4360f1b4d133)