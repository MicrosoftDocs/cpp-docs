---
title: "2.6.2 critical Construct"
ms.date: "11/04/2016"
ms.assetid: c46ecd00-b4a2-4a5e-ba92-288c329e773a
---
# 2.6.2 critical Construct

The **critical** directive identifies a construct that restricts execution of the associated structured block to a single thread at a time. The syntax of the **critical** directive is as follows:

```
#pragma omp critical [(name)]  new-linestructured-block
```

An optional *name* may be used to identify the critical region. Identifiers used to identify a critical region have external linkage and are in a name space which is separate from the name spaces used by labels, tags, members, and ordinary identifiers.

A thread waits at the beginning of a critical region until no other thread is executing a critical region (anywhere in the program) with the same name. All unnamed **critical** directives map to the same unspecified name.