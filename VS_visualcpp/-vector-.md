---
title: "&lt;vector&gt;"
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
ms.assetid: c1431ad8-c0b6-4dbb-89c4-5f651e432d7f
caps.latest.revision: 21
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
# &lt;vector&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines the container template class vector and several supporting templates.</para>
    <para>The <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> is a container that organizes elements of a given type in a linear sequence. It enables fast random access to any element, and dynamic additions and removals to and from the sequence. The <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> is the preferred container for a sequence when random-access performance is at a premium.</para>
    <para>For more information about the class <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference>, see <link xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</link>. For information about the specialization <codeInline>vector&lt;bool&gt;</codeInline>, see <link xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb">vector&lt;bool&gt; Class</link>.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace std {
template&lt;class Type, class Allocator&gt;
    class vector;
template&lt;class Allocator&gt;
    class vector&lt;bool&gt;;

template&lt;class Allocator&gt;
    struct hash&lt;vector&lt;bool, Allocator&gt; &gt;;

        // TEMPLATE FUNCTIONS
template&lt;class Type, class Allocator&gt;
    bool operator== (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    bool operator!= (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    bool operator&lt; (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    bool operator&gt; (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    bool operator&lt;= (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    bool operator&gt;= (
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        const vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Allocator&gt;
    void swap (
        vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Left</parameterReference>,
        vector&lt; Type, Allocator&gt;&amp; <parameterReference>_Right</parameterReference>
    );
}  // namespace std</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>Type</definedTerm>
        <definition>
          <para>The template parameter for the type of data stored in the vector.</para>
        </definition>
        <definedTerm>Allocator</definedTerm>
        <definition>
          <para>The template parameter for the stored allocator object responsible for memory allocation and deallocation.</para>
        </definition>
        <definedTerm> <parameterReference>_Left</parameterReference>
        </definedTerm>
        <definition>
          <para>The first (left) vector in a compare operation</para>
        </definition>
        <definedTerm> <parameterReference>_Right</parameterReference>
        </definedTerm>
        <definition>
          <para>The second (right) vector in a compare operation.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <content />
    <sections>
      <section>
        <title>Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_neq">operator! =</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is not equal to the vector object on the right side.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_lt_">operator&lt;</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is less than the vector object on the right side.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_lt__eq">operator&lt;=</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is less than or equal to the vector object on the right side.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_eq_eq">operator==</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is equal to the vector object on the right side.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_gt_">operator&gt;</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is greater than the vector object on the right side.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="1d14f312-6f59-4ec7-88ae-95f89a558823#operator_gt__eq">operator&gt;=</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the vector object on the left side of the operator is greater than or equal to the vector object on the right side.</para>
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
                  <para> <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A template class of sequence containers that arrange elements of a given type in a linear arrangement and allow fast random access to any element. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Specializations</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="8028c8ed-ac9c-4f06-aba1-5de45c00aafb">vector&lt;bool&gt; Class</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>A full specialization of the template class vector for elements of type <languageKeyword>bool</languageKeyword> with an allocator for the underlying type used by the specialization.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header:</embeddedLabel> &lt;vector&gt;</para>
      <para>
        <embeddedLabel>Namespace:</embeddedLabel> std</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="e7bf497a-0f63-48d0-9b54-cb0eef4073c4">Header Files</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>



