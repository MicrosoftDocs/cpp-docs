---
title: "Extending Modal Dialog Boxes | Microsoft Docs"
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
  - "modal dialog boxes in Visual Studio extensions"
  - "Visual Studio extensions, modal dialog boxes"
ms.assetid: 478743dc-9fd9-46d7-9739-859fb8841a4f
caps.latest.revision: 11
manager: "douge"
---
# Extending Modal Dialog Boxes
To guarantee functional and visual compatibility with Visual Studio, create modal dialog boxes for Visual Studio extensions by deriving dialog box windows from the <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow?displayProperty=fullName> object. Dialog boxes derived in this manner can also provide additional functionality; for example, you can set F1 Help targets and enable minimize and maximize on the window.  
  
## Creating Modal Dialog Boxes  
  
1.  In your project, add a reference to System.XAML.  
  
2.  In **Solution Explorer**, right-click the project, click **Add**, and then click **Window**.  
  
3.  Name the window, and then click **Add**.  
  
     An empty XAML window appears in the designer.  
  
4.  In the top-level `Window` element, add a namespace declaration for <xref:Microsoft.VisualStudio.PlatformUI>, and change the `Window` element to a <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow?displayProperty=fullName> element, as shown in the following example.  
  
     [!code-xml[VSModalDialog#02](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/mymodaldialog.xaml#02)]  
  
5.  Add buttons, labels, and other controls from the **Toolbox**, type the text labels, and adjust the appearance of the dialog box.  
  
6.  Switch to code view.  
  
7.  In the class definition, set the class to inherit from <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow>. (By default, the class inherits from <xref:System.Windows.Window?displayProperty=fullName>.)  
  
8.  Add event handlers for buttons and other controls.  
  
#### To add F1 Help to a modal dialog box  
  
1.  To the constructor, add a parameter that takes a string as its argument and set the constructor to inherit from the base constructor by using the same parameter, as shown in the following example.  
  
     [!code-csharp[VSModalDialog#12](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/mymodaldialog.xaml.cs#12)]  
  
     This constructor sets the <xref:Microsoft.VisualStudio.PlatformUI.DialogWindowBase.HasHelpButton%2A> property to `true` and enables the received string to be used as a keyword when a user presses F1 or clicks the **Help** button.  
  
#### To add Minimize and Maximize buttons to a modal dialog box  
  
1.  In the constructor function, set the <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow.hasMinimizeButton%2A> and <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow.hasHMaximizeButton%2A> properties to `true`, as shown in the following example.  
  
     [!code-csharp[VSModalDialog#13](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/mymodaldialog.xaml.cs#13)]  
  
    > [!WARNING]
    >  When **Minimize** and **Maximize** buttons are shown, the **Help** button is hidden, even if the <xref:Microsoft.VisualStudio.PlatformUI.DialogWindowBase.HasHelpButton%2A> property is set to `true`.  
  
## Example  
 The following example shows a modal dialog box that has two constructors. The first constructor takes an F1 keyword as an argument and displays a **Help** button. The second constructor takes no arguments, but displays **Minimize** and **Maximize** buttons. When you click the **Yes** button, a second instance of the dialog box is invoked and has Help enabled.  
  
 [!code-xml[VSModalDialog#01](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/mymodaldialog.xaml#01)]  
  
 [!code-csharp[VSModalDialog#11](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/mymodaldialog.xaml.cs#11)]  
  
 The following code invokes the dialog box from an event handler.  
  
 [!code-csharp[VSModalDialog#21](../snippets/csharp/VS_Snippets_VSSDK/vsmodaldialog/cs/vsmodaldialogpackage.cs#21)]  
  
## See Also  
 [Creating and Managing Modal Dialog Boxes](http://msdn.microsoft.com/library/491bc0de-7dba-478c-a76b-923440e090f3)