---
title: "Troubleshooting Exceptions: System.ArgumentException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "ArgumentException exception"
  - "System.ArgumentException exception"
ms.assetid: d8052e62-bc73-4828-87e9-a84ef2a39a5b
caps.latest.revision: 14
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Troubleshooting Exceptions: System.ArgumentException
An \<xref:System.ArgumentException> exception is thrown when at least one of the arguments provided to a method does not meet the specifications of the parameters of the method.  
  
 In the following example, the exception is thrown when the argument sent to method `DivideByTwo` is not an even number.  
  
```vb#  
Module Module1  
  
    Sub Main()  
  
        ' ArgumentException is not thrown in DivideByTwo because 10 is   
        ' an even number.  
        Console.WriteLine("10 divided by 2 is {0}", DivideByTwo(10))  
        Try  
            ' ArgumentException is thrown in DivideByTwo because 7 is   
            ' not an even number.  
            Console.WriteLine("7 divided by 2 is {0}", DivideByTwo(7))  
        Catch argEx As ArgumentException  
            ' Tell the user which problem is encountered.  
            Console.WriteLine("7 cannot be evenly divided by 2.")  
            Console.WriteLine("Exception message: " & argEx.Message)  
        End Try  
        ' Uncomment the next statement to see what happens if you call   
        ' DivideByTwo directly.  
        'Console.WriteLine(DivideByTwo(7))  
  
    End Sub  
  
    Function DivideByTwo(ByVal num As Integer) As Integer  
  
        ' If num is an odd number, throw an ArgumentException. The  
        ' ArgumentException class provides a number of constructors  
        ' that you can choose from.  
        If num Mod 2 = 1 Then  
            Throw New ArgumentException("Argument for num must be" & _  
                " an even number.")  
        End If  
  
        ' Value of num is even, so return half of its value.  
        Return num / 2  
  
    End Function  
  
End Module  
```  
  
 All instances of the `ArgumentException` class should include information that specifies which argument is not valid, and what the range of acceptable values is. If a more precise exception, such as \<xref:System.ArgumentNullException> or \<xref:System.ArgumentOutOfRangeException>, accurately describes the situation, it should be used instead of `ArgumentException`.  
  
 For more information about this exception, including examples in other languages, see \<xref:System.ArgumentException>. For a list of additional constructors, see \<xref:System.ArgumentException.#ctor*>.  
  
## See Also  
 \<xref:System.ArgumentException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)