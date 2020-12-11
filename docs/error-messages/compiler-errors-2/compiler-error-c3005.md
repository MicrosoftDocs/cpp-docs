---
description: "Learn more about: Compiler Error C3005"
title: "Compiler Error C3005"
ms.date: "11/04/2016"
f1_keywords: ["C3005"]
helpviewer_keywords: ["C3005"]
ms.assetid: 30bad565-e79f-4c3f-82cb-a74bd0baab8f
---
# Compiler Error C3005

'error_text' : unexpected token encountered on OpenMP 'directive' directive

An OpenMP directive was ill formed.

The following sample generates C3005:

```c
// C3005.c
// compile with: /openmp
int main()
{
   #pragma omp parallel + for   // C3005
}
```

C3005 can also occur if you put an open brace on the same line as the pragma.

```c
// C3005b.c
// compile with: /openmp
int main() {
   #pragma omp parallel {   // C3005 put open brace on next line
   lbl2:;
   }
   goto lbl2;
}
```
