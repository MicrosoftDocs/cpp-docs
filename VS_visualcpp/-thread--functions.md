---
title: "&lt;thread&gt; functions"
ms.custom: na
ms.date: 10/07/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
caps.latest.revision: 8
---
# &lt;thread&gt; functions
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para/>
    </introduction>
    <section>
        <content>
            <table>
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#get_id_function">get_id Function</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#sleep_for_function">sleep_for Function</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#sleep_until_function">sleep_until Function</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#swap_function">swap Function</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#yield_function">yield Function</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="get_id_function">
        <!--4ee085be-3edd-4dcc-9276-7bda03a95393-->
        <title>get_id Function</title>
        <content>
            <para>Uniquely identifies the current thread of execution.</para>
            <legacySyntax>thread::id this_thread::get_id() _NOEXCEPT;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An object of type <legacyLink xlink:href="df249bc7-ff81-4ff9-a6d6-5e3d9a8f56a1#thread__id_class">thread::id</legacyLink> that uniquely identifies the current thread of execution.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="sleep_for_function">
        <!--1175fcb1-1dd5-49ed-8401-de639d878c98-->
        <title>sleep_for Function</title>
        <content>
            <para>Blocks the calling thread.</para>
            <legacySyntax>template&lt;class <parameterReference>Rep</parameterReference>,
class <parameterReference>Period</parameterReference>&gt;
inline void sleep_for(
   const chrono::duration&lt; <parameterReference>Rep</parameterReference>, <parameterReference>Period</parameterReference>&gt;&amp; <parameterReference>Rel_time</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Rel_time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="06b863b3-65be-4ded-a72e-6e1eb1531077">duration</legacyLink> object that specifies a time interval.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function blocks the calling thread for at least the time that's specified by <parameterReference>Rel_time</parameterReference>. This function does not throw any exceptions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="sleep_until_function">
        <!--fc6bc4eb-d957-4302-87a8-71d2d435596f-->
        <title>sleep_until Function</title>
        <content>
            <para>Blocks the calling thread at least until the specified time.</para>
            <legacySyntax>template&lt;class Clock, class Duration&gt;
    void sleep_until(const chrono::time_point&lt;Clock, Duration&gt;&amp; Abs_time);
void sleep_until(const xtime *Abs_time);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Abs_time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Represents a point in time.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function does not throw any exceptions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="swap_function">
        <!--5db784d4-e334-450d-9e3c-4c121b2a14dc-->
        <title>swap Function</title>
        <content>
            <para>Swaps the states of two <unmanagedCodeEntityReference>thread</unmanagedCodeEntityReference> objects.</para>
            <legacySyntax>void swap(
   thread&amp; <parameterReference>Left</parameterReference>,
   thread&amp; <parameterReference>Right</parameterReference>
) _NOEXCEPT;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The left <unmanagedCodeEntityReference>thread</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The right <unmanagedCodeEntityReference>thread</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function calls <codeInline>Left.swap(Right)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="yield_function">
        <!--da575b51-177a-4ec6-963d-b29e2df70aab-->
        <title>yield Function</title>
        <content>
            <para>Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.</para>
            <legacySyntax>inline void yield() _NOEXCEPT;</legacySyntax>
        </content>
        <sections/>
    </section>
    <relatedTopics> <link xlink:href="0c858405-4efb-449d-bf76-70d3693c9234">&amp;lt;thread&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



