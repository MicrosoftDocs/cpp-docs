---
title: "EventSource::InvokeAll Method"
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
ms.topic: reference
ms.assetid: 1506618f-0421-4428-a4d0-4ea2b10a3bf6
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# EventSource::InvokeAll Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Calls each event handler associated with the current EventSource object using the specified argument types and arguments.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void InvokeAll();
template &lt;
   typename <parameterReference>T0</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>,
   typename <parameterReference>T5</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>,
   <parameterReference>T5</parameterReference><parameterReference>arg5</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>,
   typename <parameterReference>T5</parameterReference>,
   typename <parameterReference>T6</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>,
   <parameterReference>T5</parameterReference><parameterReference>arg5</parameterReference>,
   <parameterReference>T6</parameterReference><parameterReference>arg6</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>,
   typename <parameterReference>T5</parameterReference>,
   typename <parameterReference>T6</parameterReference>,
   typename <parameterReference>T7</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>,
   <parameterReference>T5</parameterReference><parameterReference>arg5</parameterReference>,
   <parameterReference>T6</parameterReference><parameterReference>arg6</parameterReference>,
   <parameterReference>T7</parameterReference><parameterReference>arg7</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>,
   typename <parameterReference>T5</parameterReference>,
   typename <parameterReference>T6</parameterReference>,
   typename <parameterReference>T7</parameterReference>,
   typename <parameterReference>T8</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>,
   <parameterReference>T5</parameterReference><parameterReference>arg5</parameterReference>,
   <parameterReference>T6</parameterReference><parameterReference>arg6</parameterReference>,
   <parameterReference>T7</parameterReference><parameterReference>arg7</parameterReference>,
   <parameterReference>T8</parameterReference><parameterReference>arg8</parameterReference>
);
template &lt;
   typename <parameterReference>T0</parameterReference>,
   typename <parameterReference>T1</parameterReference>,
   typename <parameterReference>T2</parameterReference>,
   typename <parameterReference>T3</parameterReference>,
   typename <parameterReference>T4</parameterReference>,
   typename <parameterReference>T5</parameterReference>,
   typename <parameterReference>T6</parameterReference>,
   typename <parameterReference>T7</parameterReference>,
   typename <parameterReference>T8</parameterReference>,
   typename <parameterReference>T9</parameterReference>
&gt;
void InvokeAll(
   <parameterReference>T0</parameterReference><parameterReference>arg0</parameterReference>,
   <parameterReference>T1</parameterReference><parameterReference>arg1</parameterReference>,
   <parameterReference>T2</parameterReference><parameterReference>arg2</parameterReference>,
   <parameterReference>T3</parameterReference><parameterReference>arg3</parameterReference>,
   <parameterReference>T4</parameterReference><parameterReference>arg4</parameterReference>,
   <parameterReference>T5</parameterReference><parameterReference>arg5</parameterReference>,
   <parameterReference>T6</parameterReference><parameterReference>arg6</parameterReference>,
   <parameterReference>T7</parameterReference><parameterReference>arg7</parameterReference>,
   <parameterReference>T8</parameterReference><parameterReference>arg8</parameterReference>,
   <parameterReference>T9</parameterReference><parameterReference>arg9</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>T0</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the zeroth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T1</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the first event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T2</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the second event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T3</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the third event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T4</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the fourth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T5</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the fifth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T6</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the sixth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T7</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the seventh event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T8</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the eigth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>T9</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the ninth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg0</parameterReference>
        </definedTerm>
        <definition>
          <para>The zeroth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg1</parameterReference>
        </definedTerm>
        <definition>
          <para>The first event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg2</parameterReference>
        </definedTerm>
        <definition>
          <para>The second event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg3</parameterReference>
        </definedTerm>
        <definition>
          <para>The third event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg4</parameterReference>
        </definedTerm>
        <definition>
          <para>The fourth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg5</parameterReference>
        </definedTerm>
        <definition>
          <para>The fifth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg6</parameterReference>
        </definedTerm>
        <definition>
          <para>The sixth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg7</parameterReference>
        </definedTerm>
        <definition>
          <para>The seventh event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg8</parameterReference>
        </definedTerm>
        <definition>
          <para>The eigth event handler argument.</para>
        </definition>
        <definedTerm>
          <parameterReference>arg9</parameterReference>
        </definedTerm>
        <definition>
          <para>The ninth event handler argument.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>event.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>