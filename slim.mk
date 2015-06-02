$(call inherit-product, device/ZTE/X9180/full_X9180.mk)

# Inherit some common SlimRoms stuff
$(call inherit-product, vendor/slim/config/common_full_phone.mk)

PRODUCT_RELEASE_NAME := ZTE V5 RedBull
PRODUCT_NAME := slim_X9180

PRODUCT_PROPERTY_OVERRIDES += \
    ro.ota.romname=SlimRom-X9180 \
    ro.ota.manifest=https://romhut.com/roms/slimrom-x9180/ota.xml \
    ro.ota.version=$(shell date +%Y%m%d)

PRODUCT_PACKAGES += OTAUpdates
