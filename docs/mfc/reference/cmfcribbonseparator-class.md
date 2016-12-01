---
title: "CMFCRibbonSeparator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "GetThisClass"
  - "CMFCRibbonSeparator::GetThisClass"
  - "CMFCRibbonSeparator.CreateObject"
  - "CMFCRibbonSeparator::CreateObject"
  - "CMFCRibbonSeparator"
  - "CreateObject"
  - "CMFCRibbonSeparator.GetThisClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonSeparator class"
  - "GetThisClass method"
  - "CreateObject method"
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
caps.latest.revision: 21
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
# CMFCRibbonSeparator Class
Implements the ribbon separator.  
  
## Syntax  
  
```  
class CMFCRibbonSeparator : public CMFCRibbonBaseElement  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator__cmfcribbonseparator)|Constructs a `CMFCRibbonSeparator` object.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCRibbonSeparator::AddToListBox](#cmfcribbonseparator__addtolistbox)|Adds a separator to the **Commands** list in the **Customize** dialog box. (Overrides [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__addtolistbox).)|  
|`CMFCRibbonSeparator::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCRibbonSeparator::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
  
### Protected Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCRibbonSeparator::CopyFrom](#cmfcribbonseparator__copyfrom)|A copy method that sets a separator's member variables from another object.|  
|[CMFCRibbonSeparator::GetRegularSize](#cmfcribbonseparator__getregularsize)|Returns the size of a separator.|  
|[CMFCRibbonSeparator::IsSeparator](#cmfcribbonseparator__isseparator)|Indicates whether this is a separator.|  
|[CMFCRibbonSeparator::IsTabStop](#cmfcribbonseparator__istabstop)|Indicates whether this is a tab stop.|  
|[CMFCRibbonSeparator::OnDraw](#cmfcribbonseparator__ondraw)|Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.|  
|[CMFCRibbonSeparator::OnDrawOnList](#cmfcribbonseparator__ondrawonlist)|Called by the system to draw the separator on the **Commands** list.|  
  
## Remarks  
 A ribbon separator is a vertical or horizontal line that logically separates ribbon elements. A separator can be drawn on the ribbon control, the main application menu, the ribbon status bar, and the Quick Access Toolbar.  
  
 To use a separator in your application, construct the new object and add it to the main application menu as shown here:  
  
```  
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...  
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```  
  
 Call [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#cmfcribbonpanel__addseparator) to add separators to ribbon panels. The separators are allocated and added internally by the `AddSeparator` method.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)  
  
## Requirements  
 **Header:** afxbaseribbonelement.h  
  
##  <a name="cmfcribbonseparator__addtolistbox"></a>  CMFCRibbonSeparator::AddToListBox  
 Adds a separator to the **Commands** list in the **Customize** dialog box.  
  
```  
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,  
    BOOL bDeep);
```  
  
### Parameters  
 [in] `pWndListBox`  
 A pointer to the **Commands** list where the separator is added.  
  
 [in] `bDeep`  
 Ignored.  
  
### Return Value  
 Zero-based index to the string in the list box specified by `pWndListBox`.  
  
##  <a name="cmfcribbonseparator__cmfcribbonseparator"></a>  CMFCRibbonSeparator::CMFCRibbonSeparator  
 Constructs a `CMFCRibbonSeparator` object.  
  
```  
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```  
  
### Parameters  
 [in] `bIsHoriz`  
 If `TRUE`, the separator is horizontal; if `FALSE`, the separator is vertical.  
  
### Remarks  
 Horizontal separators are used in application menus. Vertical separators are used in toolbars.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonSeparator` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]  
  
##  <a name="cmfcribbonseparator__copyfrom"></a>  CMFCRibbonSeparator::CopyFrom  
 A copy method that sets a separator's member variables from another object.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### Parameters  
 [in] `Src`  
 The source ribbon element to copy from.  
  
##  <a name="cmfcribbonseparator__getregularsize"></a>  CMFCRibbonSeparator::GetRegularSize  
 Returns the size of a separator.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device content.  
  
### Return Value  
 The size of the separator on the given device context.  
  
##  <a name="cmfcribbonseparator__isseparator"></a>  CMFCRibbonSeparator::IsSeparator  
 Indicates whether this is a separator.  
  
```  
virtual BOOL IsSeparator() const;

 
```  
  
### Return Value  
 Always `TRUE` for this class.  
  
##  <a name="cmfcribbonseparator__istabstop"></a>  CMFCRibbonSeparator::IsTabStop  
 Indicates whether this is a tab stop.  
  
```  
virtual BOOL IsTabStop() const;

 
```  
  
### Return Value  
 Always `FALSE` for this class.  
  
### Remarks  
 A ribbon separator is not a tab stop.  
  
##  <a name="cmfcribbonseparator__ondraw"></a>  CMFCRibbonSeparator::OnDraw  
 Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
##  <a name="cmfcribbonseparator__ondrawonlist"></a>  CMFCRibbonSeparator::OnDrawOnList  
 Called by the system to draw the separator on the **Commands** list.  
  
```  
virtual void OnDrawOnList(
    CDC* pDC,  
    CString strText,  
    int nTextOffset,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pDC`|A pointer to a device context.|  
|[in] `strText`|Text displayed on the list.|  
|[in] `nTextOffset`|Spacing between the text and the left side of the bounding rectangle.|  
|[in] `rect`|Specifies the bounding rectangle.|  
|[in] `bIsSelected`|Ignored.|  
|[in] `bHighlighted`|Ignored.|  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
