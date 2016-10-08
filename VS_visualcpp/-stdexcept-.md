---
title: "&lt;stdexcept&gt;"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 495c10b1-1e60-4514-9f8f-7fda11a2f522
caps.latest.revision: 15
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
# &lt;stdexcept&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines several standard classes used for reporting exceptions. The classes form a derivation hierarchy all derived from class <legacyLink xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception</legacyLink> and include two general types of exceptions: logical errors and run-time errors. The logical errors are caused programmer mistakes. They derive from the base class logic_error and include:</para>
    <list class="bullet">
      <listItem>
        <para> <unmanagedCodeEntityReference>domain_error</unmanagedCodeEntityReference>
        </para>
      </listItem>
      <listItem>
        <para> <unmanagedCodeEntityReference>invalid_argument</unmanagedCodeEntityReference>
        </para>
      </listItem>
      <listItem>
        <para> <unmanagedCodeEntityReference>length_error</unmanagedCodeEntityReference>
        </para>
      </listItem>
      <listItem>
        <para> <unmanagedCodeEntityReference>out_of_range</unmanagedCodeEntityReference>
        </para>
      </listItem>
    </list>
    <para>The run-time errors occur because of mistakes in either the library functions or in the run-time system. They derive from the base class runtime_error and include:</para>
    <list class="bullet">
      <listItem>
        <para> <unmanagedCodeEntityReference>overflow_error</unmanagedCodeEntityReference>
        </para>
      </listItem>
      <listItem>
        <para> <unmanagedCodeEntityReference>range_error</unmanagedCodeEntityReference>
        </para>
      </listItem>
      <listItem>
        <para> <unmanagedCodeEntityReference>underflow_error</unmanagedCodeEntityReference>
        </para>
      </listItem>
    </list>
  </introduction>
  <section>
    <title />
    <content />
    <sections>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a1d8245d-61c2-4d1e-973f-073bd5dd5fa3">domain_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report a domain error.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="af6c227d-ad7c-4e63-9dee-67af81d83506">invalid_argument Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report an invalid argument.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="d53c46c5-4626-400d-bd76-bf3e1e0f64ae">length_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="b290d73d-94e1-4288-af86-2bb5d71f677a">logic_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report errors presumably detectable before the program executes, such as violations of logical preconditions.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="d0e14dc0-065e-4666-9ac9-51e52223c503">out_of_range Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report an argument that is out of its valid range.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="bae7128d-e36b-4a45-84f1-2f89da441d20">overflow_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report an arithmetic overflow.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="8afb3e88-fc49-4213-b096-ed63d7aea37c">range_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report a range error.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="4d0227bf-847b-45a2-a320-2351ebf98368">runtime_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report errors presumably detectable only when the program executes.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="d632f1f9-9c6c-4954-b96b-03041bfab22d">underflow_error Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>The class serves as the base class for all exceptions thrown to report an arithmetic underflow.</para>
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
</developerReferenceWithoutSyntaxDocument>



