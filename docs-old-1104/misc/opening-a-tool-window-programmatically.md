---
title: "Opening a Tool Window Programmatically | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "tool windows, creating programmatically"
ms.assetid: 0017441e-7aa3-4a61-9939-57af11d90d97
caps.latest.revision: 16
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Opening a Tool Window Programmatically
Tool windows are typically opened by clicking a command on a menu, or by pressing an equivalent keyboard shortcut. However, you might have to open a tool window programmatically, like the command handler does.  
  
 To open a tool window in the managed VSPackage that provides it, use <xref:Microsoft.VisualStudio.Shell.Package.FindToolWindow*>. To open a tool window in another VSPackage, use <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.FindToolWindow*>. In either case, the tool window is created as required.  
  
 The following code is taken from the C# Reference.ToolWindow sample.  
  
### To open a tool window programmatically  
  
1.  Create the tool window pane, frame, and the VSPackage that implements them. For more information, see [Adding a Tool Window](/visual-studio/extensibility/adding-a-tool-window).  
  
2.  Add the <xref:Microsoft.VisualStudio.Shell.ProvideToolWindowAttribute> to the VSPackage that provides it.  
  
    ```c#  
    [ProvideToolWindow(typeof(PersistedWindowPane), Style = VsDockStyle.Tabbed, Window = "3ae79031-e1bc-11d0-8f78-00a0c9110057")]  
    [ProvideMenuResource(1000, 1)]  
    [MsVsShell.DefaultRegistryRoot(@"Software\Microsoft\VisualStudio\8.0Exp")]  
    [PackageRegistration(UseManagedResourcesOnly = true)]  
    [Guid("01069CDD-95CE-4620-AC21-DDFF6C57F012")] // your package will have a different GUID  
    public class PackageToolWindow : Package  
    {  
    ```  
  
     This registers the tool window PersistedWindowPane to be opened as docked to **Solution Explorer**. For more information, see [Registering a Tool Window](/visual-studio/extensibility/registering-a-tool-window).  
  
3.  Use <xref:Microsoft.VisualStudio.Shell.Package.FindToolWindow*> to find the tool window pane or to create it if it does not already exist.  
  
    ```vb#  
    ' Get the 1 (index 0) and only instance of our tool window.   
    ' If it does not already exist it will get created.   
    Dim pane As MsVsShell.ToolWindowPane = Me.FindToolWindow(GetType(PersistedWindowPane), 0, True)   
    If pane Is Nothing Then   
    End If  
  
    ```  
  
    ```c#  
    // Get the 1 (index 0) and only instance of our tool window.  
    // If it does not already exist it will get created.  
    MsVsShell.ToolWindowPane pane =     this.FindToolWindow(typeof(PersistedWindowPane), 0, true);  
    if (pane == null)  
    {  
    ```  
  
4.  Get the tool window frame from the tool window pane.  
  
    ```vb#  
    Dim frame As IVsWindowFrame = TryCast(pane.Frame, IVsWindowFrame)   
    If frame Is Nothing Then   
    End If  
  
    ```  
  
    ```c#  
    IVsWindowFrame frame = pane.Frame as IVsWindowFrame;  
    if (frame == null)  
    {  
    ```  
  
5.  Show the tool window.  
  
    ```vb#  
    ' Bring the tool window to the front and give it focus   
    ErrorHandler.ThrowOnFailure(frame.Show())  
  
    ```  
  
    ```c#  
    // Bring the tool window to the front and give it focus  
    ErrorHandler.ThrowOnFailure(frame.Show());  
    ```