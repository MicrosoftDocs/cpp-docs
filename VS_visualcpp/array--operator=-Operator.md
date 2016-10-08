---
title: "array::operator= Operator"
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
ms.assetid: a0438058-2f3c-4e03-aeab-a95b4fcdb756
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
# array::operator= Operator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Copies the contents of the specified <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>array &amp;  operator= (
    const array &amp; _Other ) restrict(cpu);


array &amp;  operator= (
    array &amp;&amp; _Other ) restrict(cpu);


array&amp;  operator= (
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src ) restrict(cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Other</parameterReference>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object to copy from.</para>
        </definition>
        <definedTerm> <parameterReference>_Src</parameterReference>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object to copy from.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>A reference to this <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object.</para>
    </content>
  </returnValue>
  <section>
    <title>Overloads List</title>
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
              <para />
            </TD>
            <TD>
              <para />
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>array &amp; operator= (
   const array &amp; _Other
) restrict(cpu);</codeInline>
              </para>
            </TD>
            <TD>
              <para>Copies the contents of the specified <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object into this one, using a deep copy.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>array &amp; operator= (
   array &amp;&amp; Other
) restrict(cpu);</codeInline>
              </para>
            </TD>
            <TD>
              <para>Copies the contents of the specified <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object into this one, using a move assignment.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>array&amp; operator=(
   const array_view&lt;const _Value_type, _Rank&gt;&amp; Src
) restrict(cpu);</codeInline>
              </para>
            </TD>
            <TD>
              <para>Copies the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object into an <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amp.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

