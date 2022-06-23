%package -n patterns-sailfish-device-adaptation-hammerhead
Summary: Jolla HW Adaptation hammerhead
Requires: droid-hal-hammerhead
Requires: droid-hal-hammerhead-img-boot
Requires: droid-hal-hammerhead-kernel
Requires: droid-hal-hammerhead-kernel-modules
Requires: droid-config-hammerhead-sailfish
Requires: droid-config-hammerhead-pulseaudio-settings
Requires: droid-config-hammerhead-policy-settings
Requires: droid-config-hammerhead-preinit-plugin
Requires: droid-config-hammerhead-flashing
Requires: droid-config-hammerhead-bluez4
Requires: droid-hal-version-hammerhead

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5-hal

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
#Requires: pulseaudio-modules-droid-glue
Requires: pulseaudio-modules-droid-hidl
#edp17- for bluez4
Requires: pulseaudio-modules-bluez4

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

Requires: audiosystem-passthrough-dummy-af

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# For GPS
Requires: geoclue-provider-hybris-hal

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC for devices using Android 8 or newer as base
#Requires: nfcd-binder-plugin
#Requires: jolla-settings-system-nfc

%description -n patterns-sailfish-device-adaptation-hammerhead
Pattern with packages for hammerhead HW Adaptation

%files -n patterns-sailfish-device-adaptation-hammerhead
