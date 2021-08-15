---
description: "Learn more about: Exceptions: Converting from MFC Exception Macros"
title: "Exceptions: Converting from MFC Exception Macros"
ms.date: "08/27/2018"
helpviewer_keywords: ["converting exceptions [MFC]", "exception objects [MFC]", "conversions [MFC], code written with MFC macros", "keywords [MFC], macros", "macrosv, C++ keywords", "exception objects [MFC], deleting", "CException class [MFC], deleting CException class objects", "exceptions [MFC], converting", "exceptions [MFC], deleting exception objects", "catch blocks [MFC], delimiting", "exception handling [MFC], converting exceptions"]
ms.assetid: bd3ac3b3-f3ce-4fdd-a168-a2cff13ed796
---
# Exceptions: Converting from MFC Exception Macros

This is an advanced topic.

This article explains how to convert existing code written with Microsoft Foundation Class macros — **TRY**, **CATCH**, **THROW**, and so on — to use the C++ exception-handling keywords **`try`**, **`catch`**, and **`throw`**. Topics include:

- [Conversion advantages](#_core_advantages_of_converting)

- [Converting code with exception macros to use C++ exceptions](#_core_doing_the_conversion)

## <a name="_core_advantages_of_converting"></a> Advantages of Converting

You probably do not need to convert existing code, although you should be aware of differences between the macro implementations in MFC version 3.0 and the implementations in earlier versions. These differences and subsequent changes in code behavior are discussed in [Exceptions: Changes to Exception Macros in Version 3.0](exceptions-changes-to-exception-macros-in-version-3-0.md).

The principal advantages of converting are:

- Code that uses the C++ exception-handling keywords compiles to a slightly smaller .EXE or .DLL.

- The C++ exception-handling keywords are more versatile: They can handle exceptions of any data type that can be copied (**`int`**, **`float`**, **`char`**, and so on), whereas the macros handle exceptions only of class `CException` and classes derived from it.

The major difference between the macros and the keywords is that code using the macros "automatically" deletes a caught exception when the exception goes out of scope. Code using the keywords does not, so you must explicitly delete a caught exception. For more information, see the article [Exceptions: Catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

Another difference is syntax. The syntax for macros and keywords differs in three respects:

1. Macro arguments and exception declarations:

   A **CATCH** macro invocation has the following syntax:

   **CATCH(** *exception_class*, *exception_object_pointer_name* **)**

   Notice the comma between the class name and the object pointer name.

   The exception declaration for the **`catch`** keyword uses this syntax:

   **catch(** *exception_type* *exception_name* **)**

   This exception declaration statement indicates the type of exception the catch block handles.

2. Delimitation of catch blocks:

   With the macros, the **CATCH** macro (with its arguments) begins the first catch block; the **AND_CATCH** macro begins subsequent catch blocks, and the **END_CATCH** macro terminates the sequence of catch blocks.

   With the keywords, the **`catch`** keyword (with its exception declaration) begins each catch block. There is no counterpart to the **END_CATCH** macro; the catch block ends with its closing brace.

3. The throw expression:

   The macros use **THROW_LAST** to re-throw the current exception. The **`throw`** keyword, with no argument, has the same effect.

## <a name="_core_doing_the_conversion"></a> Doing the Conversion

#### To convert code using macros to use the C++ exception-handling keywords

1. Locate all occurrences of the MFC macros **TRY**, **CATCH**, **AND_CATCH**, **END_CATCH**, **THROW**, and **THROW_LAST**.

2. Replace or delete all occurrences of the following macros:

   **TRY** (Replace it with **`try`**)

   **CATCH** (Replace it with **`catch`**)

   **AND_CATCH** (Replace it with **`catch`**)

   **END_CATCH** (Delete it)

   **THROW** (Replace it with **`throw`**)

   **THROW_LAST** (Replace it with **`throw`**)

3. Modify the macro arguments so that they form valid exception declarations.

   For example, change

   [!code-cpp[NVC_MFCExceptions#6](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_1.cpp)]

   to

   [!code-cpp[NVC_MFCExceptions#7](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_2.cpp)]

4. Modify the code in the catch blocks so that it deletes exception objects as necessary. For more information, see the article [Exceptions: Catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

Here is an example of exception-handling code using MFC exception macros. Note that because the code in the following example uses the macros, the exception `e` is deleted automatically:

[!code-cpp[NVC_MFCExceptions#8](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_3.cpp)]

The code in the next example uses the C++ exception keywords, so the exception must be explicitly deleted:

[!code-cpp[NVC_MFCExceptions#9](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_4.cpp)]

For more information, see [Exceptions: Using MFC Macros and C++ Exceptions](exceptions-using-mfc-macros-and-cpp-exceptions.md).

## See also

[Exception Handling](exception-handling-in-mfc.md)<br/>
