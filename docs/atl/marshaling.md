---
title: "Marshaling | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["marshaling, COM interop", "marshaling", "COM interfaces, marshaling"]
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Marshaling

The COM technique of marshaling allows interfaces exposed by an object in one process to be used in another process. In marshaling, COM provides code (or uses code provided by the interface implementor) both to pack a method's parameters into a format that can be moved across processes (as well as, across the wire to processes running on other machines) and to unpack those parameters at the other end. Likewise, COM must perform these same steps on the return from the call.

> [!NOTE]
>  Marshaling is typically not necessary when an interface provided by an object is being used in the same process as the object. However, marshaling may be needed between threads.

## See Also

[Introduction to COM](../atl/introduction-to-com.md)   
[Marshaling Details](/windows/desktop/com/marshaling-details)

