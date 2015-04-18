Device configuration for the ZTE V5 RedBull (X9180)
===============================

Local manifest for CM11:

```
#!xml

<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <remote fetch="ssh://git@gitlab.com" name="gitlab" />
  <project name="CyanogenMod/android_device_qcom_common" path="device/qcom/common" remote="github" />
  <project name="CyanogenMod/android_hardware_qcom_fm" path="hardware/qcom/fm" remote="github" />
  <project name="CyanogenMod/android_hardware_qcom_display-caf-new" path="hardware/qcom/display-caf-new" remote="github" />
  <project name="CyanogenMod/android_hardware_qcom_media-caf-new" path="hardware/qcom/media-caf-new" remote="github" />

  <project name="proDOOMman/android_device_zte_x9180.git" path="device/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_kernel_zte_x9180.git" path="kernel/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_device_zte_x9180_proprietary.git" path="vendor/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
</manifest>
```

Local manifest for Mokee:

```
#!xml

<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <remote fetch="ssh://git@gitlab.com" name="gitlab" />
  <project name="CyanogenMod/android_device_qcom_common" path="device/qcom/common" />
  <project name="CyanogenMod/android_hardware_qcom_fm" path="hardware/qcom/fm" />
  <project name="CyanogenMod/android_hardware_qcom_display-caf-new" path="hardware/qcom/display-caf-new" />
  <project name="CyanogenMod/android_hardware_qcom_media-caf-new" path="hardware/qcom/media-caf-new" />

  <project name="proDOOMman/android_device_zte_x9180.git" path="device/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_kernel_zte_x9180.git" path="kernel/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_device_zte_x9180_proprietary.git" path="vendor/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
</manifest>
```

Local manifest for PAC ROM:

```
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <remote fetch="ssh://git@gitlab.com" name="gitlab" />
  <project name="Cyanogenmod/android_device_qcom_common" path="device/qcom/common" />
  <project name="Cyanogenmod/android_hardware_qcom_fm" path="hardware/qcom/fm" />
  <project name="Cyanogenmod/android_hardware_qcom_display-caf-new" path="hardware/qcom/display-caf-new" />
  <project name="Cyanogenmod/android_hardware_qcom_media-caf-new" path="hardware/qcom/media-caf-new" />

  <project name="proDOOMman/android_device_zte_x9180.git" path="device/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_kernel_zte_x9180.git" path="kernel/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
  <project name="proDOOMman/android_device_zte_x9180_proprietary.git" path="vendor/ZTE/X9180" remote="gitlab" revision="cm-11.0" />
</manifest>
```

Make rule for PAC ROM (vendor/pac/products/pac_X9180.mk):
```
# Check for target product
ifeq (pac_X9180,$(TARGET_PRODUCT))

# PAC boot logo
PRODUCT_COPY_FILES += \
    vendor/pac/prebuilt/common/bootlogo/pac_logo_720x1280.rle:root/logo.rle

# Copy bootanimation
PRODUCT_COPY_FILES += \
    vendor/pac/prebuilt/720x1280/bootanimation.zip:system/media/bootanimation.zip

# include PAC common configuration
include vendor/pac/config/pac_common.mk

# Inherit CM device configuration
$(call inherit-product, device/ZTE/X9180/cm.mk)

PRODUCT_NAME := pac_X9180

endif
```
