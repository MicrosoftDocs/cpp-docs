// Initialize our control's default size to 100 by 25 pixels
CMyControl::CMyControl()
{
    // width = 100 pixels, height = 25 pixels
    SIZE sz = { 100, 25 };
    // convert pixels to himetric
    AtlPixelToHiMetric(&sz, &m_sizeExtent);
    // store natural extent
    m_sizeNatural = m_sizeExtent;
}