---
title: "Servers: Server Items"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "server items, implementing"
  - "servers [C++], server items"
  - "architecture [C++], server-item"
  - "server items"
  - "OLE server applications, server items"
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
caps.latest.revision: 8
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
# Servers: Server Items
When a container launches a server so that a user can edit an embedded or linked OLE item, the server application creates a "server item." The server item, which is an object of a class derived from `COleServerItem`, provides an interface between the server document and the container application.  
  
 The `COleServerItem` class defines several overridable member functions that are called by OLE, usually in response to requests from the container. Server items can represent part of the server document or the entire document. When an OLE item is embedded in the container document, the server item represents the entire server document. When the OLE item is linked, the server item can represent a part of the server document or the whole document, depending on whether the link is to a part or to the whole.  
  
 In the [HIERSVR](../top/visual-c---samples.md) sample, for example, the server-item class, **CServerItem**, has a member that is a pointer to an object of the class **CServerNode**. The **CServerNode** object is a node in the HIERSVR application's document, which is a tree. When the **CServerNode** object is the root node, the **CServerItem** object represents the whole document. When the **CServerNode** object is a child node, the **CServerItem** object represents a part of the document. See the MFC OLE sample [HIERSVR](../top/visual-c---samples.md) for an example of this interaction.  
  
##  <a name="_core_implementing_server_items"></a> Implementing Server Items  
 If you use the application wizard to produce "starter" code for your application, all you have to do to include server items in your starter code is to choose one of the server options from the OLE Options page. If you are adding server items to an existing application, perform the following steps:  
  
#### To implement a server item  
  
1.  Derive a class from `COleServerItem`.  
  
2.  In your derived class, override the `OnDraw` member function.  
  
     The framework calls `OnDraw` to render the OLE item into a metafile. The container application uses this metafile to render the item. Your application's view class also has an `OnDraw` member function, which is used to render the item when the server application is active.  
  
3.  Implement an override of `OnGetEmbeddedItem` for your server-document class. For further information, see the article [Servers: Implementing Server Documents](../mfc/servers--implementing-server-documents.md) and the MFC OLE sample [HIERSVR](../top/visual-c---samples.md).  
  
4.  Implement your server-item class's `OnGetExtent` member function. The framework calls this function to retrieve the size of the item. The default implementation does nothing.  
  
##  <a name="_core_a_tip_for_server.2d.item_architecture"></a> A Tip for Server-Item Architecture  
 As noted in [Implementing Server Items](#_core_implementing_server_items), server applications must be able to render items both in the server's view and in a metafile used by the container application. In the Microsoft Foundation Class Library's application architecture, the view class's `OnDraw` member function renders the item when it is being edited (see [CView::OnDraw](../Topic/CView::OnDraw.md) in the *Class Library Reference*). The server item's `OnDraw` renders the item into a metafile in all other cases (see [COleServerItem::OnDraw](../Topic/COleServerItem::OnDraw.md)).  
  
 You can avoid duplication of code by writing helper functions in your server-document class and calling them from the `OnDraw` functions in your view and server-item classes. The MFC OLE sample [HIERSVR](../top/visual-c---samples.md) uses this strategy: the functions **CServerView::OnDraw** and **CServerItem::OnDraw** both call **CServerDoc::DrawTree** to render the item.  
  
 The view and the item both have `OnDraw` member functions because they draw under different conditions. The view must take into account such factors as zooming, selection size and extent, clipping, and user-interface elements such as scroll bars. The server item, on the other hand, always draws the entire OLE object.  
  
 For more information, see [CView::OnDraw](../Topic/CView::OnDraw.md), [COleServerItem](../mfcref/coleserveritem-class.md), [COleServerItem::OnDraw](../Topic/COleServerItem::OnDraw.md), and [COleServerDoc::OnGetEmbeddedItem](../Topic/COleServerDoc::OnGetEmbeddedItem.md) in the *Class Library Reference*.  
  
## See Also  
 [Servers](../mfc/servers.md)