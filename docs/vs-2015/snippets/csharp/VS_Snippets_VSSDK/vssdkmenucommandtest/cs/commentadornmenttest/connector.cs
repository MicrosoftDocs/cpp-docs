//<Snippet10>
using System.ComponentModel.Composition;
using Microsoft.VisualStudio.Text.Editor;
using Microsoft.VisualStudio.Utilities;
//</Snippet10>

namespace CommentAdornmentTest
{
    //<Snippet11>
    [Export(typeof(IWpfTextViewCreationListener))]
    [ContentType("text")]
    [TextViewRole(PredefinedTextViewRoles.Document)]
    public sealed class Connector : IWpfTextViewCreationListener
    //</Snippet11>
    {
        //<Snippet12>
        public void TextViewCreated(IWpfTextView textView)
        {
            CommentAdornmentManager.Create(textView);
        }
        //</Snippet12>

        //<Snippet13>
        static public void Execute(IWpfTextViewHost host)
        {
            IWpfTextView view = host.TextView;
            //Add a comment on the selected text.
            if (!view.Selection.IsEmpty)
            {
                //Get the provider for the comment adornments in the property bag of the view.
                CommentAdornmentProvider provider = view.Properties.GetProperty<CommentAdornmentProvider>(typeof(CommentAdornmentProvider));

                //Add some arbitrary author and comment text.
                string author = System.Security.Principal.WindowsIdentity.GetCurrent().Name;
                string comment = "Four score....";

                //Add the comment adornment using the provider.
                provider.Add(view.Selection.SelectedSpans[0], author, comment);
            }
        }
        //</Snippet13>

        //<Snippet14>
        [Export(typeof(AdornmentLayerDefinition))]
        [Name("CommentAdornmentLayer")]
        [Order(After = PredefinedAdornmentLayers.Selection, Before = PredefinedAdornmentLayers.Text)]
        public AdornmentLayerDefinition commentLayerDefinition;
        //</Snippet14>
    }
}