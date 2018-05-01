---
title: "Compiler Error CS1654 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1654"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1654"
ms.assetid: 471c1298-1908-449d-b765-8dc3cd81a11d
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1654
Cannot modify members of 'variable' because it is a 'read-only variable type'  
  
 This error occurs when you try to modify members of a variable which is read-only because it is in a special construct.  
  
 One common area that this occurs is within [foreach](http://msdn.microsoft.com/library/5a9c5ddc-5fd3-457a-9bb6-9abffcd874ec) loops. It is a compile-time error to modify the value of the collection elements. Therefore, you cannot make any modifications to elements that are [value types](http://msdn.microsoft.com/library/471eb994-2958-49d5-a6be-19b4313f80a3), including [structs](http://msdn.microsoft.com/library/b7cf4ff2-0eb7-4e5c-93d5-b2196b4f5d89). In a collection whose elements are [reference types](http://msdn.microsoft.com/library/801cf030-6e2d-4a0d-9daf-1431b0c31f47), you can modify accessible members of each element, but any try to add or remove or replace complete elements will generate [Compiler Error CS1656](http://msdn.microsoft.com/library/b5463a12-d685-4dae-9f88-08383e271b7a).  
  
## Example  
 The following example generates error CS1654 because `Book` is a `struct`. To fix the error, change the `struct` to a [class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690).  
  
```  
using System.Collections.Generic;  
using System.Text;  
  
namespace CS1654  
{  
  
    struct Book  
    {  
        public string Title;  
        public string Author;  
        public double Price;  
        public Book(string t, string a, double p)  
        {  
            Title=t;  
            Author=a;  
            Price=p;  
  
        }  
    }  
  
    class Program  
    {  
        List<Book> list;  
        static void Main(string[] args)  
        {  
             //Use a collection initializer to initialize the list  
            Program prog = new Program();  
            prog.list = new List<Book>();  
            prog.list.Add(new Book ("The C# Programming Language",  
                                    "Hejlsberg, Wiltamuth, Golde",  
                                     29.95));  
            prog.list.Add(new Book ("The C++ Programming Language",  
                                    "Stroustrup",  
                                     29.95));  
            prog.list.Add(new Book ("The C Programming Language",  
                                    "Kernighan, Ritchie",  
                                    29.95));  
            foreach(Book b in prog.list)  
            {  
                //Compile error if Book is a struct  
                //Make Book a class to modify its members  
                b.Price +=9.95; // CS1654  
            }  
  
        }  
    }  
}  
  
```