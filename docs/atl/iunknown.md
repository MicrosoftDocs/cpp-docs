---
title: "IUnknown | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["COM interfaces, base interface", "IUnknown interface"]
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IUnknown

[IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) is the base interface of every other COM interface.  This interface defines three methods: [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)), [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref), and [Release](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release). [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)) allows an interface user to ask the object for a pointer to another of its interfaces. [AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release) implement reference counting on the interface.

## See Also

[Introduction to COM](../atl/introduction-to-com.md)<br/>
[IUnknown and Interface Inheritance](/windows/desktop/com/iunknown-and-interface-inheritance)

