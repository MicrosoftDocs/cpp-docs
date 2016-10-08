---
title: "Hosting a Windows Form User Control in an MFC Dialog Box"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
caps.latest.revision: 14
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
# Hosting a Windows Form User Control in an MFC Dialog Box
MFC hosts a Windows Forms control as a special kind of ActiveX control and communicates with the control by using ActiveX interfaces, and properties and methods of the <xref:System.Windows.Forms.Control?qualifyHint=False> class. We recommend that you use .NET Framework properties and methods to operate on the control.  
  
 For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
> [!NOTE]
>  In the current release, a `CDialogBar` object cannot host Windows Forms controls.  
  
## In This Section  
 [How to: Create the User Control and Host in a Dialog Box](../VS_visualcpp/How-to--Create-the-User-Control-and-Host-in-a-Dialog-Box.md)  
  
 [How to: Do DDX/DDV Data Binding with Windows Forms](../VS_visualcpp/How-to--Do-DDX-DDV-Data-Binding-with-Windows-Forms.md)  
  
 [How to: Sink Windows Forms Events from Native C++ Classes](../VS_visualcpp/How-to--Sink-Windows-Forms-Events-from-Native-C---Classes.md)  
  
## Reference  
 [CWinFormsControl Class](../VS_visualcpp/CWinFormsControl-Class.md) &#124; [CDialog Class](../VS_visualcpp/CDialog-Class.md) &#124; [CWnd Class](../VS_visualcpp/CWnd-Class.md) &#124; <xref:System.Windows.Forms.Control?qualifyHint=False>  
  
## See Also  
 [Using a Windows Form User Control in MFC](../VS_visualcpp/Using-a-Windows-Form-User-Control-in-MFC.md)   
 [Windows Forms/MFC Programming Differences](../VS_visualcpp/Windows-Forms-MFC-Programming-Differences.md)   
 [Hosting a Windows Forms User Control as an MFC View](../VS_visualcpp/Hosting-a-Windows-Forms-User-Control-as-an-MFC-View.md)   
 [Hosting a Windows Form User Control as an MFC Dialog Box](../VS_visualcpp/Hosting-a-Windows-Form-User-Control-as-an-MFC-Dialog-Box.md)