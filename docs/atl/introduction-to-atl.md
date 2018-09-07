---
title: "Introduction to ATL | Microsoft Docs"
ms.custom: "index-page"
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["COM objects, creating in ATL", "ATL"]
ms.assetid: 77f565e8-c4ec-4a80-af4b-7278fcfe5c98
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Introduction to ATL

ATL is the Active Template Library, a set of template-based C++ classes with which you can easily create small, fast Component Object Model (COM) objects. It has special support for key COM features including: stock implementations of [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown), [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory), [IClassFactory2](/windows/desktop/api/ocidl/nn-ocidl-iclassfactory2), and `IDispatch`; dual interfaces; standard COM enumerator interfaces; connection points; tear-off interfaces; and ActiveX controls.

ATL code can be used to create single-threaded objects, apartment-model objects, free-threaded model objects, or both free-threaded and apartment-model objects.

Topics covered in this section include:

- How a [template library](../atl/using-a-template-library.md) differs from a standard library.

- What you [can and cannot do with ATL](../atl/scope-of-atl.md).

- [Recommendations for choosing between ATL and MFC](../atl/recommendations-for-choosing-between-atl-and-mfc.md).

## See Also

[Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)

