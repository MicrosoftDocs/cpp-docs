---
title: "Hosting a Windows Form User Control in an MFC Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], Windows Forms support"
  - "hosting Windows Forms control [C++]"
  - "Windows Forms [C++], MFC support"
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
caps.latest.revision: 14
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
# Hosting a Windows Form User Control in an MFC Dialog Box
MFC hosts a Windows Forms control as a special kind of ActiveX control and communicates with the control by using ActiveX interfaces, and properties and methods of the <xref:System.Windows.Forms.Control> class. We recommend that you use .NET Framework properties and methods to operate on the control.  
  
 For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
> [!NOTE]
>  In the current release, a `CDialogBar` object cannot host Windows Forms controls.  
  
## In This Section  
 [How to: Create the User Control and Host in a Dialog Box](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)  
  
 [How to: Do DDX/DDV Data Binding with Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)  
  
 [How to: Sink Windows Forms Events from Native C++ Classes](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)  
  
## Reference  
 [CWinFormsControl Class](../mfc/reference/cwinformscontrol-class.md) &#124; [CDialog Class](../mfc/reference/cdialog-class.md) &#124; [CWnd Class](../mfc/reference/cwnd-class.md) &#124; <xref:System.Windows.Forms.Control>  
  
## See Also  
 [Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Windows Forms/MFC Programming Differences](../dotnet/windows-forms-mfc-programming-differences.md)   
 [Hosting a Windows Forms User Control as an MFC View](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)   
 [Hosting a Windows Form User Control as an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)