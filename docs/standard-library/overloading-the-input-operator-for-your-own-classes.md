---
title: "Overloading the &gt;&gt; Operator for Your Own Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["operator>>", "operator>>, overloading for your own classes", "operator >>, overloading for your own classes"]
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Overloading the &gt;&gt; Operator for Your Own Classes

Input streams use the extraction (`>>`) operator for the standard types. You can write similar extraction operators for your own types; your success depends on using white space precisely.

Here is an example of an extraction operator for the `Date` class presented earlier:

```cpp
istream& operator>> (istream& is, Date& dt)
{
    is>> dt.mo>> dt.da>> dt.yr;
    return is;
}
```

## See also

[Input Streams](../standard-library/input-streams.md)<br/>
