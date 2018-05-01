using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.VisualStudio.Shell;
using System.ComponentModel;

namespace Microsoft.VSSDKSupportForOptionsPages
{
    class OptionsPageCustom : DialogPage
    {
        //<Snippet3>
        [Category("My Options")]
        [DisplayName("Integer Option")]
        [Description("My integer option")]
        public int OptionInteger { get; set; }
        //</Snippet3>
    }
}
