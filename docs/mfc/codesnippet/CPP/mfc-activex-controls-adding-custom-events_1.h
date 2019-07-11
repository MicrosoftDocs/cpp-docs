void FireClickIn(OLE_XPOS_PIXELS xCoord, OLE_YPOS_PIXELS yCoord)
{
   FireEvent(eventidClickIn, EVENT_PARAM(VTS_XPOS_PIXELS VTS_YPOS_PIXELS), xCoord, yCoord);
}