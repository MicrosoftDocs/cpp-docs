---
title: "&lt;exception&gt;"
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
ms.topic: article
ms.assetid: 28900768-5dd7-4834-b907-5e37ab3407db
caps.latest.revision: 17
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
# &lt;exception&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines several types and functions related to the handling of exceptions. Exception handling is used in situations in which the system can recover from an error. It provides a means for control to be returned from a function to the program. The objective of incorporating exception handling is to increase the program's robustness while providing a way to recover from an error in an orderly fashion.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax> <legacyBold>#include &lt;exception&gt;</legacyBold>
    </legacySyntax>
  </syntaxSection>
  <section>
    <title />
    <content />
    <sections>
      <section>
        <title>Typedefs</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#exception_ptr">exception_ptr</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A type that describes a pointer to an exception.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#terminate_handler">terminate_handler</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A type that describes a pointer to a function suitable for use as a <unmanagedCodeEntityReference>terminate_handler</unmanagedCodeEntityReference>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="2a338480-35e2-46f7-b223-52d4e84a5768#unexpected_handler">unexpected_handler</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A type that describes a pointer to a function suitable for use as an <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference>.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#current_exception">current_exception</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Obtains a pointer to the current exception.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#get_terminate">get_terminate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Obtains the current <unmanagedCodeEntityReference>terminate_handler</unmanagedCodeEntityReference> function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#get_unexpected">get_unexpected</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Obtains the current <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference> function.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#make_exception_ptr">make_exception_ptr</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Creates an <unmanagedCodeEntityReference>exception_ptr</unmanagedCodeEntityReference> object that holds a copy of an exception.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#rethrow_exception">rethrow_exception</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Throws an exception passed as a parameter.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_terminate">set_terminate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Establishes a new <unmanagedCodeEntityReference>terminate_handler</unmanagedCodeEntityReference> to be called at the termination of the program.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Establishes a new <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference> to be when an unexpected exception is encountered.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#terminate">terminate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Calls a terminate handler.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#uncaught_exception">uncaught_exception</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Returns <legacyBold>true</legacyBold> only if a thrown exception is being currently processed.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#unexpected">unexpected</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Calls an unexpected handler.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="5ae2c4ef-c7ad-4469-8a9e-a773e86bb000">bad_exception Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class describes an exception that can be thrown from an <unmanagedCodeEntityReference>unexpected_handler</unmanagedCodeEntityReference>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>exception Class
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown by certain expressions and by the Standard C++ Library.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics> <link xlink:href="e7bf497a-0f63-48d0-9b54-cb0eef4073c4">Header Files</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>



