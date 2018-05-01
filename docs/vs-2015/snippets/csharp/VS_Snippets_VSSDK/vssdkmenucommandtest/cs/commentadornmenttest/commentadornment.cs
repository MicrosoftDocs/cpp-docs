using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//<Snippet1>
using Microsoft.VisualStudio.Text;
//</Snippet1>

namespace CommentAdornmentTest
{
    //<Snippet2>
    internal class CommentAdornment
    //</Snippet2>
    {
        //<Snippet3>
        public readonly ITrackingSpan Span;
        public readonly string Author;
        public readonly string Text;
        //</Snippet3>

        //<Snippet4>
        public CommentAdornment(SnapshotSpan span, string author, string text)
        {
            this.Span = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeExclusive);
            this.Author = author;
            this.Text = text;
        }
        //</Snippet4>
    }
}