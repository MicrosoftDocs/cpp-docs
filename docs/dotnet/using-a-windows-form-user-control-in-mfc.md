---
title: "Using a Windows Form User Control in MFC | Microsoft Docs"
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
  - "interoperability [C++], Windows Forms in MFC"
  - "interoperability [C++], MFC"
  - "interop [C++], Windows Forms in MFC"
  - "interop [C++], MFC"
  - "Windows Forms [C++], MFC support"
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
caps.latest.revision: 19
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
# Using a Windows Form User Control in MFC
Using the MFC Windows Forms support classes, you can host Windows Forms controls within your MFC applications as an ActiveX control within MFC dialog boxes or views. In addition, Windows Forms forms can be hosted as MFC dialog boxes.  
  
 The following sections describe how to:  
  
-   Host a Windows Forms control in an MFC dialog box.  
  
-   Host a Windows Forms user control as an MFC view.  
  
-   Host a Windows Forms form as an MFC dialog box.  
  
> [!NOTE]
>  MFC Windows Forms integration works only in projects that link dynamically with MFC (projects in which AFXDLL is defined).  
  
> [!NOTE]
>  When you build your application using a private (modified) copy of the MFC Windows Forms interfaces DLL (mfcmifc80.dll), it will fail to install in the GAC unless you replace the Microsoft key with your own vendor key. For more information on assembly signing, see [Programming with Assemblies](http://msdn.microsoft.com/Library/25918b15-701d-42c7-95fc-c290d08648d6) and [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 For sample applications using Windows Forms, see [BirthdayPicker Sample: Demonstrates .NET Framework Resources with Windows Forms](http://msdn.microsoft.com/en-us/ac932aed-5502-4667-be29-709bca435317), [Calculator Sample: Windows Forms Pocket Calculator](http://msdn.microsoft.com/en-us/2283b516-3b7e-45f2-80c4-fdcfb366ce25), and [Scribble Sample: MDI Drawing Application](http://msdn.microsoft.com/en-us/f025da3e-659b-4222-b991-554a1b8b2358).  
  
 For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 If your MFC application uses Windows Forms, you need to redistribute mfcmifc90.dll with your application. For more information, see [Redistributing the MFC Library](../ide/redistributing-the-mfc-library.md).  
  
## In This Section  
 [Hosting a Windows Form User Control in an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)  
  
 [Hosting a Windows Forms User Control as an MFC View](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)  
  
 [Hosting a Windows Form User Control as an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)  
  
## Reference  
 [CWinFormsControl Class](../mfc/reference/cwinformscontrol-class.md)  
  
 [CWinFormsDialog Class](../mfc/reference/cwinformsdialog-class.md)  
  
 [CWinFormsView Class](../mfc/reference/cwinformsview-class.md)  
  
 [ICommandSource Interface](../mfc/reference/icommandsource-interface.md)  
  
 [ICommandTarget Interface](../mfc/reference/icommandtarget-interface.md)  
  
 [ICommandUI Interface](../mfc/reference/icommandui-interface.md)  
  
 [IView Interface](../mfc/reference/iview-interface.md)  
  
 [CommandHandler](http://msdn.microsoft.com/Library/22096734-e074-4aca-8523-4b15590109f9)  
  
 [CommandUIHandler](http://msdn.microsoft.com/Library/2da11ecc-20d6-4a53-97fc-08b48f06d71a)  
  
 [DDX_ManagedControl](http://msdn.microsoft.com/Library/61b55a90-c993-478e-9dea-db27fbf0e193)  
  
 [UICheckState](http://msdn.microsoft.com/Library/68d84834-e7f9-4ccb-8126-d492e27073e9)  
  
## Related Sections  
 [Windows Forms](http://msdn.microsoft.com/Library/627df1e9-b254-41af-bbac-9a4f02810c54)  
  
 [Windows Forms Controls](http://msdn.microsoft.com/Library/f050de8f-4ebd-4042-94b8-edf9a1dbd52a)  
  
 [ASP.NET User Controls](http://msdn.microsoft.com/Library/5e601b3d-bb16-4dbe-9e35-7e92a34565ca)  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)   
 [Form Views](../mfc/form-views-mfc.md)