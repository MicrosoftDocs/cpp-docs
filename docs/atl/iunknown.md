---
description: "Learn more about: IUnknown"
title: "IUnknown"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["COM interfaces, base interface", "IUnknown interface"]
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
---
# IUnknown

[IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) is the base interface of every other COM interface.  This interface defines three methods: [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)), [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) allows an interface user to ask the object for a pointer to another of its interfaces. [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) implement reference counting on the interface.

## See also

[Introduction to COM](../atl/introduction-to-com.md)<br/>
[IUnknown and Interface Inheritance](/windows/win32/com/iunknown-and-interface-inheritance)
