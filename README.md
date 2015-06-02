Device configuration for the ZTE V5 RedBull (X9180)
===============================

Local manifest for SlimRom:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <remote fetch="ssh://git@gitlab.com" name="gitlab" />

  <project name="X9180/android_kernel_zte_x9180.git" path="kernel/ZTE/X9180" remote="gitlab" revision="cm-12.1" />
  <project name="X9180/android_device_zte_x9180.git" path="device/ZTE/X9180" remote="gitlab" revision="slim-5.1" />
  <project name="X9180/android_device_zte_x9180_proprietary.git" path="vendor/ZTE/X9180" remote="gitlab" revision="cm-12.1" />
</manifest>
```
