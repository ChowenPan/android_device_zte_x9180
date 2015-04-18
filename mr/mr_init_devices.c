#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",

    "/sys/devices/msm_sdcc.1",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p18",	// boot
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p26",	// userdata
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23",	// cache
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21",	// system
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p22",	// persist
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1",	// modem (firmware)
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p27",	// grow (internal storage)

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",
    
    "/sys/devices/gpio_keys.74",
    "/sys/devices/gpio_keys.74/input/input4",
    "/sys/devices/gpio_keys.74/input/input4/event4",
    "/sys/devices/virtual/input/input0/event0",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/input/input1/event1",
    "/sys/devices/virtual/input/input1",
    "/sys/devices/virtual/input/input2/event2",
    "/sys/devices/virtual/input/input2",
    "/sys/devices/virtual/input/input3/event3",
    "/sys/devices/virtual/input/input3",
    "/sys/devices/virtual/misc/uinput",
    "/sys/module/uinput",

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB drive is in here
    "/sys/devices/platform/msm_hsusb_host",
    "/sys/bus/platform/drivers/msm_ehci_host",

    "/sys/block/mmcblk1",
    
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1",
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1/mmc1:59b4",
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1/mmc1:59b4/block/mmcblk1",
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1/mmc1:59b4/block/mmcblk1/mmcblk1p1",	// sdcard

    NULL
};
