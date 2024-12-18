include ${@bb.utils.contains('DISTRO_FEATURES', 'coco', 'core-image-tiny-initramfs.inc', '', d)}
