#
# Copyright (C) 2014 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Device identifier. This must come after all inclusions
PRODUCT_DEVICE := X9180
PRODUCT_BRAND := ZTE
PRODUCT_MODEL := X9180
PRODUCT_MANUFACTURER := ZTE

# System Properties
-include $(LOCAL_PATH)/system_prop.mk

# Ramdisk
PRODUCT_PACKAGES += \
    init.rc \
    fstab.X9180 \
    fstab.sd \
    fstab.int \
    fstab.zram_64 \
    fstab.zram_128 \
    fstab.zram_256 \
    fstab.zram_512 \
    init.class_main.sh \
    init.mdm.sh \
    init.nubia.sh \
    init.nubia.usb.rc \
    init.qcom.class_core.sh \
    init.qcom.early_boot.sh \
    init.qcom.factory.sh \
    init.qcom.rc \
    init.qcom.sdcard.rc \
    init.recovery.qcom.rc \
    init.qcom.sh \
    init.qcom.ssr.sh \
    init.qcom.syspart_fixup.sh \
    init.qcom.usb.sh \
    init.target.rc \
    init.trace.rc \
    init.usb.rc \
    ueventd.qcom.rc \
    ueventd.rc

PRODUCT_PACKAGES += \
    adbd \
    healthd

PRODUCT_PACKAGES += \
    file_contexts \
    property_contexts \
    seapp_contexts \
    selinux_version \
    service_contexts
