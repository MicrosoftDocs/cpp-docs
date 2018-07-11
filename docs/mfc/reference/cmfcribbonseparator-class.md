---
title: "CMFCRibbonSeparator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::AddToListBox", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CopyFrom", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::GetRegularSize", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsTabStop", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDraw", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDrawOnList"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCRibbonSeparator [MFC], CMFCRibbonSeparator", "CMFCRibbonSeparator [MFC], AddToListBox", "CMFCRibbonSeparator [MFC], CopyFrom", "CMFCRibbonSeparator [MFC], GetRegularSize", "CMFCRibbonSeparator [MFC], IsSeparator", "CMFCRibbonSeparator [MFC], IsTabStop", "CMFCRibbonSeparator [MFC], OnDraw", "CMFCRibbonSeparator [MFC], OnDrawOnList"]
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Constructs a `CMFCRibbonSeparator` object.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Adds a separator to the **Commands** list in the **Customize** dialog box. (Overrides [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|  
|`CMFCRibbonSeparator::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCRibbonSeparator::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
  
### Protected Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|A copy method that sets a separator's member variables from another object.|  
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Returns the size of a separator.|  
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indicates whether this is a separator.|  
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indicates whether this is a tab stop.|  
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.|  
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Called by the system to draw the separator on the **Commands** list.|  
  
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
Call [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) to add separators to ribbon panels. The separators are allocated and added internally by the `AddSeparator` method.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)  
  
## Requirements  
 **Header:** afxbaseribbonelement.h  
  
##  <a name="addtolistbox"></a>  CMFCRibbonSeparator::AddToListBox  
 Adds a separator to the **Commands** list in the **Customize** dialog box.  
  
```  
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,  
    BOOL bDeep);
```  
  
### Parameters  
 [in] *pWndListBox*  
 A pointer to the **Commands** list where the separator is added.  
  
 [in] *bDeep*  
 Ignored.  
  
### Return Value  
 Zero-based index to the string in the list box specified by *pWndListBox*.  
  
##  <a name="cmfcribbonseparator"></a>  CMFCRibbonSeparator::CMFCRibbonSeparator  
 Constructs a `CMFCRibbonSeparator` object.  
  
```  
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```  
  
### Parameters  
 [in] *bIsHoriz*  
 If TRUE, the separator is horizontal; if FALSE, the separator is vertical.  
  
### Remarks  
 Horizontal separators are used in application menus. Vertical separators are used in toolbars.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonSeparator` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]  
  
##  <a name="copyfrom"></a>  CMFCRibbonSeparator::CopyFrom  
 A copy method that sets a separator's member variables from another object.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### Parameters  
 [in] *Src*  
 The source ribbon element to copy from.  
  
##  <a name="getregularsize"></a>  CMFCRibbonSeparator::GetRegularSize  
 Returns the size of a separator.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] *pDC*  
 A pointer to a device content.  
  
### Return Value  
 The size of the separator on the given device context.  
  
##  <a name="isseparator"></a>  CMFCRibbonSeparator::IsSeparator  
 Indicates whether this is a separator.  
  
```  
virtual BOOL IsSeparator() const;  
```  
  
### Return Value  
 Always TRUE for this class.  
  
##  <a name="istabstop"></a>  CMFCRibbonSeparator::IsTabStop  
 Indicates whether this is a tab stop.  
  
```  
virtual BOOL IsTabStop() const;  
```  
  
### Return Value  
 Always FALSE for this class.  
  
### Remarks  
 A ribbon separator is not a tab stop.  
  
##  <a name="ondraw"></a>  CMFCRibbonSeparator::OnDraw  
 Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] *pDC*  
 A pointer to a device context.  
  
##  <a name="ondrawonlist"></a>  CMFCRibbonSeparator::OnDrawOnList  
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
|[in] *pDC*|A pointer to a device context.|  
|[in] *strText*|Text displayed on the list.|  
|[in] *nTextOffset*|Spacing between the text and the left side of the bounding rectangle.|  
|[in] *rect*|Specifies the bounding rectangle.|  
|[in] *bIsSelected*|Ignored.|  
|[in] *bHighlighted*|Ignored.|  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
