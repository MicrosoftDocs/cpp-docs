---
description: "Learn more about: Servers: Server Items"
title: "Servers: Server Items"
ms.date: "11/04/2016"
helpviewer_keywords: ["server items, implementing", "servers [MFC], server items", "architecture [MFC], server-item", "server items", "OLE server applications [MFC], server items"]
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
---
# Servers: Server Items

When a container launches a server so that a user can edit an embedded or linked OLE item, the server application creates a "server item." The server item, which is an object of a class derived from `COleServerItem`, provides an interface between the server document and the container application.

The `COleServerItem` class defines several overridable member functions that are called by OLE, usually in response to requests from the container. Server items can represent part of the server document or the entire document. When an OLE item is embedded in the container document, the server item represents the entire server document. When the OLE item is linked, the server item can represent a part of the server document or the whole document, depending on whether the link is to a part or to the whole.

In the [HIERSVR](../overview/visual-cpp-samples.md) sample, for example, the server-item class, `CServerItem`, has a member that is a pointer to an object of the class `CServerNode`. The `CServerNode` object is a node in the HIERSVR application's document, which is a tree. When the `CServerNode` object is the root node, the `CServerItem` object represents the whole document. When the `CServerNode` object is a child node, the `CServerItem` object represents a part of the document. See the MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md) for an example of this interaction.

## <a name="_core_implementing_server_items"></a> Implementing Server Items

If you use the application wizard to produce "starter" code for your application, all you have to do to include server items in your starter code is to choose one of the server options from the OLE Options page. If you are adding server items to an existing application, perform the following steps:

#### To implement a server item

1. Derive a class from `COleServerItem`.

1. In your derived class, override the `OnDraw` member function.

   The framework calls `OnDraw` to render the OLE item into a metafile. The container application uses this metafile to render the item. Your application's view class also has an `OnDraw` member function, which is used to render the item when the server application is active.

1. Implement an override of `OnGetEmbeddedItem` for your server-document class. For further information, see the article [Servers: Implementing Server Documents](../mfc/servers-implementing-server-documents.md) and the MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md).

1. Implement your server-item class's `OnGetExtent` member function. The framework calls this function to retrieve the size of the item. The default implementation does nothing.

## <a name="_core_a_tip_for_server.2d.item_architecture"></a> A Tip for Server-Item Architecture

As noted in [Implementing Server Items](#_core_implementing_server_items), server applications must be able to render items both in the server's view and in a metafile used by the container application. In the Microsoft Foundation Class Library's application architecture, the view class's `OnDraw` member function renders the item when it is being edited (see [CView::OnDraw](../mfc/reference/cview-class.md#ondraw) in the *Class Library Reference*). The server item's `OnDraw` renders the item into a metafile in all other cases (see [COleServerItem::OnDraw](../mfc/reference/coleserveritem-class.md#ondraw)).

You can avoid duplication of code by writing helper functions in your server-document class and calling them from the `OnDraw` functions in your view and server-item classes. The MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md) uses this strategy: the functions `CServerView::OnDraw` and `CServerItem::OnDraw` both call `CServerDoc::DrawTree` to render the item.

The view and the item both have `OnDraw` member functions because they draw under different conditions. The view must take into account such factors as zooming, selection size and extent, clipping, and user-interface elements such as scroll bars. The server item, on the other hand, always draws the entire OLE object.

For more information, see [CView::OnDraw](../mfc/reference/cview-class.md#ondraw), [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerItem::OnDraw](../mfc/reference/coleserveritem-class.md#ondraw), and [COleServerDoc::OnGetEmbeddedItem](../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) in the *Class Library Reference*.

## See also

[Servers](../mfc/servers.md)
