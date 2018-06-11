
Debian
====================
This directory contains files used to package coiniumd/coinium-qt
for Debian-based Linux systems. If you compile coiniumd/coinium-qt yourself, there are some useful files here.

## coinium: URI support ##


coinium-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install coinium-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your coinium-qt binary to `/usr/bin`
and the `../../share/pixmaps/coinium128.png` to `/usr/share/pixmaps`

coinium-qt.protocol (KDE)

