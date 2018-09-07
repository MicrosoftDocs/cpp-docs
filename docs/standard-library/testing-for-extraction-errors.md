---
title: "Testing for Extraction Errors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["extraction errors"]
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Testing for Extraction Errors

Output error processing functions, discussed in [Error Processing Functions](../standard-library/output-file-stream-member-functions.md), apply to input streams. Testing for errors during extraction is important. Consider this statement:

```cpp
cin>> n;
```

If `n` is a signed integer, a value greater than 32,767 (the maximum allowed value, or MAX_INT) sets the stream's `fail` bit, and the `cin` object becomes unusable. All subsequent extractions result in an immediate return with no value stored.

## See also

[Input Streams](../standard-library/input-streams.md)<br/>
