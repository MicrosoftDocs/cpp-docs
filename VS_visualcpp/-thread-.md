---
title: "&lt;thread&gt;"
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
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
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
# &lt;thread&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Include the standard header &lt;thread&gt; to define the class <unmanagedCodeEntityReference>thread</unmanagedCodeEntityReference> and various supporting functions.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax language="cpp">#include &lt;thread&gt;</legacySyntax>
  </syntaxSection>
  <languageReferenceRemarks>
    <content>
      <alert class="note">
        <para>In code that is compiled by using <system>/clr</system> or <system>/clr:pure</system>, this header is blocked.</para>
      </alert>
      <para>The <unmanagedCodeEntityReference>__STDCPP_THREADS__</unmanagedCodeEntityReference> macro is defined as a nonzero value to indicate that threads are supported by this header.</para>
    </content>
  </languageReferenceRemarks>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Public Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> "thread Class"
                  </para>
                </TD>
                <TD>
                  <para>Defines an object that is used to observe and manage a thread of execution in an application.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Public Structures</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="4a8bf5bc-4334-4070-936b-98585f8a073b">hash Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Defines a member function that returns a value that is uniquely determined by a <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference>. The member function defines a "hash function" that is suitable for mapping values of type <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> to a distribution of index values.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Public Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19#get_id_function">get_id Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Uniquely identifies the current thread of execution.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19#sleep_for_function">sleep_for Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Blocks the calling thread.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19#sleep_until_function">sleep_until Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Blocks the calling thread at least until the specified time.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19#swap_function">swap Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Exchanges the states of two <unmanagedCodeEntityReference>thread</unmanagedCodeEntityReference> objects.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19#yield_function">yield Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Public Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_gt__eq">operator&gt;= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether one <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> object is greater than or equal to another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_gt_">operator&gt; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether one <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> object is greater than another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_lt__eq">operator&lt;= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether one <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> object is less than or equal to another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_lt_">operator&lt; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Determines whether one <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> object is less than another.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_neq">operator!= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Compares two <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> objects for inequality.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_eq_eq">operator== Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Compares two <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> objects for equality.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac#operator_lt__lt_">operator&lt;&lt; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Inserts a text representation of a <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> object into a stream.</para>
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



