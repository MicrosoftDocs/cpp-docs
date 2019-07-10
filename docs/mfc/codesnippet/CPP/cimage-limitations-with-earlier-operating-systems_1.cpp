if (CImage::IsTransparencySupported())
{
   // Safe to call CImage::AlphaBlend and CImage::TransparentBlt
}
else
{
   // Transparency not supported.  Fall back to something else.
}