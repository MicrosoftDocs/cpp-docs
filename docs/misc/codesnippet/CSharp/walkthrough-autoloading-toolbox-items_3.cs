    // Set the display name and custom bitmap to use for this item.
    // The build action for the bitmap must be "Embedded Resource".
    [DisplayName("ToolboxMember 1 CS")]
    [Description("Custom toolbox item from package LoadToolboxMembers.")]
    [ToolboxItem(true)]
    [ToolboxBitmap(typeof(Control1), "Control1.bmp")]
    public partial class Control1 : UserControl
    {