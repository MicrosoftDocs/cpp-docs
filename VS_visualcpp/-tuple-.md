---
title: "&lt;tuple&gt;"
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
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
caps.latest.revision: 16
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
# &lt;tuple&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines a template <codeInline>tuple</codeInline> whose instances hold objects of varying types.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>#include &lt;tuple&gt;</legacySyntax>
  </syntaxSection>
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
                  <para> <link xlink:href="c38749be-ae4d-41f3-98ea-6aa3250de9a3">tuple</link>
                  </para>
                </TD>
                <TD>
                  <para>Wraps a fixed-length sequence of elements.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4c51a6c1-ce81-462f-8c6c-291d69f2b77c">tuple_element</link>
                  </para>
                </TD>
                <TD>
                  <para>Wraps the type of a <codeInline>tuple</codeInline> element.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="73852fc5-eb68-41f1-8379-465cedc2314a">tuple_size</link>
                  </para>
                </TD>
                <TD>
                  <para>Wraps <codeInline>tuple</codeInline> element count.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_eq_eq">operator==</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, equal</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_neq">operator!=</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, not equal</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_lt_">operator&lt;</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, less than</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_lt__eq">operator&lt;=</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, less than or equal</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_gt_">operator&gt;</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, greater than</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f25752dc-d3e2-4e12-b5ac-9a8682ca60ed#operator_gt__eq">operator&gt;=</link>
                  </para>
                </TD>
                <TD>
                  <para>Comparison of <codeInline>tuple</codeInline> objects, greater than or equal</para>
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
                  <para> <link xlink:href="bc6be38f-5258-4c14-b81b-63caa335fd44#get_function">get</link>
                  </para>
                </TD>
                <TD>
                  <para>Gets an element from a <codeInline>tuple</codeInline> object.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bc6be38f-5258-4c14-b81b-63caa335fd44#make_tuple_function">make_tuple</link>
                  </para>
                </TD>
                <TD>
                  <para>Makes a <codeInline>tuple</codeInline> from element values.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bc6be38f-5258-4c14-b81b-63caa335fd44#tie_function">tie</link>
                  </para>
                </TD>
                <TD>
                  <para>Makes a <codeInline>tuple</codeInline> from element references.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics> <link xlink:href="084147c1-e805-478e-8201-76846020f187">&lt;array&gt;</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>



