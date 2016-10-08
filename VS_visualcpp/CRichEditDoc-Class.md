---
title: "CRichEditDoc Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: c936ec18-d516-49d4-b7fb-c9aa0229eddc
caps.latest.revision: 20
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
# CRichEditDoc Class
With [CRichEditView](../VS_visualcpp/CRichEditView-Class.md) and [CRichEditCntrItem](../VS_visualcpp/CRichEditCntrItem-Class.md), provides the functionality of the rich edit control within the context of MFC's document view architecture.  
  
## Syntax  
  
```  
class CRichEditDoc : public COleServerDoc  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditDoc::CreateClientItem](#cricheditdoc__createclientitem)|Called to perform cleanup of the document.|  
|[CRichEditDoc::GetStreamFormat](#cricheditdoc__getstreamformat)|Indicates whether stream input and output should include formatting information.|  
|[CRichEditDoc::GetView](#cricheditdoc__getview)|Retrieves the asssociated [CRichEditView](../VS_visualcpp/CRichEditView-Class.md) object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditDoc::m_bRTF](#cricheditdoc__m_brtf)|Indicates whether stream I/O should include formatting.|  
  
## Remarks  
 A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.  
  
 `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of client items which are in the view. `CRichEditCntrItem` provides container-side access to the OLE client items.  
  
 This Windows Common control (and therefore the [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md) and related classes) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.  
  
 For an example of using a rich edit document in an MFC application, see the [WORDPAD](../VS_visualcpp/Visual-C---Samples.md) sample application.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CDocument](../VS_visualcpp/CDocument-Class.md)  
  
 [COleDocument](../VS_visualcpp/COleDocument-Class.md)  
  
 [COleLinkingDoc](../VS_visualcpp/COleLinkingDoc-Class.md)  
  
 [COleServerDoc](../VS_visualcpp/COleServerDoc-Class.md)  
  
 `CRichEditDoc`  
  
## Requirements  
 **Header:** afxrich.h  
  
##  <a name="cricheditdoc__createclientitem"></a>  CRichEditDoc::CreateClientItem  
 Call this function to create a `CRichEditCntrItem` object and add it to this document.  
  
```  
virtual CRichEditCntrItem* CreateClientItem( REOBJECT* preo = NULL  ) const = 0;  
```  
  
### Parameters  
 *preo*  
 Pointer to an                                 [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure which describes an OLE item. The new `CRichEditCntrItem` object is constructed around this OLE item. If                                 *preo* is **NULL**, the new client item is empty.  
  
### Return Value  
 Pointer to a new [CRichEditCntrItem](../VS_visualcpp/CRichEditCntrItem-Class.md) object which has been added to this document.  
  
### Remarks  
 This function does not perform any OLE initialization.  
  
 For more information, see the                         [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure in the Windows SDK.  
  
##  <a name="cricheditdoc__getstreamformat"></a>  CRichEditDoc::GetStreamFormat  
 Call this function to determine the text format for streaming the contents of the rich edit.  
  
```  
int GetStreamFormat() const;  
```  
  
### Return Value  
 One of the following flags:  
  
-   `SF_TEXT` Indicates that the rich edit control does not maintain formatting information.  
  
-   `SF_RTF` Indicates that the rich edit control does maintain formatting information.  
  
### Remarks  
 The return value is based on the [m_bRTF](#cricheditdoc__m_brtf) data member. This function returns `SF_RTF` if `m_bRTF` is **TRUE**; otherwise, `SF_TEXT`.  
  
##  <a name="cricheditdoc__getview"></a>  CRichEditDoc::GetView  
 Call this function to access the [CRichEditView](../VS_visualcpp/CRichEditView-Class.md) object associated with this `CRichEditDoc` object.  
  
```  
virtual CRichEditView* GetView() const;  
```  
  
### Return Value  
 Pointer to the `CRichEditView` object associated with the document.  
  
### Remarks  
 The text and formatting information are contained within the `CRichEditView` object. The `CRichEditDoc` object maintains the OLE items for serialization. There should be only one `CRichEditView` for each `CRichEditDoc`.  
  
##  <a name="cricheditdoc__m_brtf"></a>  CRichEditDoc::m_bRTF  
 When **TRUE**, indicates that [CRichEditCtrl::StreamIn](../VS_visualcpp/CRichEditCtrl-Class.md#cricheditctrl__streamin) and [CRichEditCtrl::StreamOut](../VS_visualcpp/CRichEditCtrl-Class.md#cricheditctrl__streamout) should store paragraph and character-formatting characteristics.  
  
```  
BOOL m_bRTF;  
```  
  
## See Also  
 [MFC Sample WORDPAD](../VS_visualcpp/Visual-C---Samples.md)   
 [COleServerDoc Class](../VS_visualcpp/COleServerDoc-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CRichEditView Class](../VS_visualcpp/CRichEditView-Class.md)   
 [CRichEditCntrItem Class](../VS_visualcpp/CRichEditCntrItem-Class.md)   
 [COleDocument Class](../VS_visualcpp/COleDocument-Class.md)   
 [CRichEditCtrl Class](../VS_visualcpp/CRichEditCtrl-Class.md)