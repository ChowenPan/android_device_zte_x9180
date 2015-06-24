Device configuration for the ZTE V5 RedBull (X9180)
===============================

Local manifest for TWRP:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <remote fetch="ssh://git@gitlab.com" name="gitlab" />

  <project name="CyanogenMod/android_device_qcom_common" path="device/qcom/common" remote="github" revision="cm-12.1" />

  <project name="X9180/android_kernel_zte_x9180.git" path="kernel/ZTE/X9180" remote="gitlab" revision="cm-11.0-twrp" />
  <project name="X9180/android_device_zte_x9180.git" path="device/ZTE/X9180" remote="gitlab" revision="twrp" />

</manifest>
```

A barebone omni manifest to build TWRP easily:
https://github.com/sultanqasim/twrp_recovery_manifest
