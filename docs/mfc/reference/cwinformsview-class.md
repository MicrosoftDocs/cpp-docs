---
title: "CWinFormsView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinFormsView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], Windows Forms support"
  - "CWinFormsView class"
  - "Windows Forms [C++], MFC support"
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
caps.latest.revision: 26
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
# CWinFormsView Class
Provides generic functionality for hosting of a Windows Forms control as an MFC view.  
  
## Syntax  
  
```  
class CWinFormsView : public CView;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsView::CWinFormsView](#cwinformsview__cwinformsview)|Constructs a `CWinFormsView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsView::GetControl](#cwinformsview__getcontrol)|Retrieves a pointer to the Windows Forms control.|  
  
### Public Operators  
  
|Name||  
|----------|-|  
|[CWinFormsView::operator Control^](#cwinformsview__operator_control)|Casts a type as a pointer to a Windows Forms control.|  
  
## Remarks  
 MFC uses the `CWinFormsView` class to host a .NET Framework Windows Forms control within an MFC view. The control is a child of the native view and occupies the entire client area of the MFC view. The result is similar to a `CFormView` view, allowing you to take advantage of the Windows Forms designer and run time to create rich form-based views.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
> [!NOTE]
>  MFC Windows Forms integration works only in projects which link dynamically with MFC (projects in which AFXDLL is defined).  
  
> [!NOTE]
>  CWinFormsView does not support the MFC splitter window ( [CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)). Currently only the Windows Forms Splitter control is supported.  
  
## Requirements  
 **Header:** afxwinforms.h  
  
##  <a name="cwinformsview__cwinformsview"></a>  CWinFormsView::CWinFormsView  
 Constructs a `CWinFormsView` object.  
  
```  
 
CWinFormsView(
System::Type^ pManagedViewType);
```  
  
### Parameters  
 `pManagedViewType`  
 A pointer to the data type of the Windows Forms user control. For more information, see <xref:System.TypequalifyHint%3DTrue%26autoUpgrade%3DTrue>.  
  
### Example  
 In the following example, the `CUserView` class inherits from `CWinFormsView` and passes the type of `UserControl1` to the `CWinFormsView` constructor. `UserControl1` is a custom-built control in ControlLibrary1.dll.  
  
 [!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]  
  
 [!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]  
  
##  <a name="cwinformsview__getcontrol"></a>  CWinFormsView::GetControl  
 Retrieves a pointer to the Windows Forms control.  
  
```  
System::Windows::Forms::Control^ GetControl() const;

 
```  
  
### Return Value  
 A pointer to a <xref:System.Windows.Forms.ControlqualifyHint%3DTrue%26autoUpgrade%3DTrue> object.  
  
### Remarks  
 For an example of how to use Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="cwinformsview__operator_control"></a>  CWinFormsView::operator Control^  
 Casts a type as a pointer to a Windows Forms control.  
  
```  
operator System::Windows::Forms::Control^() const;

 
```  
  
### Remarks  
 This operator allows you to pass a `CWinFormsView` view to functions that accept a pointer to a Windows Forms control of type <xref:System.Windows.Forms.ControlqualifyHint%3DTrue%26autoUpgrade%3DTrue>.  
  
### Example  
  See [CWinFormsView::GetControl](#cwinformsview__getcontrol).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWinFormsControl Class](../../mfc/reference/cwinformscontrol-class.md)   
 [CWinFormsDialog Class](../../mfc/reference/cwinformsdialog-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)
