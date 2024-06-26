#!/bin/sh


# inkscape --export-type png --export-filename icon-512x512.png -w 512 -h 512 xlogo.svg
# inkscape --export-type png --export-filename icon-512x512@2x.png -w 1024 -h 1024 xlogo.svg
# iconutil --convert icns icon.iconset

inkscape --export-type png --export-filename icon.png -w 1024 -h 1024 xlogo.svg
mkdir icon.iconset
sips -z 16 16     icon.png --out icon.iconset/icon_16x16.png
sips -z 32 32     icon.png --out icon.iconset/icon_16x16@2x.png
sips -z 32 32     icon.png --out icon.iconset/icon_32x32.png
sips -z 64 64     icon.png --out icon.iconset/icon_32x32@2x.png
sips -z 128 128   icon.png --out icon.iconset/icon_128x128.png
sips -z 256 256   icon.png --out icon.iconset/icon_128x128@2x.png
sips -z 256 256   icon.png --out icon.iconset/icon_256x256.png
sips -z 512 512   icon.png --out icon.iconset/icon_256x256@2x.png
sips -z 512 512   icon.png --out icon.iconset/icon_512x512.png
cp icon.png icon.iconset/icon_512x512@2x.png
iconutil --convert icns icon.iconset
# rm -R icon.iconset
