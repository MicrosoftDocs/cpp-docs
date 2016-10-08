---
title: "CDocItem Class"
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
ms.topic: reference
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
caps.latest.revision: 19
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
# CDocItem Class
The base class for document items, which are components of a document's data.  
  
## Syntax  
  
```  
class CDocItem : public CCmdTarget  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDocItem::GetDocument](#cdocitem__getdocument)|Returns the document that contains the item.|  
|[CDocItem::IsBlank](#cdocitem__isblank)|Determines whether the item contains any information.|  
  
## Remarks  
 `CDocItem` objects are used to represent OLE items in both client and server documents.  
  
 For more information, see the article [Containers: Implementing a Container](../VS_visualcpp/Containers--Implementing-a-Container.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 `CDocItem`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="cdocitem__getdocument"></a>  CDocItem::GetDocument  
 Call this function to get the document that contains the item.  
  
```  
CDocument* GetDocument() const;  
```  
  
### Return Value  
 A pointer to the document that contains the item; **NULL**, if the item is not part of a document.  
  
### Remarks  
 This function is overridden in the derived classes [COleClientItem](../VS_visualcpp/COleClientItem-Class.md) and [COleServerItem](../VS_visualcpp/COleServerItem-Class.md), returning a pointer to either a [COleDocument](../VS_visualcpp/COleDocument-Class.md), a [COleLinkingDoc](../VS_visualcpp/COleLinkingDoc-Class.md), or a [COleServerDoc](../VS_visualcpp/COleServerDoc-Class.md) object.  
  
##  <a name="cdocitem__isblank"></a>  CDocItem::IsBlank  
 Called by the framework when default serialization occurs.  
  
```  
virtual BOOL IsBlank() const;  
```  
  
### Return Value  
 Nonzero if the item contains no information; otherwise 0.  
  
### Remarks  
 By default, `CDocItem` objects are not blank. [COleClientItem](../VS_visualcpp/COleClientItem-Class.md) objects are sometimes blank because they derive directly from `CDocItem`. However, [COleServerItem](../VS_visualcpp/COleServerItem-Class.md) objects are always blank. By default, OLE applications containing `COleClientItem` objects that have no x or y extent are serialized. This is done by returning **TRUE** from an override of `IsBlank` when the item has no x or y extent.  
  
 Override this function if you want to implement other actions during serialization.  
  
## See Also  
 [CCmdTarget Class](../VS_visualcpp/CCmdTarget-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [COleDocument Class](../VS_visualcpp/COleDocument-Class.md)   
 [COleServerItem Class](../VS_visualcpp/COleServerItem-Class.md)   
 [COleClientItem Class](../VS_visualcpp/COleClientItem-Class.md)