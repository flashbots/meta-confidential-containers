DISTRO_FEATURES_VIRTUALIZATION = " virtualization"
DISTRO_FEATURES_PODMAN = "seccomp kvm aufs sysvinit"
DISTRO_FEATURES:append = "${DISTRO_FEATURES_VIRTUALIZATION} \
                          ${DISTRO_FEATURES_PODMAN} \
                         "
PACKAGE_INSTALL:append = " podman go-pod-provisioning"
