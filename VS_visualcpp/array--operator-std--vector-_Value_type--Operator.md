---
title: "array::operator std::vector&lt;_Value_type&gt; Operator"
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
ms.assetid: 085af058-e29f-4f29-ade6-669f07d2ee81
caps.latest.revision: 12
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
# array::operator std::vector&lt;_Value_type&gt; Operator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Uses <codeInline>copy(*this, vector)</codeInline> to implicitly convert the array to a std::"vector" object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>operator std::vector&lt; _Value_type&gt;() const restrict(cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Value_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the elements of the vector.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>An object of type <unmanagedCodeEntityReference>vector&lt;T&gt;</unmanagedCodeEntityReference> that contains a copy of the data that is contained in the array.</para>
    </content>
  </returnValue>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amp.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="">"array Class"</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

