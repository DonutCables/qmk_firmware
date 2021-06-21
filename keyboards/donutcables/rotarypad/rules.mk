# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

# If you don't know the bootloader type, then you can specify the
# Boot Section Size in *bytes* by uncommenting out the OPT_DEFS line
# Otherwise, delete this section
#   Teensy halfKay      512
#   Teensy++ halfKay    1024
#   Atmel DFU loader    4096
#   LUFA bootloader     4096
#   USBaspLoader        2048
# OPT_DEFS += -DBOOTLOADER_SIZE=4096

# Build Options
#   change yes to no to disable
#

EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
ENCODER_ENABLE = yes 		# Enable support for encoders
