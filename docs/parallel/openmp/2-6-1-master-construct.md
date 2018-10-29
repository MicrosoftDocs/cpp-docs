---
title: "2.6.1 master Construct"
ms.date: "11/04/2016"
ms.assetid: c092064b-ea57-4d4e-9c99-a004d65656fe
---
# 2.6.1 master Construct

The **master** directive identifies a construct that specifies a structured block that is executed by the master thread of the team. The syntax of the **master** directive is as follows:

```
#pragma omp master new-linestructured-block
```

Other threads in the team do not execute the associated structured block. There is no implied barrier either on entry to or exit from the master construct.