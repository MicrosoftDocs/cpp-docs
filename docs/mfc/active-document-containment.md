---
description: "Learn more about: Active Document Containment"
title: "Active Document Containment"
ms.date: "11/04/2016"
helpviewer_keywords: ["active documents [MFC], containers", "containers [MFC], active document", "MFC, COM support", "active document containers [MFC], about active document containers", "MFC COM, active document containment"]
ms.assetid: b8dfa74b-75ce-47df-b75e-fc87b7f7d687
---
# Active Document Containment

Active document containment is a technology that provides a single frame in which to work with documents, instead of forcing you to create and use multiple application frames for each document type. It differs from basic OLE technology in that OLE works with embedded objects within a compound document in which only a single piece of content can be active. With active document containment, you activate an entire document (that is, an entire application, including associated menus, toolbars, and so on) within the context of a single frame.

The active document containment technology was originally developed for Microsoft Office to implement Office Binder. However, the technology is flexible enough to support active document containers other than Office Binder and can support document servers other than Office and Office-compatible applications.

The application that hosts active documents is called an [active document container](active-document-containers.md). Examples of such containers are the Microsoft Office Binder or Microsoft Internet Explorer.

Active document containment is implemented as a set of extensions to OLE documents, the compound document technology of OLE. The extensions are additional interfaces that allow an embeddable, in-place object to represent an entire document instead of a single piece of embedded content. As with OLE documents, active document containment uses a container that provides the display space for active documents, and servers that provide the user interface and manipulation capabilities for the active documents themselves.

An [active document server](active-document-servers.md) is an application (such as Word, Excel, or PowerPoint) that supports one or more active document classes, where each object itself supports the extension interfaces that allow the object to be activated in a suitable container.

An [active document](active-documents.md) (provided from an active document server such as Word or Excel) is essentially a full-scale, conventional document that is embedded as an object within another active document container. Unlike embedded objects, active documents have complete control over their pages, and the full interface of the application (with all its underlying commands and tools) is available to the user to edit them.

An active document is best understood by distinguishing it from a standard OLE embedded object. Following the OLE convention, an embedded object is one that is displayed within the page of the document that owns it, and the document is managed by an OLE container. The container stores the embedded object's data with the rest of the document. However, embedded objects are limited in that they do not control the page on which they appear.

Users of an active document container application can create active documents (called sections in Office Binder) using their favorite applications (provided these applications are active document enabled), yet the users can manage the resulting project as a single entity, which can be uniquely named, saved, printed, and so on. In the same way, a user of an Internet browser can treat the entire network, as well as local file systems, as a single document storage entity with the ability to browse the documents in that storage from a single location.

## Sample Programs

- The [MFCBIND](../overview/visual-cpp-samples.md) sample illustrates the implementation of an active document container application.

## See also

[MFC COM](mfc-com.md)
