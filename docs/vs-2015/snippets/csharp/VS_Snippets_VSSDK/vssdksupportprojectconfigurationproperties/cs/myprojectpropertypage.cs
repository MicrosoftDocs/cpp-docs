using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ComponentModel;

namespace Microsoft.VSSDKSupportProjectConfigurationProperties
{
    public class MyProjectPropertyPage
    {
        //<Snippet2>
        public bool IsDirty { get; set; }
        private string myConfigProp;

        [Category("My Category")]
        [DisplayName("My Config Property")]
        [Description("My Description")]
        public string MyConfigProp
        {
            get { return myConfigProp; }
            set { myConfigProp = value; IsDirty = true; }
        }
        //</Snippet2>
    }
}
