---
description: "Learn more about: OLE Background: Linking and Embedding"
title: "OLE Background: Linking and Embedding"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE embedded items [MFC]", "item types [MFC], defined", "item types [MFC]", "OLE [MFC], linked items", "linked items (OLE) [MFC]", "embedded objects [MFC]", "OLE items [MFC], types"]
ms.assetid: 11107711-eb96-4099-8f5c-7910bb3ecb75
---
# OLE Background: Linking and Embedding

Using the Paste command in a container application can create an embedded component, or embedded item. The source data for an embedded item is stored as part of the OLE document that contains it. In this way, a document file for a word processor document can contain text and also can contain bitmaps, graphs, formulas, or any other type of data.

OLE provides another way to incorporate data from another application: creating a linked component, or linked item, or a link. The steps for creating a linked item are similar to those for creating an embedded item, except that you use the Paste Link command instead of the Paste command. Unlike an embedded component, a linked component stores a path to the original data, which is often in a separate file.

For example, if you are working in a word processor document and create a linked item to some spreadsheet cells, the data for the linked item is stored in the original spreadsheet document. The word processor document contains only the information specifying where the item can be found, that is, it contains a link to the original spreadsheet document. When you double-click the cells, the spreadsheet application is launched and the original spreadsheet document is loaded from where it was stored.

Every OLE item, whether embedded or linked, has a type associated with it based on the application that created it. For example, a Microsoft Paintbrush item is one type of item, and a Microsoft Excel item is another type. Some applications, however, can create more than one item type. For example, Microsoft Excel can create worksheet items, chart items, and macrosheet items. Each of these items can be uniquely identified by the system using a Class Identifier or **CLSID**.

## See also

[OLE Background](ole-background.md)<br/>
[OLE Background: Containers and Servers](ole-background-containers-and-servers.md)<br/>
[Containers: Client Items](containers-client-items.md)<br/>
[Servers: Server Items](servers-server-items.md)
