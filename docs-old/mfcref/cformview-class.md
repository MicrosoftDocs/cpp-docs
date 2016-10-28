---
title: "CFormView Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CFormView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "views, containing controls"
  - "CFormView class"
  - "form views"
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
caps.latest.revision: 20
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
# CFormView Class
The base class used for form views.  
  
## Syntax  
  
```  
class CFormView : public CScrollView  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFormView::CFormView](#cformview__cformview)|Constructs a `CFormView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFormView::IsInitDlgCompleted](#cformview__isinitdlgcompleted)|Used for synchronization during initialization.|  
  
## Remarks  
 A form view is essentially a view that contains controls. These controls are laid out based on a dialog-template resource. Use `CFormView` if you want forms in your application. These views support scrolling, as needed, using the [CScrollView](../mfcref/cscrollview-class.md) functionality.  
  
 When you are [Creating a Forms-Based Application](../mfcref/creating-a-forms-based-mfc-application.md), you can base its view class on `CFormView`, making it a forms-based application.  
  
 You can also insert new [Form Topics](../mfc/form-views--mfc-.md) into document-view-based applications. Even if your application did not initially support forms, Visual C++ will add this support when you insert a new form.  
  
 The MFC Application Wizard and the Add Class command are the preferred methods for creating forms-based applications. If you need to create a forms-based application without using these methods, see [Creating a Forms-Based Application](../mfcref/creating-a-forms-based-mfc-application.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CView](../mfcref/cview-class.md)  
  
 [CScrollView](../mfcref/cscrollview-class.md)  
  
 `CFormView`  
  
## Requirements  
 **Header:** afxext.h  
  
##  <a name="cformview__cformview"></a>  CFormView::CFormView  
 Constructs a `CFormView` object.  
  
```  
CFormView( LPCTSTR lpszTemplateName );  
  
CFormView( UINT nIDTemplate );  
```  
  
### Parameters  
 `lpszTemplateName`  
 Contains a null-terminated string that is the name of a dialog-template resource.  
  
 `nIDTemplate`  
 Contains the ID number of a dialog-template resource.  
  
### Remarks  
 When you create an object of a type derived from `CFormView`, invoke one of the constructors to create the view object and identify the dialog resource on which the view is based. You can identify the resource either by name (pass a string as the argument to the constructor) or by its ID (pass an unsigned integer as the argument).  
  
 The form-view window and child controls are not created until `CWnd::Create` is called. `CWnd::Create` is called by the framework as part of the document and view creation process, which is driven by the document template.  
  
> [!NOTE]
>  Your derived class                             *must* supply its own constructor. In the constructor, invoke the constructor, `CFormView::CFormView`, with the resource name or ID as an argument as shown in the preceding class overview.  
  
### Example  
 [!code[NVC_MFCDocView#90](../mfc/codesnippet/CPP/cformview-class_1.h)]  
  
 [!code[NVC_MFCDocView#91](../mfc/codesnippet/CPP/cformview-class_2.cpp)]  
  
##  <a name="cformview__isinitdlgcompleted"></a>  CFormView::IsInitDlgCompleted  
 Used by MFC to ensure that initialization is completed before performing other operations.  
  
```  
BOOL IsInitDlgCompleted() const;  
```  
  
### Return Value  
 True if the initialization function for this dialog has completed.  
  
## See Also  
 [MFC Sample SNAPVW](../top/visual-c---samples.md)   
 [MFC Sample VIEWEX](../top/visual-c---samples.md)   
 [CScrollView Class](../mfcref/cscrollview-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CDialog Class](../mfcref/cdialog-class.md)   
 [CScrollView Class](../mfcref/cscrollview-class.md)   
 [CView::OnUpdate](../mfcref/cview-class.md#cview__onupdate)   
 [CView::OnInitialUpdate](../mfcref/cview-class.md#cview__oninitialupdate)   
 [CView::OnPrint](../mfcref/cview-class.md#cview__onprint)   
 [CWnd::UpdateData](../mfcref/cwnd-class.md#cwnd__updatedata)   
 [CScrollView::ResizeParentToFit](../mfcref/cscrollview-class.md#cscrollview__resizeparenttofit)