---
title: "Common Dialog Classes"
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
ms.assetid: 5c4f6443-896c-4b05-a7df-8169fdadc71d
caps.latest.revision: 7
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
# Common Dialog Classes
In addition to class [CDialog](../VS_visualcpp/CDialog-Class.md), MFC supplies several classes derived from `CDialog` that encapsulate commonly used dialog boxes, as shown in the following table. The dialog boxes encapsulated are called the "common dialog boxes" and are part of the Windows common dialog library (COMMDLG.DLL). The dialog-template resources and code for these classes are provided in the Windows common dialog boxes that are part of Windows versions 3.1 and later.  
  
### Common Dialog Classes  
  
|Derived dialog class|Purpose|  
|--------------------------|-------------|  
|[CColorDialog](../VS_visualcpp/CColorDialog-Class.md)|Lets user select colors.|  
|[CFileDialog](../VS_visualcpp/CFileDialog-Class.md)|Lets user select a filename to open or to save.|  
|[CFindReplaceDialog](../VS_visualcpp/CFindReplaceDialog-Class.md)|Lets user initiate a find or replace operation in a text file.|  
|[CFontDialog](../VS_visualcpp/CFontDialog-Class.md)|Lets user specify a font.|  
|[CPrintDialog](../VS_visualcpp/CPrintDialog-Class.md)|Lets user specify information for a print job.|  
|[CPrintDialogEx](../VS_visualcpp/CPrintDialogEx-Class.md)|Windows 2000 print property sheet.|  
  
 For more information about the common dialog classes, see the individual class names in the *MFC Reference*. MFC also supplies a number of standard dialog classes used for OLE. For information about these classes, see the base class, [COleDialog](../VS_visualcpp/COleDialog-Class.md), in the *MFC Reference*.  
  
 Three other classes in MFC have dialog-like characteristics. For information about classes [CFormView](../VS_visualcpp/CFormView-Class.md), [CRecordView](../VS_visualcpp/CRecordView-Class.md), and [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md), see the classes in the *MFC Reference*. For information about class [CDialogBar](../VS_visualcpp/CDialogBar-Class.md), see [Dialog Bars](../VS_visualcpp/Dialog-Bars.md).  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)   
 [Dialog Boxes in OLE](../VS_visualcpp/Dialog-Boxes-in-OLE.md)