FILESEXTRAPATHS:prepend := "${THISDIR}/linux-yocto:"

SRC_URI += "file://podman.scc file://podman.cfg"

KERNEL_FEATURES:append:tdx=" podman.scc"
# Load specific modules
KERNEL_MODULE_AUTOLOAD += "ip_tables xt_multiport"
KERNEL_FEATURES:append:tdx=" features/netfilter/netfilter.scc"
