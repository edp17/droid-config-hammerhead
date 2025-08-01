# These and other macros are documented in ../droid-configs-device/droid-configs.inc
# Feel free to cleanup this file by removing comments, once you have memorised them ;)

%define device hammerhead
%define vendor lge

%define vendor_pretty LG
%define device_pretty Nexus 5

%define dcd_path ./

# Sailfish OS is considered to-scale, if in app grid you get 4-in-a-row icons
# and 2x2 or 3x3 covers when up-to-4 or 5-or-more apps are open respectively.
# For 4-5.5" device screen sizes of 16:9 ratio, use this formula (hold portrait):
# pixel_ratio = 4.5/DiagonalDisplaySizeInches * HorizontalDisplayResolution/540
# Other screen sizes and ratios will require more trial-and-error.
%define pixel_ratio 2.0

# We assume most devices will
%define have_modem 1

# Community HW adaptations need this
%define community_adaptation 1

# Device-specific ofono configuration
Provides: ofono-configs
Obsoletes: ofono-configs-mer

# dropped bluez4 packaging
#Provides: droid-config-%{device}-bluez4
#Conflicts: droid-config-%{device}-bluez5
#Provides: %{device}-bluez-configs

#Requires: bluez
#Conflicts: bluez5
Requires: bluez5

#Requires: bluez-libs
#Conflicts: bluez5-libs
Requires: bluez5-libs

#Requires: obexd
#Conflicts: bluez5-obexd

#Requires: obexd-server
# no obexd-server equivalent in BlueZ 5, so no conflict

#Requires: kf5bluezqt-bluez4
#Conflicts: kf5bluezqt-bluez5
Requires: kf5bluezqt-bluez5

#Provides: bluez-configs
#Conflicts: bluez5-configs
Provides: bluez5-configs
Obsoletes: bluez-configs-sailfish > 0.0.1
Obsoletes: bluez-configs-mer > 0.0.1

#Requires: pulseaudio-modules-bluez4

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-hammerhead.inc
%include patterns/patterns-sailfish-device-configuration-hammerhead.inc

# IMPORTANT if you want to comment out any macros in your .spec, delete the %
# sign, otherwise they will remain defined! E.g.:
#define some_macro "I'll not be defined because I don't have % in front"

