---
description: "Learn more about: Compiler Warning (level 3) C4635"
title: "Compiler Warning (level 3) C4635"
ms.date: "11/04/2016"
f1_keywords: ["C4635"]
helpviewer_keywords: ["C4635"]
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
---
# Compiler Warning (level 3) C4635

XML document comment target: badly-formed XML: reason

The compiler found some problem with the XML tags.  Fix the problem and recompile

The following sample generates C4635:

```cpp
// C4635.cpp
// compile with: /doc /clr /W3 /c
/// <summary>
/// The contents of the folder have changed.
/// <summary/>   // C4635

// try the following line instead
// /// </summary>
public ref class Test {};
```

Notice that the output for this sample says: **End tag 'member' does not match the start tag 'summary'.**

The problem with this sample is that the end tag for \<summary> is poorly formed, and the compiler does not recognize it as the \<summary> end tag.  The \<member> tag is embedded in the .xdc file by the compiler in every /doc compilation.  So, the problem here is that the end tag \</member>, does not match the previous start tag that the compiler processed (\<summary>.
