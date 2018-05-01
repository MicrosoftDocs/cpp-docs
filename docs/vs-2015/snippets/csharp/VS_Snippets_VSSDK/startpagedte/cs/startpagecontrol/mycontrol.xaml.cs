// Copyright (c) Microsoft Corporation.  All rights reserved.
using System;
using System.Windows;
using System.Windows.Controls;

//<snippet11>
using EnvDTE80;
using Microsoft.VisualStudio.Shell;
using Microsoft.VisualStudio.Shell.Interop;
using System.ComponentModel;
//</snippet11>

namespace StartPageControl
{
    /// <summary>
    /// Interaction logic for MyControl.xaml
    /// </summary>
    public partial class MyControl : UserControl
    {
        public MyControl()
        {
            InitializeComponent();
        }

        //<snippet14>
        private void OnLoaded(Object sender, RoutedEventArgs e)
        {
            string value;
            SettingsStore.GetStringOrDefault(
                "MySettings", "MySetting", "", out value);
            txtblk.Text = value;
        }
        //</snippet14>

        //<snippet12>
        private IVsWritableSettingsStore _settingsStore = null;
        private IVsWritableSettingsStore SettingsStore
        {
            get
            {
                if (_settingsStore == null)
                {
                    // Get a reference to the DTE from the DataContext.
                    var typeDescriptor = DataContext as ICustomTypeDescriptor;
                    var propertyCollection = typeDescriptor.GetProperties();
                    var dte = propertyCollection.Find("DTE", false).GetValue(
                        DataContext) as DTE2;

                    // Get the settings manager from the DTE.
                    var serviceProvider = new ServiceProvider(
                        (Microsoft.VisualStudio.OLE.Interop.IServiceProvider)dte);
                    var settingsManager = serviceProvider.GetService(
                        typeof(SVsSettingsManager)) as IVsSettingsManager;

                    // Write the user settings to _settingsStore.
                    settingsManager.GetWritableSettingsStore(
                        (uint)__VsSettingsScope.SettingsScope_UserSettings,
                        out _settingsStore);
                }
                return _settingsStore;
            }
        }
        //</snippet12>

        //<snippet13>
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            int exists = 0;
            SettingsStore.CollectionExists("MySettings", out exists);
            if (exists != 1)
            {
                SettingsStore.CreateCollection("MySettings");
            }
            SettingsStore.SetString("MySettings", "MySetting", txtblk.Text);
        }
        //</snippet13>
    }
}
