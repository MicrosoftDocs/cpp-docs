---
title: "Compiler Warning (level 4) C4435 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
dev_langs: ["C++"]
ms.assetid: a04524af-2b71-4ff9-9729-d9d1d1904ed7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4435
'class1' : Object layout under /vd2 will change due to virtual base 'class2'  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 Under the default compile option of /vd1, the derived class does not have a `vtordisp` field for the indicated virtual base.  If /vd2 or `#pragma vtordisp(2)` is in effect, a `vtordisp` field will be present, changing the object layout.  This can lead to binary compatibility problems if interacting modules are compiled with different `vtordisp` settings.  
  
## Example  
 The following sample generates C4435.  
  
```cpp  
// C4435.cpp  
// compile with: /c /W4  
#pragma warning(default : 4435)  
class A  
{  
public:  
    virtual ~A() {}  
};  
  
class B : public virtual A  // C4435  
{};  
```  
  
## See Also  
 [vtordisp](../../preprocessor/vtordisp.md)   
 [/vd (Disable Construction Displacements)](../../build/reference/vd-disable-construction-displacements.md)