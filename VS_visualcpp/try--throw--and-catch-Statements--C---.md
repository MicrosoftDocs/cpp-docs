---
title: "try, throw, and catch Statements (C++)"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 15e6a87b-b8a5-4032-a7ef-946c644ba12a
caps.latest.revision: 22
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# try, throw, and catch Statements (C++)
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>To implement exception handling in C++, you use <languageKeyword>try</languageKeyword>, <languageKeyword>throw</languageKeyword>, and <languageKeyword>catch</languageKeyword> expressions.</para>
    <para>First, use a <languageKeyword>try</languageKeyword> block to enclose one or more statements that might throw an exception.</para>
    <para>A <languageKeyword>throw</languageKeyword> expression signals that an exceptional condition—often, an error—has occurred in a <languageKeyword>try</languageKeyword> block. You can use an object of any type as the operand of a <languageKeyword>throw</languageKeyword> expression. Typically, this object is used to communicate information about the error. In most cases, we recommend that you use the std::exception class or one of the derived classes that are defined in the standard library. If one of those is not appropriate, we recommend that you derive your own exception class from  <unmanagedCodeEntityReference>std::exception</unmanagedCodeEntityReference>.</para>
    <para>To handle exceptions that may be thrown, implement one or more <languageKeyword>catch</languageKeyword> blocks immediately following a <languageKeyword>try</languageKeyword> block. Each <languageKeyword>catch</languageKeyword> block specifies the type of exception it can handle.</para>
    <para>This example shows a <languageKeyword>try</languageKeyword> block and its handlers. Assume that <codeInline>GetNetworkResource()</codeInline> acquires data over a network connection and that the two exception types are user-defined classes that derive from <unmanagedCodeEntityReference>std::exception</unmanagedCodeEntityReference>. Notice that the exceptions are caught by <languageKeyword>const</languageKeyword> reference in the <languageKeyword>catch</languageKeyword> statement. We recommend that you throw exceptions by value and catch them by const reference.</para>
  </introduction>
  <codeExample>
    <code>
MyData md;
try {
   // Code that could throw an exception
   md = GetNetworkResource();
}
catch (const networkIOException&amp; e) {
   // Code that executes when an exception of type
   // networkIOException is thrown in the try block
   // ...
   // Log error message in the exception object
   cerr &lt;&lt; e.what();
}
catch (const myDataFormatException&amp; e) {
   // Code that handles another exception type
   // ...
   cerr &lt;&lt; e.what();
}

// The following syntax shows a throw expression
MyData GetNetworkResource()
{
   // ...
   if (IOSuccess == false)
      throw networkIOException("Unable to connect");
   // ...
   if (readError)
      throw myDataFormatException("Format error"); 
   // ...
}</code>
  </codeExample>
  <languageReferenceRemarks>
    <content>
      <para>The code after the <languageKeyword>try</languageKeyword> clause is the guarded section of code. The <languageKeyword>throw</languageKeyword> expression <newTerm>throws</newTerm>—that is, raises—an exception. The code block after the <languageKeyword>catch</languageKeyword> clause is the exception handler. This is the handler that <newTerm>catches</newTerm> the exception that's thrown if the types in the <languageKeyword>throw</languageKeyword> and <languageKeyword>catch</languageKeyword> expressions are compatible. For a list of rules that govern type-matching in <languageKeyword>catch</languageKeyword> blocks, see <link xlink:href="202dbf07-8ace-4b3b-b3ae-4b45c275e0b4">How Catch Blocks are Evaluated</link>. If the <languageKeyword>catch</languageKeyword> statement specifies an ellipsis (...) instead of a type, the <languageKeyword>catch</languageKeyword> block handles every type of exception. When you compile with the <legacyLink xlink:href="754b916f-d206-4472-b55a-b6f1b0f2cb4d">/EHa</legacyLink> option, these can include C structured exceptions and system-generated or application-generated asynchronous exceptions such as memory protection, divide-by-zero, and floating-point violations. Because <languageKeyword>catch</languageKeyword> blocks are processed in program order to find a matching type, an ellipsis handler must be the last handler for the associated <languageKeyword>try</languageKeyword> block. Use <languageKeyword>catch(...)</languageKeyword> with caution; do not allow a program to continue unless the catch block knows how to handle the specific exception that is caught. Typically, a <languageKeyword>catch(...)</languageKeyword> block is used to log errors and perform special cleanup before program execution is stopped.</para>
      <para>A <languageKeyword>throw</languageKeyword> expression that has no operand re-throws the exception currently being handled. We recommend this form when re-throwing the exception, because this preserves the original exception’s polymorphic type information. Such an expression should only be used in a <languageKeyword>catch</languageKeyword> handler or in a function that's called from a <languageKeyword>catch</languageKeyword> handler. The re-thrown exception object is the original exception object, not a copy. </para>
      <code>try {
   throw CSomeOtherException();
}
catch(...) {
   // Catch all exceptions – dangerous!!!
   // Respond (perhaps only partially) to the exception, then
   // re-throw to pass the exception to some other handler
   // ...
   throw;
}</code>
    </content>
  </languageReferenceRemarks>
  <relatedTopics>
<link xlink:href="65F80B44-9D0F-4D17-B910-07205A5C5C40">C++ Exception Handling</link>
<link xlink:href="D7CA94A8-F785-41CE-9F73-D3C4FD508489">C++ Keywords</link>
<link xlink:href="13F09C53-9254-4407-9DB9-14E730E047CC">Unhandled C++ Exceptions</link><link xlink:href="4d9b75c6-c9c7-4876-b761-ea9ab1925e96">__uncaught_exception</link>
</relatedTopics>
</developerReferenceWithoutSyntaxDocument>