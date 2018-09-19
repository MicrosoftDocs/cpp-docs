---
title: "2.5 Combined Parallel Work-sharing Constructs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 45936e5a-c62a-4eea-a8f4-232210c9d0c8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.5 Combined Parallel Work-sharing Constructs

Combined parallel work-sharing constructs are shortcuts for specifying a parallel region that contains only one work-sharing construct. The semantics of these directives are identical to that of explicitly specifying a **parallel** directive followed by a single work-sharing construct.

The following sections describe the combined parallel work-sharing constructs:

- the **parallel for** directive.

- the **parallel sections** directive.